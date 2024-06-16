#pragma once

 

// Package: ST_DHCStatus

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ST_DHCStatus.ST_DHCStatus
// 0x0010 (0x0010 - 0x0000)
struct FST_DHCStatus final
{
public:
	class APlayerState*                           PlayerState_15_B21BC03F4B9ECA04010DD6BB713F8442;   // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Damage_9_CE7E89FB4C4ADD228750DC9137FE97F0;         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FST_DHCStatus) == 0x000008, "Wrong alignment on FST_DHCStatus");
static_assert(sizeof(FST_DHCStatus) == 0x000010, "Wrong size on FST_DHCStatus");
static_assert(offsetof(FST_DHCStatus, PlayerState_15_B21BC03F4B9ECA04010DD6BB713F8442) == 0x000000, "Member 'FST_DHCStatus::PlayerState_15_B21BC03F4B9ECA04010DD6BB713F8442' has a wrong offset!");
static_assert(offsetof(FST_DHCStatus, Damage_9_CE7E89FB4C4ADD228750DC9137FE97F0) == 0x000008, "Member 'FST_DHCStatus::Damage_9_CE7E89FB4C4ADD228750DC9137FE97F0' has a wrong offset!");

}

