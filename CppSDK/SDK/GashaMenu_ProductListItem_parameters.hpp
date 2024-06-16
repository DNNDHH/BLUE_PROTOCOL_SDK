#pragma once

 

// Package: GashaMenu_ProductListItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GashaMenu_ProductListItem.GashaMenu_ProductListItem_C.SetInfo
// 0x00C0 (0x00C0 - 0x0000)
struct GashaMenu_ProductListItem_C_SetInfo final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             RewardItemType;                                    // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E18[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Amount;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rate;                                              // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E19[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0018(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0080(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00A8(0x0018)()
};
static_assert(alignof(GashaMenu_ProductListItem_C_SetInfo) == 0x000008, "Wrong alignment on GashaMenu_ProductListItem_C_SetInfo");
static_assert(sizeof(GashaMenu_ProductListItem_C_SetInfo) == 0x0000C0, "Wrong size on GashaMenu_ProductListItem_C_SetInfo");
static_assert(offsetof(GashaMenu_ProductListItem_C_SetInfo, ItemId) == 0x000000, "Member 'GashaMenu_ProductListItem_C_SetInfo::ItemId' has a wrong offset!");
static_assert(offsetof(GashaMenu_ProductListItem_C_SetInfo, RewardItemType) == 0x000004, "Member 'GashaMenu_ProductListItem_C_SetInfo::RewardItemType' has a wrong offset!");
static_assert(offsetof(GashaMenu_ProductListItem_C_SetInfo, Amount) == 0x000008, "Member 'GashaMenu_ProductListItem_C_SetInfo::Amount' has a wrong offset!");
static_assert(offsetof(GashaMenu_ProductListItem_C_SetInfo, Rate) == 0x00000C, "Member 'GashaMenu_ProductListItem_C_SetInfo::Rate' has a wrong offset!");
static_assert(offsetof(GashaMenu_ProductListItem_C_SetInfo, CallFunc_Add_FloatFloat_ReturnValue) == 0x000010, "Member 'GashaMenu_ProductListItem_C_SetInfo::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaMenu_ProductListItem_C_SetInfo, CallFunc_Conv_FloatToText_ReturnValue) == 0x000018, "Member 'GashaMenu_ProductListItem_C_SetInfo::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaMenu_ProductListItem_C_SetInfo, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000030, "Member 'GashaMenu_ProductListItem_C_SetInfo::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaMenu_ProductListItem_C_SetInfo, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'GashaMenu_ProductListItem_C_SetInfo::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(GashaMenu_ProductListItem_C_SetInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000080, "Member 'GashaMenu_ProductListItem_C_SetInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaMenu_ProductListItem_C_SetInfo, K2Node_MakeArray_Array) == 0x000098, "Member 'GashaMenu_ProductListItem_C_SetInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GashaMenu_ProductListItem_C_SetInfo, CallFunc_Format_ReturnValue) == 0x0000A8, "Member 'GashaMenu_ProductListItem_C_SetInfo::CallFunc_Format_ReturnValue' has a wrong offset!");

}

