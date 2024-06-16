#pragma once

 

// Package: WBP_StorageRowListItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "InventoryData_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.OnItemClick__DelegateSignature
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_StorageRowListItem_C_OnItemClick__DelegateSignature final
{
public:
	struct FInventoryData                         Param_ItemData;                                    // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWBP_StorageRowListItem_C*              UpdetaListItem;                                    // 0x0098(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageRowListItem_C_OnItemClick__DelegateSignature) == 0x000008, "Wrong alignment on WBP_StorageRowListItem_C_OnItemClick__DelegateSignature");
static_assert(sizeof(WBP_StorageRowListItem_C_OnItemClick__DelegateSignature) == 0x0000A0, "Wrong size on WBP_StorageRowListItem_C_OnItemClick__DelegateSignature");
static_assert(offsetof(WBP_StorageRowListItem_C_OnItemClick__DelegateSignature, Param_ItemData) == 0x000000, "Member 'WBP_StorageRowListItem_C_OnItemClick__DelegateSignature::Param_ItemData' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_OnItemClick__DelegateSignature, UpdetaListItem) == 0x000098, "Member 'WBP_StorageRowListItem_C_OnItemClick__DelegateSignature::UpdetaListItem' has a wrong offset!");

// Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.OnItemClickRight__DelegateSignature
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_StorageRowListItem_C_OnItemClickRight__DelegateSignature final
{
public:
	struct FInventoryData                         Param_ItemData;                                    // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWBP_StorageRowListItem_C*              UpdetaListItem;                                    // 0x0098(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageRowListItem_C_OnItemClickRight__DelegateSignature) == 0x000008, "Wrong alignment on WBP_StorageRowListItem_C_OnItemClickRight__DelegateSignature");
static_assert(sizeof(WBP_StorageRowListItem_C_OnItemClickRight__DelegateSignature) == 0x0000A0, "Wrong size on WBP_StorageRowListItem_C_OnItemClickRight__DelegateSignature");
static_assert(offsetof(WBP_StorageRowListItem_C_OnItemClickRight__DelegateSignature, Param_ItemData) == 0x000000, "Member 'WBP_StorageRowListItem_C_OnItemClickRight__DelegateSignature::Param_ItemData' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_OnItemClickRight__DelegateSignature, UpdetaListItem) == 0x000098, "Member 'WBP_StorageRowListItem_C_OnItemClickRight__DelegateSignature::UpdetaListItem' has a wrong offset!");

// Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.ExecuteUbergraph_WBP_StorageRowListItem
// 0x01F8 (0x01F8 - 0x0000)
struct WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRegistShortcutByItem_ReturnValue;       // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InItemIndex;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_StorageAmount;                  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         K2Node_CustomEvent_InventoryData;                  // 0x0010(0x0098)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00A8(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77C4[0x5];                                     // 0x00C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsItemLock_ReturnValue;                   // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue;     // 0x00D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77C5[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackableNum_ReturnValue;              // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77C6[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00E8(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0103(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77C7[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77C8[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0118(0x00D0)()
	struct FDateTime                              CallFunc_GetEventTermEndTime_OutEndTime;           // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermEndTime_ReturnValue;          // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem) == 0x000008, "Wrong alignment on WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem");
static_assert(sizeof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem) == 0x0001F8, "Wrong size on WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, EntryPoint) == 0x000000, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, Temp_bool_Variable) == 0x000004, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, Temp_bool_Variable_1) == 0x000005, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, CallFunc_IsRegistShortcutByItem_ReturnValue) == 0x000006, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::CallFunc_IsRegistShortcutByItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, CallFunc_MakeLiteralByte_ReturnValue) == 0x000007, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, K2Node_CustomEvent_InItemIndex) == 0x000008, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::K2Node_CustomEvent_InItemIndex' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, K2Node_CustomEvent_StorageAmount) == 0x00000C, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::K2Node_CustomEvent_StorageAmount' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, K2Node_CustomEvent_InventoryData) == 0x000010, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::K2Node_CustomEvent_InventoryData' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, CallFunc_Conv_IntToText_ReturnValue) == 0x0000A8, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000C0, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0000C1, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0000C2, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, CallFunc_GetStorage_ReturnValue) == 0x0000C8, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, CallFunc_IsItemLock_ReturnValue) == 0x0000D0, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::CallFunc_IsItemLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, Temp_bool_Variable_2) == 0x0000D1, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x0000D2, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, CallFunc_IsInventoryStorageNumber_ReturnValue) == 0x0000D3, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::CallFunc_IsInventoryStorageNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, CallFunc_GetSBPlayerController_ReturnValue) == 0x0000D8, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, CallFunc_GetStackableNum_ReturnValue) == 0x0000E0, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::CallFunc_GetStackableNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000E4, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000E8, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, K2Node_Select_Default) == 0x000100, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x000101, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, K2Node_Select_Default_1) == 0x000102, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, CallFunc_GetMasterDataManager_IsValid) == 0x000103, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, CallFunc_GetMasterDataManager_ReturnValue) == 0x000108, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, CallFunc_GetItemMasterData_IsExists) == 0x000110, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, CallFunc_GetItemMasterData_ReturnValue) == 0x000118, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, CallFunc_GetEventTermEndTime_OutEndTime) == 0x0001E8, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::CallFunc_GetEventTermEndTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, CallFunc_GetEventTermEndTime_ReturnValue) == 0x0001F0, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::CallFunc_GetEventTermEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem, K2Node_Select_Default_2) == 0x0001F1, "Member 'WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem::K2Node_Select_Default_2' has a wrong offset!");

// Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.InitializeItemData
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_StorageRowListItem_C_InitializeItemData final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StorageAmount;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         InventoryData;                                     // 0x0008(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageRowListItem_C_InitializeItemData) == 0x000008, "Wrong alignment on WBP_StorageRowListItem_C_InitializeItemData");
static_assert(sizeof(WBP_StorageRowListItem_C_InitializeItemData) == 0x0000A0, "Wrong size on WBP_StorageRowListItem_C_InitializeItemData");
static_assert(offsetof(WBP_StorageRowListItem_C_InitializeItemData, InItemIndex) == 0x000000, "Member 'WBP_StorageRowListItem_C_InitializeItemData::InItemIndex' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_InitializeItemData, StorageAmount) == 0x000004, "Member 'WBP_StorageRowListItem_C_InitializeItemData::StorageAmount' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_InitializeItemData, InventoryData) == 0x000008, "Member 'WBP_StorageRowListItem_C_InitializeItemData::InventoryData' has a wrong offset!");

// Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.SetLockIconVisibility
// 0x0001 (0x0001 - 0x0000)
struct WBP_StorageRowListItem_C_SetLockIconVisibility final
{
public:
	bool                                          IsVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageRowListItem_C_SetLockIconVisibility) == 0x000001, "Wrong alignment on WBP_StorageRowListItem_C_SetLockIconVisibility");
static_assert(sizeof(WBP_StorageRowListItem_C_SetLockIconVisibility) == 0x000001, "Wrong size on WBP_StorageRowListItem_C_SetLockIconVisibility");
static_assert(offsetof(WBP_StorageRowListItem_C_SetLockIconVisibility, IsVisibility) == 0x000000, "Member 'WBP_StorageRowListItem_C_SetLockIconVisibility::IsVisibility' has a wrong offset!");

// Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.Set Icon Selected
// 0x0500 (0x0500 - 0x0000)
struct WBP_StorageRowListItem_C_Set_Icon_Selected final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77C9[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              ImageSize;                                         // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77CA[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x0010(0x0278)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_1;                   // 0x0288(0x0278)()
};
static_assert(alignof(WBP_StorageRowListItem_C_Set_Icon_Selected) == 0x000008, "Wrong alignment on WBP_StorageRowListItem_C_Set_Icon_Selected");
static_assert(sizeof(WBP_StorageRowListItem_C_Set_Icon_Selected) == 0x000500, "Wrong size on WBP_StorageRowListItem_C_Set_Icon_Selected");
static_assert(offsetof(WBP_StorageRowListItem_C_Set_Icon_Selected, IsSelected) == 0x000000, "Member 'WBP_StorageRowListItem_C_Set_Icon_Selected::IsSelected' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_Set_Icon_Selected, ImageSize) == 0x000004, "Member 'WBP_StorageRowListItem_C_Set_Icon_Selected::ImageSize' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_Set_Icon_Selected, K2Node_MakeStruct_ButtonStyle) == 0x000010, "Member 'WBP_StorageRowListItem_C_Set_Icon_Selected::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_Set_Icon_Selected, K2Node_MakeStruct_ButtonStyle_1) == 0x000288, "Member 'WBP_StorageRowListItem_C_Set_Icon_Selected::K2Node_MakeStruct_ButtonStyle_1' has a wrong offset!");

// Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.OnPreviewMouseButtonDown
// 0x02D8 (0x02D8 - 0x0000)
struct WBP_StorageRowListItem_C_OnPreviewMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0160(0x00B8)()
	struct FEventReply                            CallFunc_DetectDragIfPressed_ReturnValue;          // 0x0218(0x00B8)()
	bool                                          CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageRowListItem_C_OnPreviewMouseButtonDown) == 0x000008, "Wrong alignment on WBP_StorageRowListItem_C_OnPreviewMouseButtonDown");
static_assert(sizeof(WBP_StorageRowListItem_C_OnPreviewMouseButtonDown) == 0x0002D8, "Wrong size on WBP_StorageRowListItem_C_OnPreviewMouseButtonDown");
static_assert(offsetof(WBP_StorageRowListItem_C_OnPreviewMouseButtonDown, MyGeometry) == 0x000000, "Member 'WBP_StorageRowListItem_C_OnPreviewMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_OnPreviewMouseButtonDown, MouseEvent) == 0x000038, "Member 'WBP_StorageRowListItem_C_OnPreviewMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_OnPreviewMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'WBP_StorageRowListItem_C_OnPreviewMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_OnPreviewMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x000160, "Member 'WBP_StorageRowListItem_C_OnPreviewMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_OnPreviewMouseButtonDown, CallFunc_DetectDragIfPressed_ReturnValue) == 0x000218, "Member 'WBP_StorageRowListItem_C_OnPreviewMouseButtonDown::CallFunc_DetectDragIfPressed_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListItem_C_OnPreviewMouseButtonDown, CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue) == 0x0002D0, "Member 'WBP_StorageRowListItem_C_OnPreviewMouseButtonDown::CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue' has a wrong offset!");

}

