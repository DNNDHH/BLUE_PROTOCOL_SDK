#pragma once

 

// Package: WBP_InventoryStorageRowListItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "InventoryData_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.OnItemClick__DelegateSignature
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_InventoryStorageRowListItem_C_OnItemClick__DelegateSignature final
{
public:
	struct FInventoryData                         Param_ItemData;                                    // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWBP_InventoryStorageRowListItem_C*     UpdetaListItem;                                    // 0x0098(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryStorageRowListItem_C_OnItemClick__DelegateSignature) == 0x000008, "Wrong alignment on WBP_InventoryStorageRowListItem_C_OnItemClick__DelegateSignature");
static_assert(sizeof(WBP_InventoryStorageRowListItem_C_OnItemClick__DelegateSignature) == 0x0000A0, "Wrong size on WBP_InventoryStorageRowListItem_C_OnItemClick__DelegateSignature");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_OnItemClick__DelegateSignature, Param_ItemData) == 0x000000, "Member 'WBP_InventoryStorageRowListItem_C_OnItemClick__DelegateSignature::Param_ItemData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_OnItemClick__DelegateSignature, UpdetaListItem) == 0x000098, "Member 'WBP_InventoryStorageRowListItem_C_OnItemClick__DelegateSignature::UpdetaListItem' has a wrong offset!");

// Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.OnItemClickRight__DelegateSignature
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_InventoryStorageRowListItem_C_OnItemClickRight__DelegateSignature final
{
public:
	struct FInventoryData                         Param_ItemData;                                    // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWBP_InventoryStorageRowListItem_C*     UpdetaListItem;                                    // 0x0098(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryStorageRowListItem_C_OnItemClickRight__DelegateSignature) == 0x000008, "Wrong alignment on WBP_InventoryStorageRowListItem_C_OnItemClickRight__DelegateSignature");
static_assert(sizeof(WBP_InventoryStorageRowListItem_C_OnItemClickRight__DelegateSignature) == 0x0000A0, "Wrong size on WBP_InventoryStorageRowListItem_C_OnItemClickRight__DelegateSignature");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_OnItemClickRight__DelegateSignature, Param_ItemData) == 0x000000, "Member 'WBP_InventoryStorageRowListItem_C_OnItemClickRight__DelegateSignature::Param_ItemData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_OnItemClickRight__DelegateSignature, UpdetaListItem) == 0x000098, "Member 'WBP_InventoryStorageRowListItem_C_OnItemClickRight__DelegateSignature::UpdetaListItem' has a wrong offset!");

// Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.ExecuteUbergraph_WBP_InventoryStorageRowListItem
// 0x0208 (0x0208 - 0x0000)
struct WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InItemIndex;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_StorageAmount;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58FC[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         K2Node_CustomEvent_InventoryData;                  // 0x0010(0x0098)(HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58FD[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00B0(0x0018)()
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsItemLock_ReturnValue;                   // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58FE[0x6];                                     // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue;     // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58FF[0x2];                                     // 0x00E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStackableNum_ReturnValue;              // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5900[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00F0(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5901[0x5];                                     // 0x010B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRegistShortcutByItem_ReturnValue;       // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5902[0x5];                                     // 0x011B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0120(0x00D0)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5903[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetEventTermEndTime_OutEndTime;           // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermEndTime_ReturnValue;          // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem) == 0x000008, "Wrong alignment on WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem");
static_assert(sizeof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem) == 0x000208, "Wrong size on WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, EntryPoint) == 0x000000, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, K2Node_CustomEvent_InItemIndex) == 0x000004, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::K2Node_CustomEvent_InItemIndex' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, K2Node_CustomEvent_StorageAmount) == 0x000008, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::K2Node_CustomEvent_StorageAmount' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, K2Node_CustomEvent_InventoryData) == 0x000010, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::K2Node_CustomEvent_InventoryData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, Temp_bool_Variable) == 0x0000A8, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, CallFunc_Conv_IntToText_ReturnValue) == 0x0000B0, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, CallFunc_GetStorage_ReturnValue) == 0x0000C8, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, CallFunc_IsItemLock_ReturnValue) == 0x0000D0, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::CallFunc_IsItemLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000D1, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, CallFunc_GetSBPlayerController_ReturnValue) == 0x0000D8, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000E0, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, CallFunc_IsInventoryStorageNumber_ReturnValue) == 0x0000E1, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::CallFunc_IsInventoryStorageNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, CallFunc_GetStackableNum_ReturnValue) == 0x0000E4, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::CallFunc_GetStackableNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000E8, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000F0, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, Temp_bool_Variable_1) == 0x000108, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000109, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, CallFunc_GetMasterDataManager_IsValid) == 0x00010A, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, CallFunc_GetMasterDataManager_ReturnValue) == 0x000110, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000118, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, CallFunc_IsRegistShortcutByItem_ReturnValue) == 0x000119, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::CallFunc_IsRegistShortcutByItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, CallFunc_GetItemMasterData_IsExists) == 0x00011A, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, CallFunc_GetItemMasterData_ReturnValue) == 0x000120, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, K2Node_Select_Default) == 0x0001F0, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, CallFunc_GetEventTermEndTime_OutEndTime) == 0x0001F8, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::CallFunc_GetEventTermEndTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, CallFunc_GetEventTermEndTime_ReturnValue) == 0x000200, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::CallFunc_GetEventTermEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem, K2Node_Select_Default_1) == 0x000201, "Member 'WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.InitializeItemData
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_InventoryStorageRowListItem_C_InitializeItemData final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StorageAmount;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         InventoryData;                                     // 0x0008(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryStorageRowListItem_C_InitializeItemData) == 0x000008, "Wrong alignment on WBP_InventoryStorageRowListItem_C_InitializeItemData");
static_assert(sizeof(WBP_InventoryStorageRowListItem_C_InitializeItemData) == 0x0000A0, "Wrong size on WBP_InventoryStorageRowListItem_C_InitializeItemData");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_InitializeItemData, InItemIndex) == 0x000000, "Member 'WBP_InventoryStorageRowListItem_C_InitializeItemData::InItemIndex' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_InitializeItemData, StorageAmount) == 0x000004, "Member 'WBP_InventoryStorageRowListItem_C_InitializeItemData::StorageAmount' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_InitializeItemData, InventoryData) == 0x000008, "Member 'WBP_InventoryStorageRowListItem_C_InitializeItemData::InventoryData' has a wrong offset!");

// Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.SetLockIconVisibility
// 0x0001 (0x0001 - 0x0000)
struct WBP_InventoryStorageRowListItem_C_SetLockIconVisibility final
{
public:
	bool                                          IsVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryStorageRowListItem_C_SetLockIconVisibility) == 0x000001, "Wrong alignment on WBP_InventoryStorageRowListItem_C_SetLockIconVisibility");
static_assert(sizeof(WBP_InventoryStorageRowListItem_C_SetLockIconVisibility) == 0x000001, "Wrong size on WBP_InventoryStorageRowListItem_C_SetLockIconVisibility");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_SetLockIconVisibility, IsVisibility) == 0x000000, "Member 'WBP_InventoryStorageRowListItem_C_SetLockIconVisibility::IsVisibility' has a wrong offset!");

// Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.SetIconSelected
// 0x0500 (0x0500 - 0x0000)
struct WBP_InventoryStorageRowListItem_C_SetIconSelected final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5904[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              ImageSize;                                         // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5905[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x0010(0x0278)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_1;                   // 0x0288(0x0278)()
};
static_assert(alignof(WBP_InventoryStorageRowListItem_C_SetIconSelected) == 0x000008, "Wrong alignment on WBP_InventoryStorageRowListItem_C_SetIconSelected");
static_assert(sizeof(WBP_InventoryStorageRowListItem_C_SetIconSelected) == 0x000500, "Wrong size on WBP_InventoryStorageRowListItem_C_SetIconSelected");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_SetIconSelected, IsSelected) == 0x000000, "Member 'WBP_InventoryStorageRowListItem_C_SetIconSelected::IsSelected' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_SetIconSelected, ImageSize) == 0x000004, "Member 'WBP_InventoryStorageRowListItem_C_SetIconSelected::ImageSize' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_SetIconSelected, K2Node_MakeStruct_ButtonStyle) == 0x000010, "Member 'WBP_InventoryStorageRowListItem_C_SetIconSelected::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_SetIconSelected, K2Node_MakeStruct_ButtonStyle_1) == 0x000288, "Member 'WBP_InventoryStorageRowListItem_C_SetIconSelected::K2Node_MakeStruct_ButtonStyle_1' has a wrong offset!");

// Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.OnPreviewMouseButtonDown
// 0x02D8 (0x02D8 - 0x0000)
struct WBP_InventoryStorageRowListItem_C_OnPreviewMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0160(0x00B8)()
	struct FEventReply                            CallFunc_DetectDragIfPressed_ReturnValue;          // 0x0218(0x00B8)()
	bool                                          CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryStorageRowListItem_C_OnPreviewMouseButtonDown) == 0x000008, "Wrong alignment on WBP_InventoryStorageRowListItem_C_OnPreviewMouseButtonDown");
static_assert(sizeof(WBP_InventoryStorageRowListItem_C_OnPreviewMouseButtonDown) == 0x0002D8, "Wrong size on WBP_InventoryStorageRowListItem_C_OnPreviewMouseButtonDown");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_OnPreviewMouseButtonDown, MyGeometry) == 0x000000, "Member 'WBP_InventoryStorageRowListItem_C_OnPreviewMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_OnPreviewMouseButtonDown, MouseEvent) == 0x000038, "Member 'WBP_InventoryStorageRowListItem_C_OnPreviewMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_OnPreviewMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'WBP_InventoryStorageRowListItem_C_OnPreviewMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_OnPreviewMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x000160, "Member 'WBP_InventoryStorageRowListItem_C_OnPreviewMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_OnPreviewMouseButtonDown, CallFunc_DetectDragIfPressed_ReturnValue) == 0x000218, "Member 'WBP_InventoryStorageRowListItem_C_OnPreviewMouseButtonDown::CallFunc_DetectDragIfPressed_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryStorageRowListItem_C_OnPreviewMouseButtonDown, CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue) == 0x0002D0, "Member 'WBP_InventoryStorageRowListItem_C_OnPreviewMouseButtonDown::CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue' has a wrong offset!");

}

