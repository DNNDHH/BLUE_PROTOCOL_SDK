#pragma once

 

// Package: ST_StunReaction_LevelDiff

#include "Basic.hpp"

#include "E_DamageReaction_structs.hpp"


namespace SDK
{

// UserDefinedStruct ST_StunReaction_LevelDiff.ST_StunReaction_LevelDiff
// 0x0030 (0x0030 - 0x0000)
struct FST_StunReaction_LevelDiff final
{
public:
	TArray<E_DamageReaction>                      Weak_60_85D7DBD7416E8C5C65A382829F9E3A65;          // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<E_DamageReaction>                      Default_59_E9330CC748110AC5F6938690D457264A;       // 0x0010(0x0010)(Edit, BlueprintVisible)
	TArray<E_DamageReaction>                      Strong_61_2F591028420BC240BE4CF695B25A52C3;        // 0x0020(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FST_StunReaction_LevelDiff) == 0x000008, "Wrong alignment on FST_StunReaction_LevelDiff");
static_assert(sizeof(FST_StunReaction_LevelDiff) == 0x000030, "Wrong size on FST_StunReaction_LevelDiff");
static_assert(offsetof(FST_StunReaction_LevelDiff, Weak_60_85D7DBD7416E8C5C65A382829F9E3A65) == 0x000000, "Member 'FST_StunReaction_LevelDiff::Weak_60_85D7DBD7416E8C5C65A382829F9E3A65' has a wrong offset!");
static_assert(offsetof(FST_StunReaction_LevelDiff, Default_59_E9330CC748110AC5F6938690D457264A) == 0x000010, "Member 'FST_StunReaction_LevelDiff::Default_59_E9330CC748110AC5F6938690D457264A' has a wrong offset!");
static_assert(offsetof(FST_StunReaction_LevelDiff, Strong_61_2F591028420BC240BE4CF695B25A52C3) == 0x000020, "Member 'FST_StunReaction_LevelDiff::Strong_61_2F591028420BC240BE4CF695B25A52C3' has a wrong offset!");

}

