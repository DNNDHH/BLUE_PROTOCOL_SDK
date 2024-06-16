#pragma once

 

// Package: CommonIconToolTipContent_Single

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetBrokenData
// 0x0028 (0x0028 - 0x0000)
struct CommonIconToolTipContent_Single_C_SetBrokenData final
{
public:
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(CommonIconToolTipContent_Single_C_SetBrokenData) == 0x000008, "Wrong alignment on CommonIconToolTipContent_Single_C_SetBrokenData");
static_assert(sizeof(CommonIconToolTipContent_Single_C_SetBrokenData) == 0x000028, "Wrong size on CommonIconToolTipContent_Single_C_SetBrokenData");
static_assert(offsetof(CommonIconToolTipContent_Single_C_SetBrokenData, CallFunc_GetTextFromAsset_ReturnValue) == 0x000000, "Member 'CommonIconToolTipContent_Single_C_SetBrokenData::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Single_C_SetBrokenData, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'CommonIconToolTipContent_Single_C_SetBrokenData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetAmount
// 0x0030 (0x0030 - 0x0000)
struct CommonIconToolTipContent_Single_C_SetAmount final
{
public:
	int32                                         InAmount;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C24[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_FormatNumberToCommaFormat_ReturnValue;    // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(CommonIconToolTipContent_Single_C_SetAmount) == 0x000008, "Wrong alignment on CommonIconToolTipContent_Single_C_SetAmount");
static_assert(sizeof(CommonIconToolTipContent_Single_C_SetAmount) == 0x000030, "Wrong size on CommonIconToolTipContent_Single_C_SetAmount");
static_assert(offsetof(CommonIconToolTipContent_Single_C_SetAmount, InAmount) == 0x000000, "Member 'CommonIconToolTipContent_Single_C_SetAmount::InAmount' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Single_C_SetAmount, CallFunc_FormatNumberToCommaFormat_ReturnValue) == 0x000008, "Member 'CommonIconToolTipContent_Single_C_SetAmount::CallFunc_FormatNumberToCommaFormat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Single_C_SetAmount, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'CommonIconToolTipContent_Single_C_SetAmount::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetEmotion
// 0x0020 (0x0020 - 0x0000)
struct CommonIconToolTipContent_Single_C_SetEmotion final
{
public:
	class FName                                   InId;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0008(0x0018)()
};
static_assert(alignof(CommonIconToolTipContent_Single_C_SetEmotion) == 0x000008, "Wrong alignment on CommonIconToolTipContent_Single_C_SetEmotion");
static_assert(sizeof(CommonIconToolTipContent_Single_C_SetEmotion) == 0x000020, "Wrong size on CommonIconToolTipContent_Single_C_SetEmotion");
static_assert(offsetof(CommonIconToolTipContent_Single_C_SetEmotion, InId) == 0x000000, "Member 'CommonIconToolTipContent_Single_C_SetEmotion::InId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Single_C_SetEmotion, CallFunc_Conv_NameToText_ReturnValue) == 0x000008, "Member 'CommonIconToolTipContent_Single_C_SetEmotion::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");

// Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetTypeOnly
// 0x0030 (0x0030 - 0x0000)
struct CommonIconToolTipContent_Single_C_SetTypeOnly final
{
public:
	ESBRewardItemType                             RewardType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C25[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetRewardItemTypeName_ReturnValue;        // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(CommonIconToolTipContent_Single_C_SetTypeOnly) == 0x000008, "Wrong alignment on CommonIconToolTipContent_Single_C_SetTypeOnly");
static_assert(sizeof(CommonIconToolTipContent_Single_C_SetTypeOnly) == 0x000030, "Wrong size on CommonIconToolTipContent_Single_C_SetTypeOnly");
static_assert(offsetof(CommonIconToolTipContent_Single_C_SetTypeOnly, RewardType) == 0x000000, "Member 'CommonIconToolTipContent_Single_C_SetTypeOnly::RewardType' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Single_C_SetTypeOnly, CallFunc_GetRewardItemTypeName_ReturnValue) == 0x000008, "Member 'CommonIconToolTipContent_Single_C_SetTypeOnly::CallFunc_GetRewardItemTypeName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Single_C_SetTypeOnly, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'CommonIconToolTipContent_Single_C_SetTypeOnly::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetText
// 0x0030 (0x0030 - 0x0000)
struct CommonIconToolTipContent_Single_C_SetText final
{
public:
	class FString                                 InText;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonIconToolTipContent_Single_C_SetText) == 0x000008, "Wrong alignment on CommonIconToolTipContent_Single_C_SetText");
static_assert(sizeof(CommonIconToolTipContent_Single_C_SetText) == 0x000030, "Wrong size on CommonIconToolTipContent_Single_C_SetText");
static_assert(offsetof(CommonIconToolTipContent_Single_C_SetText, InText) == 0x000000, "Member 'CommonIconToolTipContent_Single_C_SetText::InText' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Single_C_SetText, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'CommonIconToolTipContent_Single_C_SetText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Single_C_SetText, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'CommonIconToolTipContent_Single_C_SetText::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

