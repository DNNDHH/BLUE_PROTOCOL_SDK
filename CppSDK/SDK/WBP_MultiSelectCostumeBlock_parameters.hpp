#pragma once

 

// Package: WBP_MultiSelectCostumeBlock

#include "Basic.hpp"

#include "InventoryItemData_structs.hpp"
#include "CharaParts_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.OnClick__DelegateSignature
// 0x0060 (0x0060 - 0x0000)
struct WBP_MultiSelectCostumeBlock_C_OnClick__DelegateSignature final
{
public:
	struct FInventoryItemData                     InventoryData;                                     // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectCostumeBlock_C_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on WBP_MultiSelectCostumeBlock_C_OnClick__DelegateSignature");
static_assert(sizeof(WBP_MultiSelectCostumeBlock_C_OnClick__DelegateSignature) == 0x000060, "Wrong size on WBP_MultiSelectCostumeBlock_C_OnClick__DelegateSignature");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_OnClick__DelegateSignature, InventoryData) == 0x000000, "Member 'WBP_MultiSelectCostumeBlock_C_OnClick__DelegateSignature::InventoryData' has a wrong offset!");

// Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.ExecuteUbergraph_WBP_MultiSelectCostumeBlock
// 0x02D0 (0x02D0 - 0x0000)
struct WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEquipableGender                              Temp_byte_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_776A[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0010(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0014(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_776B[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItemData                     K2Node_CustomEvent_InventoryItemData;              // 0x0028(0x0060)(ConstParm, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_776C[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0098(0x0118)(ConstParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_776D[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCostumeWearingPartsText_ReturnValue;   // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01C8(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_1;                 // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01F8(0x0018)()
	bool                                          CallFunc_IsItemLock_ReturnValue;                   // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x0212(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_776E[0x5];                                     // 0x0213(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x0218(0x0088)()
	bool                                          CallFunc_IsUsedItem_bUse;                          // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_776F[0x3];                                     // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x02A4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x02A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x02B8(0x0018)()
};
static_assert(alignof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock) == 0x000008, "Wrong alignment on WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock");
static_assert(sizeof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock) == 0x0002D0, "Wrong size on WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, EntryPoint) == 0x000000, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, Temp_bool_Variable) == 0x000005, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, Temp_byte_Variable) == 0x000006, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, Temp_int_Variable) == 0x000008, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, Temp_int_Variable_1) == 0x00000C, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, Temp_int_Variable_2) == 0x000010, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, Temp_int_Variable_3) == 0x000014, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, CallFunc_GetMasterDataManager_IsValid) == 0x000019, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, CallFunc_GetMasterDataManager_ReturnValue) == 0x000020, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, K2Node_CustomEvent_InventoryItemData) == 0x000028, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::K2Node_CustomEvent_InventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, CallFunc_GetStorage_ReturnValue) == 0x000088, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000090, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000098, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0001B0, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, CallFunc_GetCostumeWearingPartsText_ReturnValue) == 0x0001B8, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::CallFunc_GetCostumeWearingPartsText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, CallFunc_Conv_StringToText_ReturnValue) == 0x0001C8, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0001E0, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, CallFunc_GetStorage_ReturnValue_1) == 0x0001F0, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::CallFunc_GetStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001F8, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, CallFunc_IsItemLock_ReturnValue) == 0x000210, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::CallFunc_IsItemLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, K2Node_Select_Default) == 0x000211, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, CallFunc_BP_FindCostumeMaster_IsExist) == 0x000212, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x000218, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, CallFunc_IsUsedItem_bUse) == 0x0002A0, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::CallFunc_IsUsedItem_bUse' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, K2Node_Select_Default_1) == 0x0002A4, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, CallFunc_GetTextFromAsset_ReturnValue) == 0x0002A8, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0002B8, "Member 'WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.SetOneItem
// 0x0060 (0x0060 - 0x0000)
struct WBP_MultiSelectCostumeBlock_C_SetOneItem final
{
public:
	struct FInventoryItemData                     Param_InventoryItemData;                           // 0x0000(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectCostumeBlock_C_SetOneItem) == 0x000008, "Wrong alignment on WBP_MultiSelectCostumeBlock_C_SetOneItem");
static_assert(sizeof(WBP_MultiSelectCostumeBlock_C_SetOneItem) == 0x000060, "Wrong size on WBP_MultiSelectCostumeBlock_C_SetOneItem");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetOneItem, Param_InventoryItemData) == 0x000000, "Member 'WBP_MultiSelectCostumeBlock_C_SetOneItem::Param_InventoryItemData' has a wrong offset!");

// Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.GetPrice
// 0x0014 (0x0014 - 0x0000)
struct WBP_MultiSelectCostumeBlock_C_GetPrice final
{
public:
	int32                                         Price;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price;        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7770[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price_1;      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectCostumeBlock_C_GetPrice) == 0x000004, "Wrong alignment on WBP_MultiSelectCostumeBlock_C_GetPrice");
static_assert(sizeof(WBP_MultiSelectCostumeBlock_C_GetPrice) == 0x000014, "Wrong size on WBP_MultiSelectCostumeBlock_C_GetPrice");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_GetPrice, Price) == 0x000000, "Member 'WBP_MultiSelectCostumeBlock_C_GetPrice::Price' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_GetPrice, CallFunc_Get_Item_Player_Sale_Price__Price) == 0x000004, "Member 'WBP_MultiSelectCostumeBlock_C_GetPrice::CallFunc_Get_Item_Player_Sale_Price__Price' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_GetPrice, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_MultiSelectCostumeBlock_C_GetPrice::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_GetPrice, CallFunc_Get_Item_Player_Sale_Price__Price_1) == 0x00000C, "Member 'WBP_MultiSelectCostumeBlock_C_GetPrice::CallFunc_Get_Item_Player_Sale_Price__Price_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_GetPrice, CallFunc_Multiply_IntInt_ReturnValue) == 0x000010, "Member 'WBP_MultiSelectCostumeBlock_C_GetPrice::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.SetCostumeColor
// 0x0080 (0x0080 - 0x0000)
struct WBP_MultiSelectCostumeBlock_C_SetCostumeColor final
{
public:
	ECharaPartsBody                               CharaBodyType;                                     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           CharaPartsLocation;                                // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7771[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             CharaPartsDB;                                      // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            ProtectorCategory;                                 // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7772[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CostumeColorId;                                    // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7773[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEquipableGender                              Temp_byte_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               Temp_byte_Variable_1;                              // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               Temp_byte_Variable_2;                              // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               Temp_byte_Variable_3;                              // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               Temp_byte_Variable_4;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_5;                              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_6;                              // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_7;                              // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_8;                              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_9;                              // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_10;                             // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_11;                             // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_12;                             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_13;                             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_14;                             // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_15;                             // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_16;                             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_17;                             // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_18;                             // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_19;                             // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_20;                             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7774[0x1];                                     // 0x003B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               K2Node_Select_Default;                             // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7775[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           K2Node_Select_Default_2;                           // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCharaPartsDBFromProtectorCategory_OutIsValid; // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7776[0x1];                                     // 0x004F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             CallFunc_GetCharaPartsDBFromProtectorCategory_OutCharaPartsDB; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7777[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharaPartsData*                        CallFunc_GetPartsData_ReturnValue;                 // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetPartsMaterialColor_ReturnValue;        // 0x0068(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor) == 0x000008, "Wrong alignment on WBP_MultiSelectCostumeBlock_C_SetCostumeColor");
static_assert(sizeof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor) == 0x000080, "Wrong size on WBP_MultiSelectCostumeBlock_C_SetCostumeColor");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, CharaBodyType) == 0x000000, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::CharaBodyType' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, CharaPartsLocation) == 0x000001, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::CharaPartsLocation' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, CharaPartsDB) == 0x000008, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::CharaPartsDB' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, ProtectorCategory) == 0x000010, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::ProtectorCategory' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, CostumeColorId) == 0x000014, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::CostumeColorId' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_bool_Variable) == 0x000018, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_int_Variable) == 0x00001C, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_int_Variable_1) == 0x000020, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_byte_Variable) == 0x000024, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_byte_Variable_1) == 0x000025, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_byte_Variable_2) == 0x000026, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_byte_Variable_3) == 0x000027, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_byte_Variable_4) == 0x000028, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_byte_Variable_5) == 0x000029, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_byte_Variable_6) == 0x00002A, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_byte_Variable_7) == 0x00002B, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_byte_Variable_8) == 0x00002C, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_byte_Variable_9) == 0x00002D, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_byte_Variable_10) == 0x00002E, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_byte_Variable_11) == 0x00002F, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_byte_Variable_12) == 0x000030, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_byte_Variable_13) == 0x000031, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_byte_Variable_14) == 0x000032, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_byte_Variable_15) == 0x000033, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_byte_Variable_16) == 0x000034, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_byte_Variable_16' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_byte_Variable_17) == 0x000035, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_byte_Variable_17' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_byte_Variable_18) == 0x000036, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_byte_Variable_18' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_byte_Variable_19) == 0x000037, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_byte_Variable_19' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_byte_Variable_20) == 0x000038, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_byte_Variable_20' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, Temp_bool_Variable_1) == 0x000039, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, CallFunc_MakeLiteralByte_ReturnValue) == 0x00003A, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, CallFunc_Conv_StringToName_ReturnValue) == 0x00003C, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, K2Node_Select_Default) == 0x000044, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, K2Node_Select_Default_1) == 0x000048, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, K2Node_Select_Default_2) == 0x00004C, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00004D, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, CallFunc_GetCharaPartsDBFromProtectorCategory_OutIsValid) == 0x00004E, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::CallFunc_GetCharaPartsDBFromProtectorCategory_OutIsValid' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, CallFunc_GetCharaPartsDBFromProtectorCategory_OutCharaPartsDB) == 0x000050, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::CallFunc_GetCharaPartsDBFromProtectorCategory_OutCharaPartsDB' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000058, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, K2Node_Select_Default_3) == 0x000059, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, CallFunc_GetPartsData_ReturnValue) == 0x000060, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::CallFunc_GetPartsData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, CallFunc_GetPartsMaterialColor_ReturnValue) == 0x000068, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::CallFunc_GetPartsMaterialColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectCostumeBlock_C_SetCostumeColor, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'WBP_MultiSelectCostumeBlock_C_SetCostumeColor::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

