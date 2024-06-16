#pragma once

 

// Package: FreeBuffTypeToText

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK
{

// UserDefinedStruct FreeBuffTypeToText.FreeBuffTypeToText
// 0x0008 (0x0008 - 0x0000)
struct FFreeBuffTypeToText final
{
public:
	ESBFreeBuffPointType                          Type_4_C9D4A27D42D1962CCCCA09A6B17E3C66;           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_791E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TextId_5_B894578444B2CF8E72FDFFA4EBCC13F7;         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FFreeBuffTypeToText) == 0x000004, "Wrong alignment on FFreeBuffTypeToText");
static_assert(sizeof(FFreeBuffTypeToText) == 0x000008, "Wrong size on FFreeBuffTypeToText");
static_assert(offsetof(FFreeBuffTypeToText, Type_4_C9D4A27D42D1962CCCCA09A6B17E3C66) == 0x000000, "Member 'FFreeBuffTypeToText::Type_4_C9D4A27D42D1962CCCCA09A6B17E3C66' has a wrong offset!");
static_assert(offsetof(FFreeBuffTypeToText, TextId_5_B894578444B2CF8E72FDFFA4EBCC13F7) == 0x000004, "Member 'FFreeBuffTypeToText::TextId_5_B894578444B2CF8E72FDFFA4EBCC13F7' has a wrong offset!");

}

