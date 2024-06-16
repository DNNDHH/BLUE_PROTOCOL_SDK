#pragma once

 

// Package: RewardIconItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RewardIconItem.RewardIconItem_C
// 0x0038 (0x02B0 - 0x0278)
class URewardIconItem_C final : public UUserWidget
{
public:
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Ribbon;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Ribbon_Ranking;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Bg;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBMasterReward                        MasterReward;                                      // 0x0298(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void SetRewardData(const struct FSBMasterReward& InMasterReward, int32 SwitchId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RewardIconItem_C">();
	}
	static class URewardIconItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URewardIconItem_C>();
	}
};
static_assert(alignof(URewardIconItem_C) == 0x000008, "Wrong alignment on URewardIconItem_C");
static_assert(sizeof(URewardIconItem_C) == 0x0002B0, "Wrong size on URewardIconItem_C");
static_assert(offsetof(URewardIconItem_C, CommonIcon) == 0x000278, "Member 'URewardIconItem_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(URewardIconItem_C, Ribbon) == 0x000280, "Member 'URewardIconItem_C::Ribbon' has a wrong offset!");
static_assert(offsetof(URewardIconItem_C, Ribbon_Ranking) == 0x000288, "Member 'URewardIconItem_C::Ribbon_Ranking' has a wrong offset!");
static_assert(offsetof(URewardIconItem_C, WidgetSwitcher_Bg) == 0x000290, "Member 'URewardIconItem_C::WidgetSwitcher_Bg' has a wrong offset!");
static_assert(offsetof(URewardIconItem_C, MasterReward) == 0x000298, "Member 'URewardIconItem_C::MasterReward' has a wrong offset!");

}

