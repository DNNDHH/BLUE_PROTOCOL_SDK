#pragma once

 

// Package: EventShopCheckList_Item_Reward3

#include "Basic.hpp"


namespace SDK::Params
{

// Function EventShopCheckList_Item_Reward3.EventShopCheckList_Item_Reward3_C.SetItemInfo
// 0x0060 (0x0060 - 0x0000)
struct EventShopCheckList_Item_Reward3_C_SetItemInfo final
{
public:
	class FString                                 ItemName;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         NumExchange;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumHave;                                           // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0030(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
};
static_assert(alignof(EventShopCheckList_Item_Reward3_C_SetItemInfo) == 0x000008, "Wrong alignment on EventShopCheckList_Item_Reward3_C_SetItemInfo");
static_assert(sizeof(EventShopCheckList_Item_Reward3_C_SetItemInfo) == 0x000060, "Wrong size on EventShopCheckList_Item_Reward3_C_SetItemInfo");
static_assert(offsetof(EventShopCheckList_Item_Reward3_C_SetItemInfo, ItemName) == 0x000000, "Member 'EventShopCheckList_Item_Reward3_C_SetItemInfo::ItemName' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_Reward3_C_SetItemInfo, NumExchange) == 0x000010, "Member 'EventShopCheckList_Item_Reward3_C_SetItemInfo::NumExchange' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_Reward3_C_SetItemInfo, NumHave) == 0x000014, "Member 'EventShopCheckList_Item_Reward3_C_SetItemInfo::NumHave' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_Reward3_C_SetItemInfo, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'EventShopCheckList_Item_Reward3_C_SetItemInfo::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_Reward3_C_SetItemInfo, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000030, "Member 'EventShopCheckList_Item_Reward3_C_SetItemInfo::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_Reward3_C_SetItemInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'EventShopCheckList_Item_Reward3_C_SetItemInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function EventShopCheckList_Item_Reward3.EventShopCheckList_Item_Reward3_C.SetIconOver
// 0x0001 (0x0001 - 0x0000)
struct EventShopCheckList_Item_Reward3_C_SetIconOver final
{
public:
	bool                                          IsOver;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopCheckList_Item_Reward3_C_SetIconOver) == 0x000001, "Wrong alignment on EventShopCheckList_Item_Reward3_C_SetIconOver");
static_assert(sizeof(EventShopCheckList_Item_Reward3_C_SetIconOver) == 0x000001, "Wrong size on EventShopCheckList_Item_Reward3_C_SetIconOver");
static_assert(offsetof(EventShopCheckList_Item_Reward3_C_SetIconOver, IsOver) == 0x000000, "Member 'EventShopCheckList_Item_Reward3_C_SetIconOver::IsOver' has a wrong offset!");

}

