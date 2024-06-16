#pragma once

 

// Package: EventShopCheckList_Item_Reward2

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function EventShopCheckList_Item_Reward2.EventShopCheckList_Item_Reward2_C.SetItemInfo
// 0x0048 (0x0048 - 0x0000)
struct EventShopCheckList_Item_Reward2_C_SetItemInfo final
{
public:
	class FString                                 ItemName;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         NumExchange;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63C8[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
};
static_assert(alignof(EventShopCheckList_Item_Reward2_C_SetItemInfo) == 0x000008, "Wrong alignment on EventShopCheckList_Item_Reward2_C_SetItemInfo");
static_assert(sizeof(EventShopCheckList_Item_Reward2_C_SetItemInfo) == 0x000048, "Wrong size on EventShopCheckList_Item_Reward2_C_SetItemInfo");
static_assert(offsetof(EventShopCheckList_Item_Reward2_C_SetItemInfo, ItemName) == 0x000000, "Member 'EventShopCheckList_Item_Reward2_C_SetItemInfo::ItemName' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_Reward2_C_SetItemInfo, NumExchange) == 0x000010, "Member 'EventShopCheckList_Item_Reward2_C_SetItemInfo::NumExchange' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_Reward2_C_SetItemInfo, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'EventShopCheckList_Item_Reward2_C_SetItemInfo::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_Reward2_C_SetItemInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'EventShopCheckList_Item_Reward2_C_SetItemInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function EventShopCheckList_Item_Reward2.EventShopCheckList_Item_Reward2_C.SetIconOver
// 0x0005 (0x0005 - 0x0000)
struct EventShopCheckList_Item_Reward2_C_SetIconOver final
{
public:
	bool                                          IsOver;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopCheckList_Item_Reward2_C_SetIconOver) == 0x000001, "Wrong alignment on EventShopCheckList_Item_Reward2_C_SetIconOver");
static_assert(sizeof(EventShopCheckList_Item_Reward2_C_SetIconOver) == 0x000005, "Wrong size on EventShopCheckList_Item_Reward2_C_SetIconOver");
static_assert(offsetof(EventShopCheckList_Item_Reward2_C_SetIconOver, IsOver) == 0x000000, "Member 'EventShopCheckList_Item_Reward2_C_SetIconOver::IsOver' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_Reward2_C_SetIconOver, Temp_bool_Variable) == 0x000001, "Member 'EventShopCheckList_Item_Reward2_C_SetIconOver::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_Reward2_C_SetIconOver, Temp_byte_Variable) == 0x000002, "Member 'EventShopCheckList_Item_Reward2_C_SetIconOver::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_Reward2_C_SetIconOver, Temp_byte_Variable_1) == 0x000003, "Member 'EventShopCheckList_Item_Reward2_C_SetIconOver::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Item_Reward2_C_SetIconOver, K2Node_Select_Default) == 0x000004, "Member 'EventShopCheckList_Item_Reward2_C_SetIconOver::K2Node_Select_Default' has a wrong offset!");

}

