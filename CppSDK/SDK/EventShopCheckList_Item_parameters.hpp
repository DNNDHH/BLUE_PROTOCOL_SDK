#pragma once

 

// Package: EventShopCheckList_Item

#include "Basic.hpp"

#include "EventShopCheckList_ItemType_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function EventShopCheckList_Item.EventShopCheckList_Item_C.SetItemInfo
// 0x0048 (0x0048 - 0x0000)
struct EventShopCheckList_Item_C_SetItemInfo final
{
public:
	ESBRewardItemType                             RewardItemType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63CD[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ItemName;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         NumExchange;                                       // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumHave;                                           // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumLimit;                                          // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Limit;                                           // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Have;                                            // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Exchange;                                        // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 L_ItemName;                                        // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	EventShopCheckList_ItemType                   CallFunc_GetCheckListType_CheckListType;           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopCheckList_Item_C_SetItemInfo) == 0x000008, "Wrong alignment on EventShopCheckList_Item_C_SetItemInfo");
static_assert(sizeof(EventShopCheckList_Item_C_SetItemInfo) == 0x000048, "Wrong size on EventShopCheckList_Item_C_SetItemInfo");
static_assert(offsetof(EventShopCheckList_Item_C_SetItemInfo, RewardItemType) == 0x000000, "Member 'EventShopCheckList_Item_C_SetItemInfo::RewardItemType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_C_SetItemInfo, ItemName) == 0x000008, "Member 'EventShopCheckList_Item_C_SetItemInfo::ItemName' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_C_SetItemInfo, NumExchange) == 0x000018, "Member 'EventShopCheckList_Item_C_SetItemInfo::NumExchange' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_C_SetItemInfo, NumHave) == 0x00001C, "Member 'EventShopCheckList_Item_C_SetItemInfo::NumHave' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_C_SetItemInfo, NumLimit) == 0x000020, "Member 'EventShopCheckList_Item_C_SetItemInfo::NumLimit' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_C_SetItemInfo, L_Limit) == 0x000024, "Member 'EventShopCheckList_Item_C_SetItemInfo::L_Limit' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_C_SetItemInfo, L_Have) == 0x000028, "Member 'EventShopCheckList_Item_C_SetItemInfo::L_Have' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_C_SetItemInfo, L_Exchange) == 0x00002C, "Member 'EventShopCheckList_Item_C_SetItemInfo::L_Exchange' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_C_SetItemInfo, L_ItemName) == 0x000030, "Member 'EventShopCheckList_Item_C_SetItemInfo::L_ItemName' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_C_SetItemInfo, CallFunc_GetCheckListType_CheckListType) == 0x000040, "Member 'EventShopCheckList_Item_C_SetItemInfo::CallFunc_GetCheckListType_CheckListType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_C_SetItemInfo, K2Node_SwitchEnum_CmpSuccess) == 0x000041, "Member 'EventShopCheckList_Item_C_SetItemInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function EventShopCheckList_Item.EventShopCheckList_Item_C.GetCheckListType
// 0x0007 (0x0007 - 0x0000)
struct EventShopCheckList_Item_C_GetCheckListType final
{
public:
	ESBRewardItemType                             RewardItemType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EventShopCheckList_ItemType                   CheckListType;                                     // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EventShopCheckList_ItemType                   Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EventShopCheckList_ItemType                   Temp_byte_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EventShopCheckList_ItemType                   K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopCheckList_Item_C_GetCheckListType) == 0x000001, "Wrong alignment on EventShopCheckList_Item_C_GetCheckListType");
static_assert(sizeof(EventShopCheckList_Item_C_GetCheckListType) == 0x000007, "Wrong size on EventShopCheckList_Item_C_GetCheckListType");
static_assert(offsetof(EventShopCheckList_Item_C_GetCheckListType, RewardItemType) == 0x000000, "Member 'EventShopCheckList_Item_C_GetCheckListType::RewardItemType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_C_GetCheckListType, CheckListType) == 0x000001, "Member 'EventShopCheckList_Item_C_GetCheckListType::CheckListType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_C_GetCheckListType, Temp_byte_Variable) == 0x000002, "Member 'EventShopCheckList_Item_C_GetCheckListType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_C_GetCheckListType, K2Node_SwitchEnum_CmpSuccess) == 0x000003, "Member 'EventShopCheckList_Item_C_GetCheckListType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_C_GetCheckListType, Temp_byte_Variable_1) == 0x000004, "Member 'EventShopCheckList_Item_C_GetCheckListType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_C_GetCheckListType, Temp_bool_Variable) == 0x000005, "Member 'EventShopCheckList_Item_C_GetCheckListType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_C_GetCheckListType, K2Node_Select_Default) == 0x000006, "Member 'EventShopCheckList_Item_C_GetCheckListType::K2Node_Select_Default' has a wrong offset!");

// Function EventShopCheckList_Item.EventShopCheckList_Item_C.Initialize
// 0x0040 (0x0040 - 0x0000)
struct EventShopCheckList_Item_C_Initialize final
{
public:
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_1;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   CallFunc_GetTemporallyStorage_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   CallFunc_GetTemporallyStorage_ReturnValue_1;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetInventory_ReturnValue;                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   CallFunc_GetTemporallyStorage_ReturnValue_2;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   CallFunc_GetTemporallyStorage_ReturnValue_3;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopCheckList_Item_C_Initialize) == 0x000008, "Wrong alignment on EventShopCheckList_Item_C_Initialize");
static_assert(sizeof(EventShopCheckList_Item_C_Initialize) == 0x000040, "Wrong size on EventShopCheckList_Item_C_Initialize");
static_assert(offsetof(EventShopCheckList_Item_C_Initialize, CallFunc_GetStorage_ReturnValue) == 0x000000, "Member 'EventShopCheckList_Item_C_Initialize::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_C_Initialize, CallFunc_GetStorage_ReturnValue_1) == 0x000008, "Member 'EventShopCheckList_Item_C_Initialize::CallFunc_GetStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_C_Initialize, CallFunc_GetTemporallyStorage_ReturnValue) == 0x000010, "Member 'EventShopCheckList_Item_C_Initialize::CallFunc_GetTemporallyStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_C_Initialize, CallFunc_GetTemporallyStorage_ReturnValue_1) == 0x000018, "Member 'EventShopCheckList_Item_C_Initialize::CallFunc_GetTemporallyStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_C_Initialize, CallFunc_GetCharacterStorage_ReturnValue) == 0x000020, "Member 'EventShopCheckList_Item_C_Initialize::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_C_Initialize, CallFunc_GetInventory_ReturnValue) == 0x000028, "Member 'EventShopCheckList_Item_C_Initialize::CallFunc_GetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_C_Initialize, CallFunc_GetTemporallyStorage_ReturnValue_2) == 0x000030, "Member 'EventShopCheckList_Item_C_Initialize::CallFunc_GetTemporallyStorage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_C_Initialize, CallFunc_GetTemporallyStorage_ReturnValue_3) == 0x000038, "Member 'EventShopCheckList_Item_C_Initialize::CallFunc_GetTemporallyStorage_ReturnValue_3' has a wrong offset!");

}

