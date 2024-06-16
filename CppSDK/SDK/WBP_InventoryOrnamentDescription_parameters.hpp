#pragma once

 

// Package: WBP_InventoryOrnamentDescription

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "InventoryData_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "DescripionButtonType_structs.hpp"


namespace SDK::Params
{

// Function WBP_InventoryOrnamentDescription.WBP_InventoryOrnamentDescription_C.OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_InventoryOrnamentDescription_C_OnButtonClicked__DelegateSignature final
{
public:
	EDescripionButtonType                         ButtonType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryOrnamentDescription_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on WBP_InventoryOrnamentDescription_C_OnButtonClicked__DelegateSignature");
static_assert(sizeof(WBP_InventoryOrnamentDescription_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on WBP_InventoryOrnamentDescription_C_OnButtonClicked__DelegateSignature");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_OnButtonClicked__DelegateSignature, ButtonType) == 0x000000, "Member 'WBP_InventoryOrnamentDescription_C_OnButtonClicked__DelegateSignature::ButtonType' has a wrong offset!");

// Function WBP_InventoryOrnamentDescription.WBP_InventoryOrnamentDescription_C.ExecuteUbergraph_WBP_InventoryOrnamentDescription
// 0x0004 (0x0004 - 0x0000)
struct WBP_InventoryOrnamentDescription_C_ExecuteUbergraph_WBP_InventoryOrnamentDescription final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryOrnamentDescription_C_ExecuteUbergraph_WBP_InventoryOrnamentDescription) == 0x000004, "Wrong alignment on WBP_InventoryOrnamentDescription_C_ExecuteUbergraph_WBP_InventoryOrnamentDescription");
static_assert(sizeof(WBP_InventoryOrnamentDescription_C_ExecuteUbergraph_WBP_InventoryOrnamentDescription) == 0x000004, "Wrong size on WBP_InventoryOrnamentDescription_C_ExecuteUbergraph_WBP_InventoryOrnamentDescription");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_ExecuteUbergraph_WBP_InventoryOrnamentDescription, EntryPoint) == 0x000000, "Member 'WBP_InventoryOrnamentDescription_C_ExecuteUbergraph_WBP_InventoryOrnamentDescription::EntryPoint' has a wrong offset!");

// Function WBP_InventoryOrnamentDescription.WBP_InventoryOrnamentDescription_C.SetItem
// 0x03C8 (0x03C8 - 0x0000)
struct WBP_InventoryOrnamentDescription_C_SetItem final
{
public:
	struct FInventoryData                         Param_InventoryItemData;                           // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                          Param_bStorageMode;                                // 0x0098(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_bBagStorageViewMode;                         // 0x0099(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_40E2[0x2];                                     // 0x009A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         StackNum;                                          // 0x009C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           OwnItem;                                           // 0x00A0(0x0118)(Edit, BlueprintVisible)
	class USBMasterDataManager*                   ItemDataManager;                                   // 0x01B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x01C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_40E3[0x5];                                     // 0x01C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetEventTermEndTime_OutEndTime;           // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermEndTime_ReturnValue;          // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTimeText_ReturnValue;              // 0x01D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40E4[0x5];                                     // 0x01D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetOrnamentStorage_ReturnValue;           // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_40E5[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x01E8(0x0118)(ConstParm)
	class FString                                 CallFunc_GetOrnamentText_ReturnValue;              // 0x0300(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0310(0x0018)()
	class FString                                 CallFunc_GetOrnamentText_ReturnValue_1;            // 0x0328(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0338(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_40E6[0x7];                                     // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterOrnamentDataBP_bExists;         // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_40E7[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterOrnament                      CallFunc_FindMasterOrnamentDataBP_ReturnValue;     // 0x0368(0x0060)()
};
static_assert(alignof(WBP_InventoryOrnamentDescription_C_SetItem) == 0x000008, "Wrong alignment on WBP_InventoryOrnamentDescription_C_SetItem");
static_assert(sizeof(WBP_InventoryOrnamentDescription_C_SetItem) == 0x0003C8, "Wrong size on WBP_InventoryOrnamentDescription_C_SetItem");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, Param_InventoryItemData) == 0x000000, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::Param_InventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, Param_bStorageMode) == 0x000098, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::Param_bStorageMode' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, Param_bBagStorageViewMode) == 0x000099, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::Param_bBagStorageViewMode' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, StackNum) == 0x00009C, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::StackNum' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, OwnItem) == 0x0000A0, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::OwnItem' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, ItemDataManager) == 0x0001B8, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::ItemDataManager' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue) == 0x0001C0, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0001C1, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, Temp_bool_Variable) == 0x0001C2, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, CallFunc_GetEventTermEndTime_OutEndTime) == 0x0001C8, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::CallFunc_GetEventTermEndTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, CallFunc_GetEventTermEndTime_ReturnValue) == 0x0001D0, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::CallFunc_GetEventTermEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, K2Node_Select_Default) == 0x0001D1, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, CallFunc_SetDateTimeText_ReturnValue) == 0x0001D2, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::CallFunc_SetDateTimeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, CallFunc_GetOrnamentStorage_ReturnValue) == 0x0001D8, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::CallFunc_GetOrnamentStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0001E0, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0001E8, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, CallFunc_GetOrnamentText_ReturnValue) == 0x000300, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::CallFunc_GetOrnamentText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000310, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, CallFunc_GetOrnamentText_ReturnValue_1) == 0x000328, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::CallFunc_GetOrnamentText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000338, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, CallFunc_GetMasterDataManager_IsValid) == 0x000350, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, CallFunc_GetMasterDataManager_ReturnValue) == 0x000358, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, CallFunc_FindMasterOrnamentDataBP_bExists) == 0x000360, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::CallFunc_FindMasterOrnamentDataBP_bExists' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetItem, CallFunc_FindMasterOrnamentDataBP_ReturnValue) == 0x000368, "Member 'WBP_InventoryOrnamentDescription_C_SetItem::CallFunc_FindMasterOrnamentDataBP_ReturnValue' has a wrong offset!");

// Function WBP_InventoryOrnamentDescription.WBP_InventoryOrnamentDescription_C.RefleshButtonAction
// 0x0028 (0x0028 - 0x0000)
struct WBP_InventoryOrnamentDescription_C_RefleshButtonAction final
{
public:
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40E8[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetOrnamentStorage_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetOrnamentStorage_ReturnValue_1;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsItemLock_ReturnValue;                   // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsItemLock_ReturnValue_1;                 // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryOrnamentDescription_C_RefleshButtonAction) == 0x000008, "Wrong alignment on WBP_InventoryOrnamentDescription_C_RefleshButtonAction");
static_assert(sizeof(WBP_InventoryOrnamentDescription_C_RefleshButtonAction) == 0x000028, "Wrong size on WBP_InventoryOrnamentDescription_C_RefleshButtonAction");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_RefleshButtonAction, CallFunc_MakeLiteralByte_ReturnValue) == 0x000000, "Member 'WBP_InventoryOrnamentDescription_C_RefleshButtonAction::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_RefleshButtonAction, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000001, "Member 'WBP_InventoryOrnamentDescription_C_RefleshButtonAction::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_RefleshButtonAction, CallFunc_GetOrnamentStorage_ReturnValue) == 0x000008, "Member 'WBP_InventoryOrnamentDescription_C_RefleshButtonAction::CallFunc_GetOrnamentStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_RefleshButtonAction, CallFunc_GetOrnamentStorage_ReturnValue_1) == 0x000010, "Member 'WBP_InventoryOrnamentDescription_C_RefleshButtonAction::CallFunc_GetOrnamentStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_RefleshButtonAction, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'WBP_InventoryOrnamentDescription_C_RefleshButtonAction::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_RefleshButtonAction, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000019, "Member 'WBP_InventoryOrnamentDescription_C_RefleshButtonAction::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_RefleshButtonAction, CallFunc_IsItemLock_ReturnValue) == 0x00001A, "Member 'WBP_InventoryOrnamentDescription_C_RefleshButtonAction::CallFunc_IsItemLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_RefleshButtonAction, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x00001B, "Member 'WBP_InventoryOrnamentDescription_C_RefleshButtonAction::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_RefleshButtonAction, CallFunc_Not_PreBool_ReturnValue_1) == 0x00001C, "Member 'WBP_InventoryOrnamentDescription_C_RefleshButtonAction::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_RefleshButtonAction, CallFunc_IsItemLock_ReturnValue_1) == 0x00001D, "Member 'WBP_InventoryOrnamentDescription_C_RefleshButtonAction::CallFunc_IsItemLock_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_RefleshButtonAction, CallFunc_Not_PreBool_ReturnValue_2) == 0x00001E, "Member 'WBP_InventoryOrnamentDescription_C_RefleshButtonAction::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_RefleshButtonAction, Temp_bool_Variable) == 0x00001F, "Member 'WBP_InventoryOrnamentDescription_C_RefleshButtonAction::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_RefleshButtonAction, K2Node_Select_Default) == 0x000020, "Member 'WBP_InventoryOrnamentDescription_C_RefleshButtonAction::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_RefleshButtonAction, Temp_bool_Variable_1) == 0x000021, "Member 'WBP_InventoryOrnamentDescription_C_RefleshButtonAction::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_RefleshButtonAction, CallFunc_Not_PreBool_ReturnValue_3) == 0x000022, "Member 'WBP_InventoryOrnamentDescription_C_RefleshButtonAction::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_RefleshButtonAction, K2Node_Select_Default_1) == 0x000023, "Member 'WBP_InventoryOrnamentDescription_C_RefleshButtonAction::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_RefleshButtonAction, CallFunc_BooleanAND_ReturnValue) == 0x000024, "Member 'WBP_InventoryOrnamentDescription_C_RefleshButtonAction::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_RefleshButtonAction, CallFunc_BooleanAND_ReturnValue_1) == 0x000025, "Member 'WBP_InventoryOrnamentDescription_C_RefleshButtonAction::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function WBP_InventoryOrnamentDescription.WBP_InventoryOrnamentDescription_C.SetModelCaptureImageVisibility
// 0x0005 (0x0005 - 0x0000)
struct WBP_InventoryOrnamentDescription_C_SetModelCaptureImageVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryOrnamentDescription_C_SetModelCaptureImageVisibility) == 0x000001, "Wrong alignment on WBP_InventoryOrnamentDescription_C_SetModelCaptureImageVisibility");
static_assert(sizeof(WBP_InventoryOrnamentDescription_C_SetModelCaptureImageVisibility) == 0x000005, "Wrong size on WBP_InventoryOrnamentDescription_C_SetModelCaptureImageVisibility");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetModelCaptureImageVisibility, InIsVisible) == 0x000000, "Member 'WBP_InventoryOrnamentDescription_C_SetModelCaptureImageVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetModelCaptureImageVisibility, Temp_bool_Variable) == 0x000001, "Member 'WBP_InventoryOrnamentDescription_C_SetModelCaptureImageVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetModelCaptureImageVisibility, Temp_byte_Variable) == 0x000002, "Member 'WBP_InventoryOrnamentDescription_C_SetModelCaptureImageVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetModelCaptureImageVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_InventoryOrnamentDescription_C_SetModelCaptureImageVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetModelCaptureImageVisibility, K2Node_Select_Default) == 0x000004, "Member 'WBP_InventoryOrnamentDescription_C_SetModelCaptureImageVisibility::K2Node_Select_Default' has a wrong offset!");

// Function WBP_InventoryOrnamentDescription.WBP_InventoryOrnamentDescription_C.SetSwitcher
// 0x0004 (0x0004 - 0x0000)
struct WBP_InventoryOrnamentDescription_C_SetSwitcher final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryOrnamentDescription_C_SetSwitcher) == 0x000004, "Wrong alignment on WBP_InventoryOrnamentDescription_C_SetSwitcher");
static_assert(sizeof(WBP_InventoryOrnamentDescription_C_SetSwitcher) == 0x000004, "Wrong size on WBP_InventoryOrnamentDescription_C_SetSwitcher");
static_assert(offsetof(WBP_InventoryOrnamentDescription_C_SetSwitcher, Param_Index) == 0x000000, "Member 'WBP_InventoryOrnamentDescription_C_SetSwitcher::Param_Index' has a wrong offset!");

}

