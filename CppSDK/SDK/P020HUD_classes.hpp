#pragma once

 

// Package: P020HUD

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass P020HUD.P020HUD_C
// 0x0050 (0x02E8 - 0x0298)
class UP020HUD_C final : public USBClassHUDP020
{
public:
	class UWidgetAnimation*                       AnimInOut;                                         // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CPVisibleSetting;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBRoot;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UP020_CountIcon_Parts_C*                Icon1;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UP020_CountIcon_Parts_C*                Icon2;                                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UP020_CountIcon_Parts_C*                Icon3;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UP020_CountIcon_Parts_C*                Icon4;                                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<ESkillActionPosition>                  SkillPositions;                                    // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void GetAttackUpRank(int32* Rank);
	void PlayAnimForwardInOut();
	void PlayAnimReverseInOut();
	void OnBind();
	void OnUnbind();
	void OnInitialize();
	void OnTerminate();
	void OnSetEditMode(bool InIsEdit);
	void OnChangeVisibleSetting(bool InIsVisibleSetting);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"P020HUD_C">();
	}
	static class UP020HUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UP020HUD_C>();
	}
};
static_assert(alignof(UP020HUD_C) == 0x000008, "Wrong alignment on UP020HUD_C");
static_assert(sizeof(UP020HUD_C) == 0x0002E8, "Wrong size on UP020HUD_C");
static_assert(offsetof(UP020HUD_C, AnimInOut) == 0x000298, "Member 'UP020HUD_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UP020HUD_C, CPVisibleSetting) == 0x0002A0, "Member 'UP020HUD_C::CPVisibleSetting' has a wrong offset!");
static_assert(offsetof(UP020HUD_C, HBRoot) == 0x0002A8, "Member 'UP020HUD_C::HBRoot' has a wrong offset!");
static_assert(offsetof(UP020HUD_C, Icon1) == 0x0002B0, "Member 'UP020HUD_C::Icon1' has a wrong offset!");
static_assert(offsetof(UP020HUD_C, Icon2) == 0x0002B8, "Member 'UP020HUD_C::Icon2' has a wrong offset!");
static_assert(offsetof(UP020HUD_C, Icon3) == 0x0002C0, "Member 'UP020HUD_C::Icon3' has a wrong offset!");
static_assert(offsetof(UP020HUD_C, Icon4) == 0x0002C8, "Member 'UP020HUD_C::Icon4' has a wrong offset!");
static_assert(offsetof(UP020HUD_C, WidgetSwitcher) == 0x0002D0, "Member 'UP020HUD_C::WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UP020HUD_C, SkillPositions) == 0x0002D8, "Member 'UP020HUD_C::SkillPositions' has a wrong offset!");

}

