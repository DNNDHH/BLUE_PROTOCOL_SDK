#pragma once

 

// Package: WeaponSynthePart_TokenBoxItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.OnSelected__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WeaponSynthePart_TokenBoxItem_C_OnSelected__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CC7[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_TokenBoxItem_C*       This;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_TokenBoxItem_C_OnSelected__DelegateSignature) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBoxItem_C_OnSelected__DelegateSignature");
static_assert(sizeof(WeaponSynthePart_TokenBoxItem_C_OnSelected__DelegateSignature) == 0x000010, "Wrong size on WeaponSynthePart_TokenBoxItem_C_OnSelected__DelegateSignature");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_OnSelected__DelegateSignature, IsChecked) == 0x000000, "Member 'WeaponSynthePart_TokenBoxItem_C_OnSelected__DelegateSignature::IsChecked' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_OnSelected__DelegateSignature, This) == 0x000008, "Member 'WeaponSynthePart_TokenBoxItem_C_OnSelected__DelegateSignature::This' has a wrong offset!");

// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.ExecuteUbergraph_WeaponSynthePart_TokenBoxItem
// 0x000C (0x000C - 0x0000)
struct WeaponSynthePart_TokenBoxItem_C_ExecuteUbergraph_WeaponSynthePart_TokenBoxItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_TokenBoxItem_C_ExecuteUbergraph_WeaponSynthePart_TokenBoxItem) == 0x000004, "Wrong alignment on WeaponSynthePart_TokenBoxItem_C_ExecuteUbergraph_WeaponSynthePart_TokenBoxItem");
static_assert(sizeof(WeaponSynthePart_TokenBoxItem_C_ExecuteUbergraph_WeaponSynthePart_TokenBoxItem) == 0x00000C, "Wrong size on WeaponSynthePart_TokenBoxItem_C_ExecuteUbergraph_WeaponSynthePart_TokenBoxItem");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_ExecuteUbergraph_WeaponSynthePart_TokenBoxItem, EntryPoint) == 0x000000, "Member 'WeaponSynthePart_TokenBoxItem_C_ExecuteUbergraph_WeaponSynthePart_TokenBoxItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_ExecuteUbergraph_WeaponSynthePart_TokenBoxItem, Temp_bool_Variable) == 0x000004, "Member 'WeaponSynthePart_TokenBoxItem_C_ExecuteUbergraph_WeaponSynthePart_TokenBoxItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_ExecuteUbergraph_WeaponSynthePart_TokenBoxItem, Temp_byte_Variable) == 0x000005, "Member 'WeaponSynthePart_TokenBoxItem_C_ExecuteUbergraph_WeaponSynthePart_TokenBoxItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_ExecuteUbergraph_WeaponSynthePart_TokenBoxItem, Temp_byte_Variable_1) == 0x000006, "Member 'WeaponSynthePart_TokenBoxItem_C_ExecuteUbergraph_WeaponSynthePart_TokenBoxItem::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_ExecuteUbergraph_WeaponSynthePart_TokenBoxItem, K2Node_ComponentBoundEvent_bIsChecked) == 0x000007, "Member 'WeaponSynthePart_TokenBoxItem_C_ExecuteUbergraph_WeaponSynthePart_TokenBoxItem::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_ExecuteUbergraph_WeaponSynthePart_TokenBoxItem, K2Node_Select_Default) == 0x000008, "Member 'WeaponSynthePart_TokenBoxItem_C_ExecuteUbergraph_WeaponSynthePart_TokenBoxItem::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthePart_TokenBoxItem_C_BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_TokenBoxItem_C_BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on WeaponSynthePart_TokenBoxItem_C_BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(WeaponSynthePart_TokenBoxItem_C_BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on WeaponSynthePart_TokenBoxItem_C_BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'WeaponSynthePart_TokenBoxItem_C_BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.Setup
// 0x0090 (0x0090 - 0x0000)
struct WeaponSynthePart_TokenBoxItem_C_Setup final
{
public:
	struct FSBFusionTicketMasterData              TicketData;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                         ConstRate;                                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CC8[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_CreateDialog_OutDialog;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenID_Id;                            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CC9[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterToken_bIsValid;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CCA[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_BP_FindMasterToken_ReturnValue;           // 0x0038(0x0058)()
};
static_assert(alignof(WeaponSynthePart_TokenBoxItem_C_Setup) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBoxItem_C_Setup");
static_assert(sizeof(WeaponSynthePart_TokenBoxItem_C_Setup) == 0x000090, "Wrong size on WeaponSynthePart_TokenBoxItem_C_Setup");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_Setup, TicketData) == 0x000000, "Member 'WeaponSynthePart_TokenBoxItem_C_Setup::TicketData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_Setup, ConstRate) == 0x000010, "Member 'WeaponSynthePart_TokenBoxItem_C_Setup::ConstRate' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_Setup, CallFunc_CreateDialog_OutDialog) == 0x000018, "Member 'WeaponSynthePart_TokenBoxItem_C_Setup::CallFunc_CreateDialog_OutDialog' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_Setup, CallFunc_GetTokenID_Id) == 0x000020, "Member 'WeaponSynthePart_TokenBoxItem_C_Setup::CallFunc_GetTokenID_Id' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_Setup, CallFunc_GetMasterDataManager_IsValid) == 0x000024, "Member 'WeaponSynthePart_TokenBoxItem_C_Setup::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_Setup, CallFunc_GetMasterDataManager_ReturnValue) == 0x000028, "Member 'WeaponSynthePart_TokenBoxItem_C_Setup::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_Setup, CallFunc_BP_FindMasterToken_bIsValid) == 0x000030, "Member 'WeaponSynthePart_TokenBoxItem_C_Setup::CallFunc_BP_FindMasterToken_bIsValid' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_Setup, CallFunc_BP_FindMasterToken_ReturnValue) == 0x000038, "Member 'WeaponSynthePart_TokenBoxItem_C_Setup::CallFunc_BP_FindMasterToken_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.SetNameText
// 0x0018 (0x0018 - 0x0000)
struct WeaponSynthePart_TokenBoxItem_C_SetNameText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponSynthePart_TokenBoxItem_C_SetNameText) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBoxItem_C_SetNameText");
static_assert(sizeof(WeaponSynthePart_TokenBoxItem_C_SetNameText) == 0x000018, "Wrong size on WeaponSynthePart_TokenBoxItem_C_SetNameText");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_SetNameText, InText) == 0x000000, "Member 'WeaponSynthePart_TokenBoxItem_C_SetNameText::InText' has a wrong offset!");

// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.SetName
// 0x0028 (0x0028 - 0x0000)
struct WeaponSynthePart_TokenBoxItem_C_SetName final
{
public:
	class FString                                 CallFunc_GetMasterTokenText_ReturnValue;           // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(WeaponSynthePart_TokenBoxItem_C_SetName) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBoxItem_C_SetName");
static_assert(sizeof(WeaponSynthePart_TokenBoxItem_C_SetName) == 0x000028, "Wrong size on WeaponSynthePart_TokenBoxItem_C_SetName");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_SetName, CallFunc_GetMasterTokenText_ReturnValue) == 0x000000, "Member 'WeaponSynthePart_TokenBoxItem_C_SetName::CallFunc_GetMasterTokenText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_SetName, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'WeaponSynthePart_TokenBoxItem_C_SetName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.SetNameColor
// 0x0080 (0x0080 - 0x0000)
struct WeaponSynthePart_TokenBoxItem_C_SetNameColor final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CCB[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0058(0x0028)()
};
static_assert(alignof(WeaponSynthePart_TokenBoxItem_C_SetNameColor) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBoxItem_C_SetNameColor");
static_assert(sizeof(WeaponSynthePart_TokenBoxItem_C_SetNameColor) == 0x000080, "Wrong size on WeaponSynthePart_TokenBoxItem_C_SetNameColor");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_SetNameColor, IsEnable) == 0x000000, "Member 'WeaponSynthePart_TokenBoxItem_C_SetNameColor::IsEnable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_SetNameColor, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthePart_TokenBoxItem_C_SetNameColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_SetNameColor, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'WeaponSynthePart_TokenBoxItem_C_SetNameColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_SetNameColor, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'WeaponSynthePart_TokenBoxItem_C_SetNameColor::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_SetNameColor, K2Node_Select_Default) == 0x000058, "Member 'WeaponSynthePart_TokenBoxItem_C_SetNameColor::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.SetCostText
// 0x0018 (0x0018 - 0x0000)
struct WeaponSynthePart_TokenBoxItem_C_SetCostText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponSynthePart_TokenBoxItem_C_SetCostText) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBoxItem_C_SetCostText");
static_assert(sizeof(WeaponSynthePart_TokenBoxItem_C_SetCostText) == 0x000018, "Wrong size on WeaponSynthePart_TokenBoxItem_C_SetCostText");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_SetCostText, InText) == 0x000000, "Member 'WeaponSynthePart_TokenBoxItem_C_SetCostText::InText' has a wrong offset!");

// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.SetCost
// 0x00A0 (0x00A0 - 0x0000)
struct WeaponSynthePart_TokenBoxItem_C_SetCost final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CCC[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            CallFunc_GetImpossibleColor_ReturnValue;           // 0x0008(0x0028)()
	int32                                         CallFunc_GetCost_NeedCount;                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidCost_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CCD[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0038(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0050(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0078(0x0028)()
};
static_assert(alignof(WeaponSynthePart_TokenBoxItem_C_SetCost) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBoxItem_C_SetCost");
static_assert(sizeof(WeaponSynthePart_TokenBoxItem_C_SetCost) == 0x0000A0, "Wrong size on WeaponSynthePart_TokenBoxItem_C_SetCost");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_SetCost, Temp_bool_Variable) == 0x000000, "Member 'WeaponSynthePart_TokenBoxItem_C_SetCost::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_SetCost, CallFunc_GetImpossibleColor_ReturnValue) == 0x000008, "Member 'WeaponSynthePart_TokenBoxItem_C_SetCost::CallFunc_GetImpossibleColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_SetCost, CallFunc_GetCost_NeedCount) == 0x000030, "Member 'WeaponSynthePart_TokenBoxItem_C_SetCost::CallFunc_GetCost_NeedCount' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_SetCost, CallFunc_IsValidCost_ReturnValue) == 0x000034, "Member 'WeaponSynthePart_TokenBoxItem_C_SetCost::CallFunc_IsValidCost_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_SetCost, CallFunc_Conv_IntToText_ReturnValue) == 0x000038, "Member 'WeaponSynthePart_TokenBoxItem_C_SetCost::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_SetCost, K2Node_MakeStruct_SlateColor) == 0x000050, "Member 'WeaponSynthePart_TokenBoxItem_C_SetCost::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_SetCost, K2Node_Select_Default) == 0x000078, "Member 'WeaponSynthePart_TokenBoxItem_C_SetCost::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.SetAmountText
// 0x0018 (0x0018 - 0x0000)
struct WeaponSynthePart_TokenBoxItem_C_SetAmountText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponSynthePart_TokenBoxItem_C_SetAmountText) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBoxItem_C_SetAmountText");
static_assert(sizeof(WeaponSynthePart_TokenBoxItem_C_SetAmountText) == 0x000018, "Wrong size on WeaponSynthePart_TokenBoxItem_C_SetAmountText");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_SetAmountText, InText) == 0x000000, "Member 'WeaponSynthePart_TokenBoxItem_C_SetAmountText::InText' has a wrong offset!");

// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.SetAmount
// 0x0020 (0x0020 - 0x0000)
struct WeaponSynthePart_TokenBoxItem_C_SetAmount final
{
public:
	int32                                         CallFunc_GetAmount_ReturnValue;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CCE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(WeaponSynthePart_TokenBoxItem_C_SetAmount) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBoxItem_C_SetAmount");
static_assert(sizeof(WeaponSynthePart_TokenBoxItem_C_SetAmount) == 0x000020, "Wrong size on WeaponSynthePart_TokenBoxItem_C_SetAmount");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_SetAmount, CallFunc_GetAmount_ReturnValue) == 0x000000, "Member 'WeaponSynthePart_TokenBoxItem_C_SetAmount::CallFunc_GetAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_SetAmount, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WeaponSynthePart_TokenBoxItem_C_SetAmount::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.SetEnable
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthePart_TokenBoxItem_C_SetEnable final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_TokenBoxItem_C_SetEnable) == 0x000001, "Wrong alignment on WeaponSynthePart_TokenBoxItem_C_SetEnable");
static_assert(sizeof(WeaponSynthePart_TokenBoxItem_C_SetEnable) == 0x000001, "Wrong size on WeaponSynthePart_TokenBoxItem_C_SetEnable");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_SetEnable, bInIsEnabled) == 0x000000, "Member 'WeaponSynthePart_TokenBoxItem_C_SetEnable::bInIsEnabled' has a wrong offset!");

// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.SetSelect
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthePart_TokenBoxItem_C_SetSelect final
{
public:
	bool                                          bSelect;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_TokenBoxItem_C_SetSelect) == 0x000001, "Wrong alignment on WeaponSynthePart_TokenBoxItem_C_SetSelect");
static_assert(sizeof(WeaponSynthePart_TokenBoxItem_C_SetSelect) == 0x000001, "Wrong size on WeaponSynthePart_TokenBoxItem_C_SetSelect");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_SetSelect, bSelect) == 0x000000, "Member 'WeaponSynthePart_TokenBoxItem_C_SetSelect::bSelect' has a wrong offset!");

// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.IsSelect
// 0x0002 (0x0002 - 0x0000)
struct WeaponSynthePart_TokenBoxItem_C_IsSelect final
{
public:
	bool                                          Selected;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_TokenBoxItem_C_IsSelect) == 0x000001, "Wrong alignment on WeaponSynthePart_TokenBoxItem_C_IsSelect");
static_assert(sizeof(WeaponSynthePart_TokenBoxItem_C_IsSelect) == 0x000002, "Wrong size on WeaponSynthePart_TokenBoxItem_C_IsSelect");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_IsSelect, Selected) == 0x000000, "Member 'WeaponSynthePart_TokenBoxItem_C_IsSelect::Selected' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_IsSelect, CallFunc_IsChecked_ReturnValue) == 0x000001, "Member 'WeaponSynthePart_TokenBoxItem_C_IsSelect::CallFunc_IsChecked_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.GetTokenId
// 0x0004 (0x0004 - 0x0000)
struct WeaponSynthePart_TokenBoxItem_C_GetTokenId final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_TokenBoxItem_C_GetTokenId) == 0x000004, "Wrong alignment on WeaponSynthePart_TokenBoxItem_C_GetTokenId");
static_assert(sizeof(WeaponSynthePart_TokenBoxItem_C_GetTokenId) == 0x000004, "Wrong size on WeaponSynthePart_TokenBoxItem_C_GetTokenId");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_GetTokenId, ID) == 0x000000, "Member 'WeaponSynthePart_TokenBoxItem_C_GetTokenId::ID' has a wrong offset!");

// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.GetCost
// 0x0008 (0x0008 - 0x0000)
struct WeaponSynthePart_TokenBoxItem_C_GetCost final
{
public:
	int32                                         NeedCount;                                         // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_TokenBoxItem_C_GetCost) == 0x000004, "Wrong alignment on WeaponSynthePart_TokenBoxItem_C_GetCost");
static_assert(sizeof(WeaponSynthePart_TokenBoxItem_C_GetCost) == 0x000008, "Wrong size on WeaponSynthePart_TokenBoxItem_C_GetCost");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_GetCost, NeedCount) == 0x000000, "Member 'WeaponSynthePart_TokenBoxItem_C_GetCost::NeedCount' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_GetCost, CallFunc_Multiply_IntInt_ReturnValue) == 0x000004, "Member 'WeaponSynthePart_TokenBoxItem_C_GetCost::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.GetAmount
// 0x000C (0x000C - 0x0000)
struct WeaponSynthePart_TokenBoxItem_C_GetAmount final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenID_Id;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_TokenBoxItem_C_GetAmount) == 0x000004, "Wrong alignment on WeaponSynthePart_TokenBoxItem_C_GetAmount");
static_assert(sizeof(WeaponSynthePart_TokenBoxItem_C_GetAmount) == 0x00000C, "Wrong size on WeaponSynthePart_TokenBoxItem_C_GetAmount");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_GetAmount, ReturnValue) == 0x000000, "Member 'WeaponSynthePart_TokenBoxItem_C_GetAmount::ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_GetAmount, CallFunc_GetTokenID_Id) == 0x000004, "Member 'WeaponSynthePart_TokenBoxItem_C_GetAmount::CallFunc_GetTokenID_Id' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_GetAmount, CallFunc_GetTokenAmount_ReturnValue) == 0x000008, "Member 'WeaponSynthePart_TokenBoxItem_C_GetAmount::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.IsValidCost
// 0x0010 (0x0010 - 0x0000)
struct WeaponSynthePart_TokenBoxItem_C_IsValidCost final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CCF[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCost_NeedCount;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAmount_ReturnValue;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_TokenBoxItem_C_IsValidCost) == 0x000004, "Wrong alignment on WeaponSynthePart_TokenBoxItem_C_IsValidCost");
static_assert(sizeof(WeaponSynthePart_TokenBoxItem_C_IsValidCost) == 0x000010, "Wrong size on WeaponSynthePart_TokenBoxItem_C_IsValidCost");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_IsValidCost, ReturnValue) == 0x000000, "Member 'WeaponSynthePart_TokenBoxItem_C_IsValidCost::ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_IsValidCost, CallFunc_GetCost_NeedCount) == 0x000004, "Member 'WeaponSynthePart_TokenBoxItem_C_IsValidCost::CallFunc_GetCost_NeedCount' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_IsValidCost, CallFunc_GetAmount_ReturnValue) == 0x000008, "Member 'WeaponSynthePart_TokenBoxItem_C_IsValidCost::CallFunc_GetAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_IsValidCost, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00000C, "Member 'WeaponSynthePart_TokenBoxItem_C_IsValidCost::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.CreateDialog
// 0x0030 (0x0030 - 0x0000)
struct WeaponSynthePart_TokenBoxItem_C_CreateDialog final
{
public:
	class FText                                   Message;                                           // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	class UBP_Dialog_C*                           OutDialog;                                         // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           Dialog;                                            // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_TokenBoxItem_C_CreateDialog) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBoxItem_C_CreateDialog");
static_assert(sizeof(WeaponSynthePart_TokenBoxItem_C_CreateDialog) == 0x000030, "Wrong size on WeaponSynthePart_TokenBoxItem_C_CreateDialog");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_CreateDialog, Message) == 0x000000, "Member 'WeaponSynthePart_TokenBoxItem_C_CreateDialog::Message' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_CreateDialog, OutDialog) == 0x000018, "Member 'WeaponSynthePart_TokenBoxItem_C_CreateDialog::OutDialog' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_CreateDialog, Dialog) == 0x000020, "Member 'WeaponSynthePart_TokenBoxItem_C_CreateDialog::Dialog' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_CreateDialog, CallFunc_Create_ReturnValue) == 0x000028, "Member 'WeaponSynthePart_TokenBoxItem_C_CreateDialog::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.GetType
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthePart_TokenBoxItem_C_GetType final
{
public:
	ESBFusionTicketType                           Ticket_Type;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_TokenBoxItem_C_GetType) == 0x000001, "Wrong alignment on WeaponSynthePart_TokenBoxItem_C_GetType");
static_assert(sizeof(WeaponSynthePart_TokenBoxItem_C_GetType) == 0x000001, "Wrong size on WeaponSynthePart_TokenBoxItem_C_GetType");
static_assert(offsetof(WeaponSynthePart_TokenBoxItem_C_GetType, Ticket_Type) == 0x000000, "Member 'WeaponSynthePart_TokenBoxItem_C_GetType::Ticket_Type' has a wrong offset!");

}

