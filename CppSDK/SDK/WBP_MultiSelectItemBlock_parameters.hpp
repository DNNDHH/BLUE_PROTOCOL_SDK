#pragma once

 

// Package: WBP_MultiSelectItemBlock

#include "Basic.hpp"

#include "InventoryItemData_structs.hpp"


namespace SDK::Params
{

// Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.OnClick__DelegateSignature
// 0x0060 (0x0060 - 0x0000)
struct WBP_MultiSelectItemBlock_C_OnClick__DelegateSignature final
{
public:
	struct FInventoryItemData                     Param_InventoryData;                               // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectItemBlock_C_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on WBP_MultiSelectItemBlock_C_OnClick__DelegateSignature");
static_assert(sizeof(WBP_MultiSelectItemBlock_C_OnClick__DelegateSignature) == 0x000060, "Wrong size on WBP_MultiSelectItemBlock_C_OnClick__DelegateSignature");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_OnClick__DelegateSignature, Param_InventoryData) == 0x000000, "Member 'WBP_MultiSelectItemBlock_C_OnClick__DelegateSignature::Param_InventoryData' has a wrong offset!");

// Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.ExecuteUbergraph_WBP_MultiSelectItemBlock
// 0x0138 (0x0138 - 0x0000)
struct WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7752[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price;        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7753[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7754[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0048(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
	class UWBP_StorageRowListItem_C*              K2Node_CustomEvent_InStorageListItem;              // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7755[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7756[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     K2Node_CustomEvent_InventoryItemData;              // 0x00A0(0x0060)(ConstParm, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7757[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue_1;                      // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x010D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7758[0x2];                                     // 0x010E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price_1;      // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7759[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0118(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock) == 0x000008, "Wrong alignment on WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock");
static_assert(sizeof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock) == 0x000138, "Wrong size on WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock, EntryPoint) == 0x000000, "Member 'WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock, CallFunc_Get_Item_Player_Sale_Price__Price) == 0x000018, "Member 'WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock::CallFunc_Get_Item_Player_Sale_Price__Price' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock, CallFunc_Multiply_IntInt_ReturnValue) == 0x000030, "Member 'WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock, CallFunc_Concat_StrStr_ReturnValue) == 0x000038, "Member 'WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock, CallFunc_Conv_IntToText_ReturnValue) == 0x000048, "Member 'WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000060, "Member 'WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock, K2Node_CustomEvent_InStorageListItem) == 0x000088, "Member 'WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock::K2Node_CustomEvent_InStorageListItem' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock, CallFunc_IsValid_ReturnValue_1) == 0x000090, "Member 'WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock, CallFunc_Subtract_IntInt_ReturnValue) == 0x000094, "Member 'WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock, CallFunc_Clamp_ReturnValue) == 0x000098, "Member 'WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock, K2Node_CustomEvent_InventoryItemData) == 0x0000A0, "Member 'WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock::K2Node_CustomEvent_InventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock, CallFunc_IsValid_ReturnValue_2) == 0x000100, "Member 'WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock, CallFunc_Add_IntInt_ReturnValue) == 0x000104, "Member 'WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock, CallFunc_Clamp_ReturnValue_1) == 0x000108, "Member 'WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock::CallFunc_Clamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock, CallFunc_IsValid_ReturnValue_3) == 0x00010C, "Member 'WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock, CallFunc_IsValid_ReturnValue_4) == 0x00010D, "Member 'WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock, CallFunc_Get_Item_Player_Sale_Price__Price_1) == 0x000110, "Member 'WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock::CallFunc_Get_Item_Player_Sale_Price__Price_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000118, "Member 'WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock, CallFunc_IsValid_ReturnValue_5) == 0x000130, "Member 'WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");

// Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.SetStorageItem
// 0x0008 (0x0008 - 0x0000)
struct WBP_MultiSelectItemBlock_C_SetStorageItem final
{
public:
	class UWBP_StorageRowListItem_C*              InStorageListItem;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectItemBlock_C_SetStorageItem) == 0x000008, "Wrong alignment on WBP_MultiSelectItemBlock_C_SetStorageItem");
static_assert(sizeof(WBP_MultiSelectItemBlock_C_SetStorageItem) == 0x000008, "Wrong size on WBP_MultiSelectItemBlock_C_SetStorageItem");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_SetStorageItem, InStorageListItem) == 0x000000, "Member 'WBP_MultiSelectItemBlock_C_SetStorageItem::InStorageListItem' has a wrong offset!");

// Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.SetOneItem
// 0x0060 (0x0060 - 0x0000)
struct WBP_MultiSelectItemBlock_C_SetOneItem final
{
public:
	struct FInventoryItemData                     InventoryItemData;                                 // 0x0000(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectItemBlock_C_SetOneItem) == 0x000008, "Wrong alignment on WBP_MultiSelectItemBlock_C_SetOneItem");
static_assert(sizeof(WBP_MultiSelectItemBlock_C_SetOneItem) == 0x000060, "Wrong size on WBP_MultiSelectItemBlock_C_SetOneItem");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_SetOneItem, InventoryItemData) == 0x000000, "Member 'WBP_MultiSelectItemBlock_C_SetOneItem::InventoryItemData' has a wrong offset!");

// Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.GetPrice
// 0x0014 (0x0014 - 0x0000)
struct WBP_MultiSelectItemBlock_C_GetPrice final
{
public:
	int32                                         Price;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price;        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_775A[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price_1;      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectItemBlock_C_GetPrice) == 0x000004, "Wrong alignment on WBP_MultiSelectItemBlock_C_GetPrice");
static_assert(sizeof(WBP_MultiSelectItemBlock_C_GetPrice) == 0x000014, "Wrong size on WBP_MultiSelectItemBlock_C_GetPrice");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_GetPrice, Price) == 0x000000, "Member 'WBP_MultiSelectItemBlock_C_GetPrice::Price' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_GetPrice, CallFunc_Get_Item_Player_Sale_Price__Price) == 0x000004, "Member 'WBP_MultiSelectItemBlock_C_GetPrice::CallFunc_Get_Item_Player_Sale_Price__Price' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_GetPrice, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_MultiSelectItemBlock_C_GetPrice::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_GetPrice, CallFunc_Get_Item_Player_Sale_Price__Price_1) == 0x00000C, "Member 'WBP_MultiSelectItemBlock_C_GetPrice::CallFunc_Get_Item_Player_Sale_Price__Price_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectItemBlock_C_GetPrice, CallFunc_Multiply_IntInt_ReturnValue) == 0x000010, "Member 'WBP_MultiSelectItemBlock_C_GetPrice::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");

}

