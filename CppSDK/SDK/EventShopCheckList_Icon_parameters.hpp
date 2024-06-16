#pragma once

 

// Package: EventShopCheckList_Icon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function EventShopCheckList_Icon.EventShopCheckList_Icon_C.SetSelectNum
// 0x0028 (0x0028 - 0x0000)
struct EventShopCheckList_Icon_C_SetSelectNum final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63D6[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopCheckList_Icon_C_SetSelectNum) == 0x000008, "Wrong alignment on EventShopCheckList_Icon_C_SetSelectNum");
static_assert(sizeof(EventShopCheckList_Icon_C_SetSelectNum) == 0x000028, "Wrong size on EventShopCheckList_Icon_C_SetSelectNum");
static_assert(offsetof(EventShopCheckList_Icon_C_SetSelectNum, Num) == 0x000000, "Member 'EventShopCheckList_Icon_C_SetSelectNum::Num' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Icon_C_SetSelectNum, Temp_bool_Variable) == 0x000004, "Member 'EventShopCheckList_Icon_C_SetSelectNum::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Icon_C_SetSelectNum, CallFunc_Greater_IntInt_ReturnValue) == 0x000005, "Member 'EventShopCheckList_Icon_C_SetSelectNum::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Icon_C_SetSelectNum, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'EventShopCheckList_Icon_C_SetSelectNum::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Icon_C_SetSelectNum, Temp_byte_Variable) == 0x000020, "Member 'EventShopCheckList_Icon_C_SetSelectNum::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Icon_C_SetSelectNum, Temp_byte_Variable_1) == 0x000021, "Member 'EventShopCheckList_Icon_C_SetSelectNum::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Icon_C_SetSelectNum, K2Node_Select_Default) == 0x000022, "Member 'EventShopCheckList_Icon_C_SetSelectNum::K2Node_Select_Default' has a wrong offset!");

// Function EventShopCheckList_Icon.EventShopCheckList_Icon_C.SetRewardIcon
// 0x0010 (0x0010 - 0x0000)
struct EventShopCheckList_Icon_C_SetRewardIcon final
{
public:
	ESBRewardItemType                             InRewardType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63D7[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InId;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InAmount;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InAmountMin;                                       // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopCheckList_Icon_C_SetRewardIcon) == 0x000004, "Wrong alignment on EventShopCheckList_Icon_C_SetRewardIcon");
static_assert(sizeof(EventShopCheckList_Icon_C_SetRewardIcon) == 0x000010, "Wrong size on EventShopCheckList_Icon_C_SetRewardIcon");
static_assert(offsetof(EventShopCheckList_Icon_C_SetRewardIcon, InRewardType) == 0x000000, "Member 'EventShopCheckList_Icon_C_SetRewardIcon::InRewardType' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Icon_C_SetRewardIcon, InId) == 0x000004, "Member 'EventShopCheckList_Icon_C_SetRewardIcon::InId' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Icon_C_SetRewardIcon, InAmount) == 0x000008, "Member 'EventShopCheckList_Icon_C_SetRewardIcon::InAmount' has a wrong offset!");
static_assert(offsetof(EventShopCheckList_Icon_C_SetRewardIcon, InAmountMin) == 0x00000C, "Member 'EventShopCheckList_Icon_C_SetRewardIcon::InAmountMin' has a wrong offset!");

}

