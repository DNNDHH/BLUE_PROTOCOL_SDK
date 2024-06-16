#pragma once

 

// Package: WBP_MultiSelectOrnamentBlock

#include "Basic.hpp"

#include "InventoryItemData_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_MultiSelectOrnamentBlock.WBP_MultiSelectOrnamentBlock_C.OnClick__DelegateSignature
// 0x0060 (0x0060 - 0x0000)
struct WBP_MultiSelectOrnamentBlock_C_OnClick__DelegateSignature final
{
public:
	struct FInventoryItemData                     Param_InventoryData;                               // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectOrnamentBlock_C_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on WBP_MultiSelectOrnamentBlock_C_OnClick__DelegateSignature");
static_assert(sizeof(WBP_MultiSelectOrnamentBlock_C_OnClick__DelegateSignature) == 0x000060, "Wrong size on WBP_MultiSelectOrnamentBlock_C_OnClick__DelegateSignature");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_OnClick__DelegateSignature, Param_InventoryData) == 0x000000, "Member 'WBP_MultiSelectOrnamentBlock_C_OnClick__DelegateSignature::Param_InventoryData' has a wrong offset!");

// Function WBP_MultiSelectOrnamentBlock.WBP_MultiSelectOrnamentBlock_C.ExecuteUbergraph_WBP_MultiSelectOrnamentBlock
// 0x01F8 (0x01F8 - 0x0000)
struct WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45C2[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     K2Node_CustomEvent_InventoryItemData;              // 0x0008(0x0060)(ConstParm, HasGetValueTypeHash)
	class UWBP_StorageRowListItem_C*              K2Node_CustomEvent_InStorageListItem;              // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45C3[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price;        // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0078(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price_1;      // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45C4[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45C5[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00D0(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45C6[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0100(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45C7[0x5];                                     // 0x011B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterMountImagineData_bOutExist;  // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45C8[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterMountImagine                  CallFunc_BP_FindMasterMountImagineData_ReturnValue; // 0x0130(0x0070)()
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsItemLock_ReturnValue;                   // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45C9[0x7];                                     // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01C0(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x01D8(0x0018)()
	bool                                          CallFunc_IsUsedItem_bUse;                          // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUsedItem_bUse_1;                        // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x01F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x01F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock) == 0x000008, "Wrong alignment on WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock");
static_assert(sizeof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock) == 0x0001F8, "Wrong size on WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, EntryPoint) == 0x000000, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, Temp_bool_Variable) == 0x000004, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, K2Node_CustomEvent_InventoryItemData) == 0x000008, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::K2Node_CustomEvent_InventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, K2Node_CustomEvent_InStorageListItem) == 0x000068, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::K2Node_CustomEvent_InStorageListItem' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_Get_Item_Player_Sale_Price__Price) == 0x000074, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_Get_Item_Player_Sale_Price__Price' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_Conv_IntToText_ReturnValue) == 0x000078, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_Conv_IntToString_ReturnValue) == 0x000090, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_Get_Item_Player_Sale_Price__Price_1) == 0x0000A0, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_Get_Item_Player_Sale_Price__Price_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_Conv_TextToString_ReturnValue) == 0x0000A8, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_Multiply_IntInt_ReturnValue) == 0x0000B8, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_Concat_StrStr_ReturnValue) == 0x0000C0, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000D0, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000E8, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, Temp_bool_Variable_1) == 0x0000F8, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_Conv_StringToText_ReturnValue) == 0x000100, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_MakeLiteralByte_ReturnValue) == 0x000118, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_IsValid_ReturnValue_1) == 0x000119, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_GetMasterDataManager_IsValid) == 0x00011A, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_GetMasterDataManager_ReturnValue) == 0x000120, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_BP_FindMasterMountImagineData_bOutExist) == 0x000128, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_BP_FindMasterMountImagineData_bOutExist' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_BP_FindMasterMountImagineData_ReturnValue) == 0x000130, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_BP_FindMasterMountImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_GetStorage_ReturnValue) == 0x0001A0, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_IsItemLock_ReturnValue) == 0x0001A8, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_IsItemLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0001B0, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001C0, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, K2Node_Select_Default) == 0x0001D8, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_IsUsedItem_bUse) == 0x0001F0, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_IsUsedItem_bUse' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_IsUsedItem_bUse_1) == 0x0001F1, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_IsUsedItem_bUse_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0001F2, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock, K2Node_Select_Default_1) == 0x0001F3, "Member 'WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_MultiSelectOrnamentBlock.WBP_MultiSelectOrnamentBlock_C.SetStorageItem
// 0x0008 (0x0008 - 0x0000)
struct WBP_MultiSelectOrnamentBlock_C_SetStorageItem final
{
public:
	class UWBP_StorageRowListItem_C*              InStorageListItem;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectOrnamentBlock_C_SetStorageItem) == 0x000008, "Wrong alignment on WBP_MultiSelectOrnamentBlock_C_SetStorageItem");
static_assert(sizeof(WBP_MultiSelectOrnamentBlock_C_SetStorageItem) == 0x000008, "Wrong size on WBP_MultiSelectOrnamentBlock_C_SetStorageItem");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_SetStorageItem, InStorageListItem) == 0x000000, "Member 'WBP_MultiSelectOrnamentBlock_C_SetStorageItem::InStorageListItem' has a wrong offset!");

// Function WBP_MultiSelectOrnamentBlock.WBP_MultiSelectOrnamentBlock_C.SetOneItem
// 0x0060 (0x0060 - 0x0000)
struct WBP_MultiSelectOrnamentBlock_C_SetOneItem final
{
public:
	struct FInventoryItemData                     InventoryItemData;                                 // 0x0000(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectOrnamentBlock_C_SetOneItem) == 0x000008, "Wrong alignment on WBP_MultiSelectOrnamentBlock_C_SetOneItem");
static_assert(sizeof(WBP_MultiSelectOrnamentBlock_C_SetOneItem) == 0x000060, "Wrong size on WBP_MultiSelectOrnamentBlock_C_SetOneItem");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_SetOneItem, InventoryItemData) == 0x000000, "Member 'WBP_MultiSelectOrnamentBlock_C_SetOneItem::InventoryItemData' has a wrong offset!");

// Function WBP_MultiSelectOrnamentBlock.WBP_MultiSelectOrnamentBlock_C.GetPrice
// 0x0014 (0x0014 - 0x0000)
struct WBP_MultiSelectOrnamentBlock_C_GetPrice final
{
public:
	int32                                         Price;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price;        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45CA[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price_1;      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectOrnamentBlock_C_GetPrice) == 0x000004, "Wrong alignment on WBP_MultiSelectOrnamentBlock_C_GetPrice");
static_assert(sizeof(WBP_MultiSelectOrnamentBlock_C_GetPrice) == 0x000014, "Wrong size on WBP_MultiSelectOrnamentBlock_C_GetPrice");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_GetPrice, Price) == 0x000000, "Member 'WBP_MultiSelectOrnamentBlock_C_GetPrice::Price' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_GetPrice, CallFunc_Get_Item_Player_Sale_Price__Price) == 0x000004, "Member 'WBP_MultiSelectOrnamentBlock_C_GetPrice::CallFunc_Get_Item_Player_Sale_Price__Price' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_GetPrice, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_MultiSelectOrnamentBlock_C_GetPrice::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_GetPrice, CallFunc_Get_Item_Player_Sale_Price__Price_1) == 0x00000C, "Member 'WBP_MultiSelectOrnamentBlock_C_GetPrice::CallFunc_Get_Item_Player_Sale_Price__Price_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectOrnamentBlock_C_GetPrice, CallFunc_Multiply_IntInt_ReturnValue) == 0x000010, "Member 'WBP_MultiSelectOrnamentBlock_C_GetPrice::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");

}

