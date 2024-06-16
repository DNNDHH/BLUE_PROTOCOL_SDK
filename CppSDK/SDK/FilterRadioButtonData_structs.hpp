#pragma once

 

// Package: FilterRadioButtonData

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct FilterRadioButtonData.FilterRadioButtonData
// 0x0030 (0x0030 - 0x0000)
struct FFilterRadioButtonData final
{
public:
	bool                                          DefaultCheck_1_F9200B94439FA30BFC5A2D8241D0F371;   // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_975D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TextId_4_22F1456447A5EEE93CAF1A8C7B991348;         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NameTextId_14_B2ADB58F4CF6B9534F1381881FEE5CC2;    // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Text_7_19CCB28245FA02243D43A5B2608601CC;           // 0x0010(0x0018)(Edit, BlueprintVisible)
	class UTexture2D*                             Texture_11_C8A74A704CD8B0CDCD003491492E2E86;       // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FFilterRadioButtonData) == 0x000008, "Wrong alignment on FFilterRadioButtonData");
static_assert(sizeof(FFilterRadioButtonData) == 0x000030, "Wrong size on FFilterRadioButtonData");
static_assert(offsetof(FFilterRadioButtonData, DefaultCheck_1_F9200B94439FA30BFC5A2D8241D0F371) == 0x000000, "Member 'FFilterRadioButtonData::DefaultCheck_1_F9200B94439FA30BFC5A2D8241D0F371' has a wrong offset!");
static_assert(offsetof(FFilterRadioButtonData, TextId_4_22F1456447A5EEE93CAF1A8C7B991348) == 0x000004, "Member 'FFilterRadioButtonData::TextId_4_22F1456447A5EEE93CAF1A8C7B991348' has a wrong offset!");
static_assert(offsetof(FFilterRadioButtonData, NameTextId_14_B2ADB58F4CF6B9534F1381881FEE5CC2) == 0x000008, "Member 'FFilterRadioButtonData::NameTextId_14_B2ADB58F4CF6B9534F1381881FEE5CC2' has a wrong offset!");
static_assert(offsetof(FFilterRadioButtonData, Text_7_19CCB28245FA02243D43A5B2608601CC) == 0x000010, "Member 'FFilterRadioButtonData::Text_7_19CCB28245FA02243D43A5B2608601CC' has a wrong offset!");
static_assert(offsetof(FFilterRadioButtonData, Texture_11_C8A74A704CD8B0CDCD003491492E2E86) == 0x000028, "Member 'FFilterRadioButtonData::Texture_11_C8A74A704CD8B0CDCD003491492E2E86' has a wrong offset!");

}

