#pragma once

 

// Package: ST_SkillTreeMediaTable

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ST_SkillTreeMediaTable.ST_SkillTreeMediaTable
// 0x0080 (0x0080 - 0x0000)
struct FST_SkillTreeMediaTable final
{
public:
	int32                                         SkillID_12_8E55A86B48011A3BAFEEF19C1AE55920;       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLV_13_33F5B66041ABE4A506131CAE4C370D6D;       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UMediaSource>            MediaSource_14_206511184A962D30CFFACEB8821F15F7;   // 0x0008(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Image_18_B5B11BD741D1CE3D39989C81E0CD2352;         // 0x0030(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              ImageIcon_21_B4A2F1B64462D6BD2005E98042EBADFC;     // 0x0058(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FST_SkillTreeMediaTable) == 0x000008, "Wrong alignment on FST_SkillTreeMediaTable");
static_assert(sizeof(FST_SkillTreeMediaTable) == 0x000080, "Wrong size on FST_SkillTreeMediaTable");
static_assert(offsetof(FST_SkillTreeMediaTable, SkillID_12_8E55A86B48011A3BAFEEF19C1AE55920) == 0x000000, "Member 'FST_SkillTreeMediaTable::SkillID_12_8E55A86B48011A3BAFEEF19C1AE55920' has a wrong offset!");
static_assert(offsetof(FST_SkillTreeMediaTable, SkillLV_13_33F5B66041ABE4A506131CAE4C370D6D) == 0x000004, "Member 'FST_SkillTreeMediaTable::SkillLV_13_33F5B66041ABE4A506131CAE4C370D6D' has a wrong offset!");
static_assert(offsetof(FST_SkillTreeMediaTable, MediaSource_14_206511184A962D30CFFACEB8821F15F7) == 0x000008, "Member 'FST_SkillTreeMediaTable::MediaSource_14_206511184A962D30CFFACEB8821F15F7' has a wrong offset!");
static_assert(offsetof(FST_SkillTreeMediaTable, Image_18_B5B11BD741D1CE3D39989C81E0CD2352) == 0x000030, "Member 'FST_SkillTreeMediaTable::Image_18_B5B11BD741D1CE3D39989C81E0CD2352' has a wrong offset!");
static_assert(offsetof(FST_SkillTreeMediaTable, ImageIcon_21_B4A2F1B64462D6BD2005E98042EBADFC) == 0x000058, "Member 'FST_SkillTreeMediaTable::ImageIcon_21_B4A2F1B64462D6BD2005E98042EBADFC' has a wrong offset!");

}

