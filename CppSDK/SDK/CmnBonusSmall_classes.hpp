#pragma once

 

// Package: CmnBonusSmall

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CmnBonusCommon_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnBonusSmall.CmnBonusSmall_C
// 0x0010 (0x0290 - 0x0280)
class UCmnBonusSmall_C final : public UCmnBonusCommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_RewardBoostTooltip_C*              RewardTooltip;                                     // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CmnBonusSmall(int32 EntryPoint);
	void UpdateVisibilityByMasterImagineRecepi(const struct FMasterImagineRecepi& MasterImagineRecepi);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnBonusSmall_C">();
	}
	static class UCmnBonusSmall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnBonusSmall_C>();
	}
};
static_assert(alignof(UCmnBonusSmall_C) == 0x000008, "Wrong alignment on UCmnBonusSmall_C");
static_assert(sizeof(UCmnBonusSmall_C) == 0x000290, "Wrong size on UCmnBonusSmall_C");
static_assert(offsetof(UCmnBonusSmall_C, UberGraphFrame) == 0x000280, "Member 'UCmnBonusSmall_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnBonusSmall_C, RewardTooltip) == 0x000288, "Member 'UCmnBonusSmall_C::RewardTooltip' has a wrong offset!");

}

