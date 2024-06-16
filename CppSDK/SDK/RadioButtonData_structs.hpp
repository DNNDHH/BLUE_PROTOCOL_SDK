#pragma once

 

// Package: RadioButtonData

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct RadioButtonData.RadioButtonData
// 0x0020 (0x0020 - 0x0000)
struct FRadioButtonData final
{
public:
	bool                                          DefaultCheck_1_F9200B94439FA30BFC5A2D8241D0F371;   // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6692[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TextId_4_22F1456447A5EEE93CAF1A8C7B991348;         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Text_7_19CCB28245FA02243D43A5B2608601CC;           // 0x0008(0x0018)(Edit, BlueprintVisible)
};
static_assert(alignof(FRadioButtonData) == 0x000008, "Wrong alignment on FRadioButtonData");
static_assert(sizeof(FRadioButtonData) == 0x000020, "Wrong size on FRadioButtonData");
static_assert(offsetof(FRadioButtonData, DefaultCheck_1_F9200B94439FA30BFC5A2D8241D0F371) == 0x000000, "Member 'FRadioButtonData::DefaultCheck_1_F9200B94439FA30BFC5A2D8241D0F371' has a wrong offset!");
static_assert(offsetof(FRadioButtonData, TextId_4_22F1456447A5EEE93CAF1A8C7B991348) == 0x000004, "Member 'FRadioButtonData::TextId_4_22F1456447A5EEE93CAF1A8C7B991348' has a wrong offset!");
static_assert(offsetof(FRadioButtonData, Text_7_19CCB28245FA02243D43A5B2608601CC) == 0x000008, "Member 'FRadioButtonData::Text_7_19CCB28245FA02243D43A5B2608601CC' has a wrong offset!");

}

