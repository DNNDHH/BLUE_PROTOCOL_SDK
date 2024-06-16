#pragma once

 

// Package: WBP_MultiSelectMountImagineBlock

#include "Basic.hpp"

#include "InventoryItemData_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WBP_MultiSelectMountImagineBlock.WBP_MultiSelectMountImagineBlock_C.OnClick__DelegateSignature
// 0x0060 (0x0060 - 0x0000)
struct WBP_MultiSelectMountImagineBlock_C_OnClick__DelegateSignature final
{
public:
	struct FInventoryItemData                     Param_InventoryData;                               // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectMountImagineBlock_C_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on WBP_MultiSelectMountImagineBlock_C_OnClick__DelegateSignature");
static_assert(sizeof(WBP_MultiSelectMountImagineBlock_C_OnClick__DelegateSignature) == 0x000060, "Wrong size on WBP_MultiSelectMountImagineBlock_C_OnClick__DelegateSignature");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_OnClick__DelegateSignature, Param_InventoryData) == 0x000000, "Member 'WBP_MultiSelectMountImagineBlock_C_OnClick__DelegateSignature::Param_InventoryData' has a wrong offset!");

// Function WBP_MultiSelectMountImagineBlock.WBP_MultiSelectMountImagineBlock_C.ExecuteUbergraph_WBP_MultiSelectMountImagineBlock
// 0x0340 (0x0340 - 0x0000)
struct WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidMountStackB_ReturnValue;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70C0[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price;        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70C1[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70C2[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     K2Node_CustomEvent_InventoryItemData;              // 0x0030(0x0060)(ConstParm, HasGetValueTypeHash)
	class UWBP_StorageRowListItem_C*              K2Node_CustomEvent_InStorageListItem;              // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70C3[0x6];                                     // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price_1;      // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70C4[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70C5[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00E0(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70C6[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0110(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x012B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70C7[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterMountImagineData_bOutExist;  // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70C8[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterMountImagine                  CallFunc_BP_FindMasterMountImagineData_ReturnValue; // 0x0140(0x0070)()
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsItemLock_ReturnValue;                   // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70C9[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70CA[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01D8(0x0018)()
	class FText                                   K2Node_Select_Default_2;                           // 0x01F0(0x0018)()
	bool                                          CallFunc_IsUsedItem_bUse;                          // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUsedItem_bUse_1;                        // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x020A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70CB[0x5];                                     // 0x020B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_1;                 // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70CC[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0220(0x0118)(ConstParm)
	bool                                          CallFunc_IsFangExpeditionUsing_ReturnValue;        // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Set_Stack_BIcon_One_Item_Visible;         // 0x0339(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x033A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock) == 0x000008, "Wrong alignment on WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock");
static_assert(sizeof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock) == 0x000340, "Wrong size on WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, EntryPoint) == 0x000000, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_ValidMountStackB_ReturnValue) == 0x000004, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_ValidMountStackB_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_MakeLiteralByte_ReturnValue) == 0x000005, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_Get_Item_Player_Sale_Price__Price) == 0x000008, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_Get_Item_Player_Sale_Price__Price' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000028, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, Temp_bool_Variable) == 0x000029, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, Temp_bool_Variable_1) == 0x00002A, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, Temp_bool_Variable_2) == 0x00002B, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, Temp_bool_Variable_3) == 0x00002C, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, K2Node_CustomEvent_InventoryItemData) == 0x000030, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::K2Node_CustomEvent_InventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, K2Node_CustomEvent_InStorageListItem) == 0x000090, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::K2Node_CustomEvent_InStorageListItem' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000098, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_IsValid_ReturnValue) == 0x000099, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_Conv_IntToString_ReturnValue) == 0x0000A0, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_Get_Item_Player_Sale_Price__Price_1) == 0x0000B0, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_Get_Item_Player_Sale_Price__Price_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_Conv_TextToString_ReturnValue) == 0x0000B8, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_Multiply_IntInt_ReturnValue) == 0x0000C8, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_Concat_StrStr_ReturnValue) == 0x0000D0, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000E0, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000F8, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000108, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_Conv_StringToText_ReturnValue) == 0x000110, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x000128, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_IsValid_ReturnValue_1) == 0x000129, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, K2Node_Select_Default) == 0x00012A, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_GetMasterDataManager_IsValid) == 0x00012B, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_GetMasterDataManager_ReturnValue) == 0x000130, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_BP_FindMasterMountImagineData_bOutExist) == 0x000138, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_BP_FindMasterMountImagineData_bOutExist' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_BP_FindMasterMountImagineData_ReturnValue) == 0x000140, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_BP_FindMasterMountImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_GetStorage_ReturnValue) == 0x0001B0, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_IsItemLock_ReturnValue) == 0x0001B8, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_IsItemLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0001C0, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, K2Node_Select_Default_1) == 0x0001D0, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001D8, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, K2Node_Select_Default_2) == 0x0001F0, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_IsUsedItem_bUse) == 0x000208, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_IsUsedItem_bUse' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_IsUsedItem_bUse_1) == 0x000209, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_IsUsedItem_bUse_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x00020A, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_GetStorage_ReturnValue_1) == 0x000210, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_GetStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000218, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000220, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_IsFangExpeditionUsing_ReturnValue) == 0x000338, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_IsFangExpeditionUsing_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, CallFunc_Set_Stack_BIcon_One_Item_Visible) == 0x000339, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::CallFunc_Set_Stack_BIcon_One_Item_Visible' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock, K2Node_Select_Default_3) == 0x00033A, "Member 'WBP_MultiSelectMountImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectMountImagineBlock::K2Node_Select_Default_3' has a wrong offset!");

// Function WBP_MultiSelectMountImagineBlock.WBP_MultiSelectMountImagineBlock_C.SetStorageItem
// 0x0008 (0x0008 - 0x0000)
struct WBP_MultiSelectMountImagineBlock_C_SetStorageItem final
{
public:
	class UWBP_StorageRowListItem_C*              InStorageListItem;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectMountImagineBlock_C_SetStorageItem) == 0x000008, "Wrong alignment on WBP_MultiSelectMountImagineBlock_C_SetStorageItem");
static_assert(sizeof(WBP_MultiSelectMountImagineBlock_C_SetStorageItem) == 0x000008, "Wrong size on WBP_MultiSelectMountImagineBlock_C_SetStorageItem");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_SetStorageItem, InStorageListItem) == 0x000000, "Member 'WBP_MultiSelectMountImagineBlock_C_SetStorageItem::InStorageListItem' has a wrong offset!");

// Function WBP_MultiSelectMountImagineBlock.WBP_MultiSelectMountImagineBlock_C.SetOneItem
// 0x0060 (0x0060 - 0x0000)
struct WBP_MultiSelectMountImagineBlock_C_SetOneItem final
{
public:
	struct FInventoryItemData                     InventoryItemData;                                 // 0x0000(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectMountImagineBlock_C_SetOneItem) == 0x000008, "Wrong alignment on WBP_MultiSelectMountImagineBlock_C_SetOneItem");
static_assert(sizeof(WBP_MultiSelectMountImagineBlock_C_SetOneItem) == 0x000060, "Wrong size on WBP_MultiSelectMountImagineBlock_C_SetOneItem");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_SetOneItem, InventoryItemData) == 0x000000, "Member 'WBP_MultiSelectMountImagineBlock_C_SetOneItem::InventoryItemData' has a wrong offset!");

// Function WBP_MultiSelectMountImagineBlock.WBP_MultiSelectMountImagineBlock_C.GetPrice
// 0x0014 (0x0014 - 0x0000)
struct WBP_MultiSelectMountImagineBlock_C_GetPrice final
{
public:
	int32                                         Price;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price;        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70CD[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price_1;      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectMountImagineBlock_C_GetPrice) == 0x000004, "Wrong alignment on WBP_MultiSelectMountImagineBlock_C_GetPrice");
static_assert(sizeof(WBP_MultiSelectMountImagineBlock_C_GetPrice) == 0x000014, "Wrong size on WBP_MultiSelectMountImagineBlock_C_GetPrice");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_GetPrice, Price) == 0x000000, "Member 'WBP_MultiSelectMountImagineBlock_C_GetPrice::Price' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_GetPrice, CallFunc_Get_Item_Player_Sale_Price__Price) == 0x000004, "Member 'WBP_MultiSelectMountImagineBlock_C_GetPrice::CallFunc_Get_Item_Player_Sale_Price__Price' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_GetPrice, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_MultiSelectMountImagineBlock_C_GetPrice::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_GetPrice, CallFunc_Get_Item_Player_Sale_Price__Price_1) == 0x00000C, "Member 'WBP_MultiSelectMountImagineBlock_C_GetPrice::CallFunc_Get_Item_Player_Sale_Price__Price_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectMountImagineBlock_C_GetPrice, CallFunc_Multiply_IntInt_ReturnValue) == 0x000010, "Member 'WBP_MultiSelectMountImagineBlock_C_GetPrice::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");

}

