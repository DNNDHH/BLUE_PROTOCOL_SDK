#pragma once

 

// Package: ST_AestheCourseIconInfo

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ST_AestheCourseIconInfo.ST_AestheCourseIconInfo
// 0x0038 (0x0038 - 0x0000)
struct FST_AestheCourseIconInfo final
{
public:
	class FString                                 Id_8_0B770B564BEC9D131F9D0992C69D00E1;             // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Texture_9_1B39646648A025CDAC3F68A7CD5CB15C;        // 0x0010(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FST_AestheCourseIconInfo) == 0x000008, "Wrong alignment on FST_AestheCourseIconInfo");
static_assert(sizeof(FST_AestheCourseIconInfo) == 0x000038, "Wrong size on FST_AestheCourseIconInfo");
static_assert(offsetof(FST_AestheCourseIconInfo, Id_8_0B770B564BEC9D131F9D0992C69D00E1) == 0x000000, "Member 'FST_AestheCourseIconInfo::Id_8_0B770B564BEC9D131F9D0992C69D00E1' has a wrong offset!");
static_assert(offsetof(FST_AestheCourseIconInfo, Texture_9_1B39646648A025CDAC3F68A7CD5CB15C) == 0x000010, "Member 'FST_AestheCourseIconInfo::Texture_9_1B39646648A025CDAC3F68A7CD5CB15C' has a wrong offset!");

}

