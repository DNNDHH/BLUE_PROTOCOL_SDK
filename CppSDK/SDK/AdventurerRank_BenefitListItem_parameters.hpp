#pragma once

 

// Package: AdventurerRank_BenefitListItem

#include "Basic.hpp"


namespace SDK::Params
{

// Function AdventurerRank_BenefitListItem.AdventurerRank_BenefitListItem_C.SetBenefitText
// 0x0028 (0x0028 - 0x0000)
struct AdventurerRank_BenefitListItem_C_SetBenefitText final
{
public:
	class FString                                 InText;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(AdventurerRank_BenefitListItem_C_SetBenefitText) == 0x000008, "Wrong alignment on AdventurerRank_BenefitListItem_C_SetBenefitText");
static_assert(sizeof(AdventurerRank_BenefitListItem_C_SetBenefitText) == 0x000028, "Wrong size on AdventurerRank_BenefitListItem_C_SetBenefitText");
static_assert(offsetof(AdventurerRank_BenefitListItem_C_SetBenefitText, InText) == 0x000000, "Member 'AdventurerRank_BenefitListItem_C_SetBenefitText::InText' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitListItem_C_SetBenefitText, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'AdventurerRank_BenefitListItem_C_SetBenefitText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

