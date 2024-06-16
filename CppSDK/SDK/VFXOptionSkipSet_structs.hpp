#pragma once

 

// Package: VFXOptionSkipSet

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK
{

// UserDefinedStruct VFXOptionSkipSet.VFXOptionSkipSet
// 0x0002 (0x0002 - 0x0000)
struct FVFXOptionSkipSet final
{
public:
	ESBBattleEffectVisibleCategory                Category_4_F3570D214CA5EB360994548856D3BCD9;       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBBattleEffectVisibleType                    Type_5_C8B3F2BB4DF8FE533A4386BBAA98C140;           // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FVFXOptionSkipSet) == 0x000001, "Wrong alignment on FVFXOptionSkipSet");
static_assert(sizeof(FVFXOptionSkipSet) == 0x000002, "Wrong size on FVFXOptionSkipSet");
static_assert(offsetof(FVFXOptionSkipSet, Category_4_F3570D214CA5EB360994548856D3BCD9) == 0x000000, "Member 'FVFXOptionSkipSet::Category_4_F3570D214CA5EB360994548856D3BCD9' has a wrong offset!");
static_assert(offsetof(FVFXOptionSkipSet, Type_5_C8B3F2BB4DF8FE533A4386BBAA98C140) == 0x000001, "Member 'FVFXOptionSkipSet::Type_5_C8B3F2BB4DF8FE533A4386BBAA98C140' has a wrong offset!");

}

