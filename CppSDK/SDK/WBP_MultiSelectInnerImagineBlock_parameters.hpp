#pragma once

 

// Package: WBP_MultiSelectInnerImagineBlock

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "InventoryItemData_structs.hpp"


namespace SDK::Params
{

// Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.OnClick__DelegateSignature
// 0x0060 (0x0060 - 0x0000)
struct WBP_MultiSelectInnerImagineBlock_C_OnClick__DelegateSignature final
{
public:
	struct FInventoryItemData                     InventoryData;                                     // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectInnerImagineBlock_C_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on WBP_MultiSelectInnerImagineBlock_C_OnClick__DelegateSignature");
static_assert(sizeof(WBP_MultiSelectInnerImagineBlock_C_OnClick__DelegateSignature) == 0x000060, "Wrong size on WBP_MultiSelectInnerImagineBlock_C_OnClick__DelegateSignature");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_OnClick__DelegateSignature, InventoryData) == 0x000000, "Member 'WBP_MultiSelectInnerImagineBlock_C_OnClick__DelegateSignature::InventoryData' has a wrong offset!");

// Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock
// 0x0480 (0x0480 - 0x0000)
struct WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4784[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     K2Node_CustomEvent_InventoryItemData;              // 0x0010(0x0060)(ConstParm, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4785[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0078(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4786[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4787[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue;     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4788[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4789[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x00C8(0x0118)(ConstParm)
	struct FImagineParameter                      CallFunc_CalcImagineParam_ReturnValue;             // 0x01E0(0x006C)(NoDestructor)
	uint8                                         Pad_478A[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_1;                 // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsItemLock_ReturnValue;                   // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_478B[0x3];                                     // 0x0259(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price;        // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_478C[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0268(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0280(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0290(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_478D[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_478E[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x02C0(0x00B0)()
	bool                                          CallFunc_FindMasterImagineData_IsExists_1;         // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_478F[0x7];                                     // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue_1;      // 0x0378(0x00B0)()
	class FText                                   K2Node_Select_Default;                             // 0x0428(0x0018)()
	bool                                          CallFunc_IsUsedItem_bUse;                          // 0x0440(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0441(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0442(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0443(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Stack_BIcon_One_Item_Visible;         // 0x0444(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Get_Imagine_Park_Data_Result;             // 0x0445(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4790[0x2];                                     // 0x0446(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Get_Imagine_Park_Data_ParkName;           // 0x0448(0x0018)()
	class FText                                   CallFunc_Get_Imagine_Park_Data_Effect_Value;       // 0x0460(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0478(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x0479(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock) == 0x000008, "Wrong alignment on WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock");
static_assert(sizeof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock) == 0x000480, "Wrong size on WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, EntryPoint) == 0x000000, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, Temp_bool_Variable) == 0x000005, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, Temp_bool_Variable_1) == 0x000006, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, Temp_byte_Variable) == 0x000007, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, Temp_byte_Variable_1) == 0x000008, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, K2Node_CustomEvent_InventoryItemData) == 0x000010, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::K2Node_CustomEvent_InventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_GetItemLevel_ReturnValue) == 0x000070, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_Conv_IntToText_ReturnValue) == 0x000078, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000090, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_IsValid_ReturnValue) == 0x000091, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, Temp_bool_Variable_2) == 0x000092, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_GetMasterDataManager_IsValid) == 0x000093, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_GetMasterDataManager_ReturnValue) == 0x000098, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_GetNetworkDataCache_IsValid) == 0x0000A0, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0000A8, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_IsInventoryStorageNumber_ReturnValue) == 0x0000B0, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_IsInventoryStorageNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_GetStorage_ReturnValue) == 0x0000B8, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_Not_PreBool_ReturnValue) == 0x0000C0, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0000C1, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0000C8, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_CalcImagineParam_ReturnValue) == 0x0001E0, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_CalcImagineParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_GetStorage_ReturnValue_1) == 0x000250, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_GetStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_IsItemLock_ReturnValue) == 0x000258, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_IsItemLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_Get_Item_Player_Sale_Price__Price) == 0x00025C, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_Get_Item_Player_Sale_Price__Price' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000260, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000268, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000280, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_Conv_StringToText_ReturnValue) == 0x000290, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_GetMasterDataManager_IsValid_1) == 0x0002A8, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x0002B0, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_FindMasterImagineData_IsExists) == 0x0002B8, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_FindMasterImagineData_ReturnValue) == 0x0002C0, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_FindMasterImagineData_IsExists_1) == 0x000370, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_FindMasterImagineData_IsExists_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_FindMasterImagineData_ReturnValue_1) == 0x000378, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_FindMasterImagineData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, K2Node_Select_Default) == 0x000428, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_IsUsedItem_bUse) == 0x000440, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_IsUsedItem_bUse' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, Temp_bool_Variable_3) == 0x000441, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, K2Node_Select_Default_1) == 0x000442, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000443, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_Set_Stack_BIcon_One_Item_Visible) == 0x000444, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_Set_Stack_BIcon_One_Item_Visible' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_Get_Imagine_Park_Data_Result) == 0x000445, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_Get_Imagine_Park_Data_Result' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_Get_Imagine_Park_Data_ParkName) == 0x000448, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_Get_Imagine_Park_Data_ParkName' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, CallFunc_Get_Imagine_Park_Data_Effect_Value) == 0x000460, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::CallFunc_Get_Imagine_Park_Data_Effect_Value' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, K2Node_Select_Default_2) == 0x000478, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock, K2Node_Select_Default_3) == 0x000479, "Member 'WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock::K2Node_Select_Default_3' has a wrong offset!");

// Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.SetOneItem
// 0x0060 (0x0060 - 0x0000)
struct WBP_MultiSelectInnerImagineBlock_C_SetOneItem final
{
public:
	struct FInventoryItemData                     Param_InventoryItemData;                           // 0x0000(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectInnerImagineBlock_C_SetOneItem) == 0x000008, "Wrong alignment on WBP_MultiSelectInnerImagineBlock_C_SetOneItem");
static_assert(sizeof(WBP_MultiSelectInnerImagineBlock_C_SetOneItem) == 0x000060, "Wrong size on WBP_MultiSelectInnerImagineBlock_C_SetOneItem");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_SetOneItem, Param_InventoryItemData) == 0x000000, "Member 'WBP_MultiSelectInnerImagineBlock_C_SetOneItem::Param_InventoryItemData' has a wrong offset!");

// Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.GetPrice
// 0x0014 (0x0014 - 0x0000)
struct WBP_MultiSelectInnerImagineBlock_C_GetPrice final
{
public:
	int32                                         Price;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price;        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4791[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price_1;      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectInnerImagineBlock_C_GetPrice) == 0x000004, "Wrong alignment on WBP_MultiSelectInnerImagineBlock_C_GetPrice");
static_assert(sizeof(WBP_MultiSelectInnerImagineBlock_C_GetPrice) == 0x000014, "Wrong size on WBP_MultiSelectInnerImagineBlock_C_GetPrice");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_GetPrice, Price) == 0x000000, "Member 'WBP_MultiSelectInnerImagineBlock_C_GetPrice::Price' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_GetPrice, CallFunc_Get_Item_Player_Sale_Price__Price) == 0x000004, "Member 'WBP_MultiSelectInnerImagineBlock_C_GetPrice::CallFunc_Get_Item_Player_Sale_Price__Price' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_GetPrice, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_MultiSelectInnerImagineBlock_C_GetPrice::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_GetPrice, CallFunc_Get_Item_Player_Sale_Price__Price_1) == 0x00000C, "Member 'WBP_MultiSelectInnerImagineBlock_C_GetPrice::CallFunc_Get_Item_Player_Sale_Price__Price_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_GetPrice, CallFunc_Multiply_IntInt_ReturnValue) == 0x000010, "Member 'WBP_MultiSelectInnerImagineBlock_C_GetPrice::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.SetImagineParam
// 0x0118 (0x0118 - 0x0000)
struct WBP_MultiSelectInnerImagineBlock_C_SetImagineParam final
{
public:
	struct FImagineParameter                      ImagineParameter;                                  // 0x0000(0x006C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	uint8                                         Pad_4792[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0070(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0088(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x00A0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x00B8(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_4;             // 0x00D0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_5;             // 0x00E8(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_6;             // 0x0100(0x0018)()
};
static_assert(alignof(WBP_MultiSelectInnerImagineBlock_C_SetImagineParam) == 0x000008, "Wrong alignment on WBP_MultiSelectInnerImagineBlock_C_SetImagineParam");
static_assert(sizeof(WBP_MultiSelectInnerImagineBlock_C_SetImagineParam) == 0x000118, "Wrong size on WBP_MultiSelectInnerImagineBlock_C_SetImagineParam");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_SetImagineParam, ImagineParameter) == 0x000000, "Member 'WBP_MultiSelectInnerImagineBlock_C_SetImagineParam::ImagineParameter' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_SetImagineParam, CallFunc_Conv_IntToText_ReturnValue) == 0x000070, "Member 'WBP_MultiSelectInnerImagineBlock_C_SetImagineParam::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_SetImagineParam, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000088, "Member 'WBP_MultiSelectInnerImagineBlock_C_SetImagineParam::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_SetImagineParam, CallFunc_Conv_IntToText_ReturnValue_2) == 0x0000A0, "Member 'WBP_MultiSelectInnerImagineBlock_C_SetImagineParam::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_SetImagineParam, CallFunc_Conv_IntToText_ReturnValue_3) == 0x0000B8, "Member 'WBP_MultiSelectInnerImagineBlock_C_SetImagineParam::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_SetImagineParam, CallFunc_Conv_IntToText_ReturnValue_4) == 0x0000D0, "Member 'WBP_MultiSelectInnerImagineBlock_C_SetImagineParam::CallFunc_Conv_IntToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_SetImagineParam, CallFunc_Conv_IntToText_ReturnValue_5) == 0x0000E8, "Member 'WBP_MultiSelectInnerImagineBlock_C_SetImagineParam::CallFunc_Conv_IntToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_SetImagineParam, CallFunc_Conv_IntToText_ReturnValue_6) == 0x000100, "Member 'WBP_MultiSelectInnerImagineBlock_C_SetImagineParam::CallFunc_Conv_IntToText_ReturnValue_6' has a wrong offset!");

// Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.SetEquipmentIcon
// 0x0060 (0x0060 - 0x0000)
struct WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon final
{
public:
	TArray<class USizeBox*>                       PosIconArray;                                      // 0x0000(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4793[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4794[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4795[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USizeBox*                               CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                  K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_Get_Item_1;                         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4796[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USizeBox*>                       K2Node_MakeArray_Array_1;                          // 0x0050(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon) == 0x000008, "Wrong alignment on WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon");
static_assert(sizeof(WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon) == 0x000060, "Wrong size on WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon, PosIconArray) == 0x000000, "Member 'WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon::PosIconArray' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon, Temp_bool_Variable) == 0x000010, "Member 'WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon, CallFunc_MakeLiteralByte_ReturnValue) == 0x000011, "Member 'WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon, Temp_int_Array_Index_Variable) == 0x000024, "Member 'WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000028, "Member 'WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon, CallFunc_Array_Get_Item) == 0x000030, "Member 'WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon, K2Node_MakeArray_Array) == 0x000038, "Member 'WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon, K2Node_Select_Default) == 0x000049, "Member 'WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon, K2Node_MakeArray_Array_1) == 0x000050, "Member 'WBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon::K2Node_MakeArray_Array_1' has a wrong offset!");

}

