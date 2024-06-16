#pragma once

 

// Package: FusionitemListItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function FusionitemListItem.FusionitemListItem_C.OnClicked__DelegateSignature
// 0x0120 (0x0120 - 0x0000)
struct FusionitemListItem_C_OnClicked__DelegateSignature final
{
public:
	struct FOwnItemInfo                           OwnItem;                                           // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UFusionitemListItem_C*                  OnSelected;                                        // 0x0118(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FusionitemListItem_C_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on FusionitemListItem_C_OnClicked__DelegateSignature");
static_assert(sizeof(FusionitemListItem_C_OnClicked__DelegateSignature) == 0x000120, "Wrong size on FusionitemListItem_C_OnClicked__DelegateSignature");
static_assert(offsetof(FusionitemListItem_C_OnClicked__DelegateSignature, OwnItem) == 0x000000, "Member 'FusionitemListItem_C_OnClicked__DelegateSignature::OwnItem' has a wrong offset!");
static_assert(offsetof(FusionitemListItem_C_OnClicked__DelegateSignature, OnSelected) == 0x000118, "Member 'FusionitemListItem_C_OnClicked__DelegateSignature::OnSelected' has a wrong offset!");

// Function FusionitemListItem.FusionitemListItem_C.ExecuteUbergraph_FusionitemListItem
// 0x0120 (0x0120 - 0x0000)
struct FusionitemListItem_C_ExecuteUbergraph_FusionitemListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D19[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_CustomEvent_ItemData;                       // 0x0008(0x0118)()
};
static_assert(alignof(FusionitemListItem_C_ExecuteUbergraph_FusionitemListItem) == 0x000008, "Wrong alignment on FusionitemListItem_C_ExecuteUbergraph_FusionitemListItem");
static_assert(sizeof(FusionitemListItem_C_ExecuteUbergraph_FusionitemListItem) == 0x000120, "Wrong size on FusionitemListItem_C_ExecuteUbergraph_FusionitemListItem");
static_assert(offsetof(FusionitemListItem_C_ExecuteUbergraph_FusionitemListItem, EntryPoint) == 0x000000, "Member 'FusionitemListItem_C_ExecuteUbergraph_FusionitemListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(FusionitemListItem_C_ExecuteUbergraph_FusionitemListItem, K2Node_CustomEvent_ItemData) == 0x000008, "Member 'FusionitemListItem_C_ExecuteUbergraph_FusionitemListItem::K2Node_CustomEvent_ItemData' has a wrong offset!");

// Function FusionitemListItem.FusionitemListItem_C.Set Data
// 0x0118 (0x0118 - 0x0000)
struct FusionitemListItem_C_Set_Data final
{
public:
	struct FOwnItemInfo                           Param_ItemData;                                    // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(FusionitemListItem_C_Set_Data) == 0x000008, "Wrong alignment on FusionitemListItem_C_Set_Data");
static_assert(sizeof(FusionitemListItem_C_Set_Data) == 0x000118, "Wrong size on FusionitemListItem_C_Set_Data");
static_assert(offsetof(FusionitemListItem_C_Set_Data, Param_ItemData) == 0x000000, "Member 'FusionitemListItem_C_Set_Data::Param_ItemData' has a wrong offset!");

// Function FusionitemListItem.FusionitemListItem_C.ApplyData
// 0x0168 (0x0168 - 0x0000)
struct FusionitemListItem_C_ApplyData final
{
public:
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D1A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetItemName_OutName;                      // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D1B[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	bool                                          CallFunc_BP_FindMasterFusionItem_Exists;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D1C[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_BP_FindMasterFusionItem_ReturnValue;      // 0x005C(0x0018)(NoDestructor)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D1D[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0078(0x00D0)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x014B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D1E[0x4];                                     // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0150(0x0018)()
};
static_assert(alignof(FusionitemListItem_C_ApplyData) == 0x000008, "Wrong alignment on FusionitemListItem_C_ApplyData");
static_assert(sizeof(FusionitemListItem_C_ApplyData) == 0x000168, "Wrong size on FusionitemListItem_C_ApplyData");
static_assert(offsetof(FusionitemListItem_C_ApplyData, CallFunc_MakeLiteralByte_ReturnValue) == 0x000000, "Member 'FusionitemListItem_C_ApplyData::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionitemListItem_C_ApplyData, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000001, "Member 'FusionitemListItem_C_ApplyData::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FusionitemListItem_C_ApplyData, Temp_bool_Variable) == 0x000002, "Member 'FusionitemListItem_C_ApplyData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FusionitemListItem_C_ApplyData, CallFunc_GetMasterDataManager_IsValid) == 0x000003, "Member 'FusionitemListItem_C_ApplyData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FusionitemListItem_C_ApplyData, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'FusionitemListItem_C_ApplyData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionitemListItem_C_ApplyData, CallFunc_GetItemName_OutName) == 0x000010, "Member 'FusionitemListItem_C_ApplyData::CallFunc_GetItemName_OutName' has a wrong offset!");
static_assert(offsetof(FusionitemListItem_C_ApplyData, CallFunc_GetItemName_ReturnValue) == 0x000020, "Member 'FusionitemListItem_C_ApplyData::CallFunc_GetItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionitemListItem_C_ApplyData, CallFunc_Conv_IntToText_ReturnValue) == 0x000028, "Member 'FusionitemListItem_C_ApplyData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionitemListItem_C_ApplyData, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'FusionitemListItem_C_ApplyData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionitemListItem_C_ApplyData, CallFunc_BP_FindMasterFusionItem_Exists) == 0x000058, "Member 'FusionitemListItem_C_ApplyData::CallFunc_BP_FindMasterFusionItem_Exists' has a wrong offset!");
static_assert(offsetof(FusionitemListItem_C_ApplyData, CallFunc_BP_FindMasterFusionItem_ReturnValue) == 0x00005C, "Member 'FusionitemListItem_C_ApplyData::CallFunc_BP_FindMasterFusionItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionitemListItem_C_ApplyData, CallFunc_GetItemMasterData_IsExists) == 0x000074, "Member 'FusionitemListItem_C_ApplyData::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(FusionitemListItem_C_ApplyData, CallFunc_GetItemMasterData_ReturnValue) == 0x000078, "Member 'FusionitemListItem_C_ApplyData::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionitemListItem_C_ApplyData, CallFunc_Greater_IntInt_ReturnValue) == 0x000148, "Member 'FusionitemListItem_C_ApplyData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionitemListItem_C_ApplyData, CallFunc_IsEmpty_ReturnValue) == 0x000149, "Member 'FusionitemListItem_C_ApplyData::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionitemListItem_C_ApplyData, CallFunc_Not_PreBool_ReturnValue) == 0x00014A, "Member 'FusionitemListItem_C_ApplyData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionitemListItem_C_ApplyData, K2Node_Select_Default) == 0x00014B, "Member 'FusionitemListItem_C_ApplyData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FusionitemListItem_C_ApplyData, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000150, "Member 'FusionitemListItem_C_ApplyData::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

// Function FusionitemListItem.FusionitemListItem_C.SetSelected
// 0x0005 (0x0005 - 0x0000)
struct FusionitemListItem_C_SetSelected final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FusionitemListItem_C_SetSelected) == 0x000001, "Wrong alignment on FusionitemListItem_C_SetSelected");
static_assert(sizeof(FusionitemListItem_C_SetSelected) == 0x000005, "Wrong size on FusionitemListItem_C_SetSelected");
static_assert(offsetof(FusionitemListItem_C_SetSelected, bIsSelected) == 0x000000, "Member 'FusionitemListItem_C_SetSelected::bIsSelected' has a wrong offset!");
static_assert(offsetof(FusionitemListItem_C_SetSelected, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'FusionitemListItem_C_SetSelected::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionitemListItem_C_SetSelected, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'FusionitemListItem_C_SetSelected::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FusionitemListItem_C_SetSelected, Temp_bool_Variable) == 0x000003, "Member 'FusionitemListItem_C_SetSelected::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FusionitemListItem_C_SetSelected, K2Node_Select_Default) == 0x000004, "Member 'FusionitemListItem_C_SetSelected::K2Node_Select_Default' has a wrong offset!");

// Function FusionitemListItem.FusionitemListItem_C.SetEmptySlot
// 0x0004 (0x0004 - 0x0000)
struct FusionitemListItem_C_SetEmptySlot final
{
public:
	int32                                         Param_EmptySlot;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FusionitemListItem_C_SetEmptySlot) == 0x000004, "Wrong alignment on FusionitemListItem_C_SetEmptySlot");
static_assert(sizeof(FusionitemListItem_C_SetEmptySlot) == 0x000004, "Wrong size on FusionitemListItem_C_SetEmptySlot");
static_assert(offsetof(FusionitemListItem_C_SetEmptySlot, Param_EmptySlot) == 0x000000, "Member 'FusionitemListItem_C_SetEmptySlot::Param_EmptySlot' has a wrong offset!");

// Function FusionitemListItem.FusionitemListItem_C.GetItemData
// 0x0118 (0x0118 - 0x0000)
struct FusionitemListItem_C_GetItemData final
{
public:
	struct FOwnItemInfo                           Param_ItemData;                                    // 0x0000(0x0118)(Parm, OutParm)
};
static_assert(alignof(FusionitemListItem_C_GetItemData) == 0x000008, "Wrong alignment on FusionitemListItem_C_GetItemData");
static_assert(sizeof(FusionitemListItem_C_GetItemData) == 0x000118, "Wrong size on FusionitemListItem_C_GetItemData");
static_assert(offsetof(FusionitemListItem_C_GetItemData, Param_ItemData) == 0x000000, "Member 'FusionitemListItem_C_GetItemData::Param_ItemData' has a wrong offset!");

}

