#pragma once

 

// Package: EventShopCheckList_Item_Bag

#include "Basic.hpp"


namespace SDK::Params
{

// Function EventShopCheckList_Item_Bag.EventShopCheckList_Item_Bag_C.SetItemInfo
// 0x0080 (0x0080 - 0x0000)
struct EventShopCheckList_Item_Bag_C_SetItemInfo final
{
public:
	int32                                         NumExchange;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumHave;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumLimit;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63CE[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0030(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
};
static_assert(alignof(EventShopCheckList_Item_Bag_C_SetItemInfo) == 0x000008, "Wrong alignment on EventShopCheckList_Item_Bag_C_SetItemInfo");
static_assert(sizeof(EventShopCheckList_Item_Bag_C_SetItemInfo) == 0x000080, "Wrong size on EventShopCheckList_Item_Bag_C_SetItemInfo");
static_assert(offsetof(EventShopCheckList_Item_Bag_C_SetItemInfo, NumExchange) == 0x000000, "Member 'EventShopCheckList_Item_Bag_C_SetItemInfo::NumExchange' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_Bag_C_SetItemInfo, NumHave) == 0x000004, "Member 'EventShopCheckList_Item_Bag_C_SetItemInfo::NumHave' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_Bag_C_SetItemInfo, NumLimit) == 0x000008, "Member 'EventShopCheckList_Item_Bag_C_SetItemInfo::NumLimit' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_Bag_C_SetItemInfo, CallFunc_Conv_IntToString_ReturnValue) == 0x000010, "Member 'EventShopCheckList_Item_Bag_C_SetItemInfo::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_Bag_C_SetItemInfo, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000020, "Member 'EventShopCheckList_Item_Bag_C_SetItemInfo::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_Bag_C_SetItemInfo, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'EventShopCheckList_Item_Bag_C_SetItemInfo::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_Bag_C_SetItemInfo, CallFunc_Concat_StrStr_ReturnValue) == 0x000048, "Member 'EventShopCheckList_Item_Bag_C_SetItemInfo::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_Bag_C_SetItemInfo, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000058, "Member 'EventShopCheckList_Item_Bag_C_SetItemInfo::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_Bag_C_SetItemInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'EventShopCheckList_Item_Bag_C_SetItemInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function EventShopCheckList_Item_Bag.EventShopCheckList_Item_Bag_C.SetIconOver
// 0x0001 (0x0001 - 0x0000)
struct EventShopCheckList_Item_Bag_C_SetIconOver final
{
public:
	bool                                          IsOver;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopCheckList_Item_Bag_C_SetIconOver) == 0x000001, "Wrong alignment on EventShopCheckList_Item_Bag_C_SetIconOver");
static_assert(sizeof(EventShopCheckList_Item_Bag_C_SetIconOver) == 0x000001, "Wrong size on EventShopCheckList_Item_Bag_C_SetIconOver");
static_assert(offsetof(EventShopCheckList_Item_Bag_C_SetIconOver, IsOver) == 0x000000, "Member 'EventShopCheckList_Item_Bag_C_SetIconOver::IsOver' has a wrong offset!");

}

