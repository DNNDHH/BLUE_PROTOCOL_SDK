#pragma once

 

// Package: MyChara_AbilityLargeIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyChara_AbilityLargeIcon.MyChara_AbilityLargeIcon_C
// 0x0028 (0x02A0 - 0x0278)
class UMyChara_AbilityLargeIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 AbilityIcon;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AbilityIconBg;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                            CachedToolTipWidget;                               // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillId;                                           // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLevel;                                        // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MyChara_AbilityLargeIcon(int32 EntryPoint);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SetAbility(int32 InSkillId, int32 InSkillLevel, ESBClassType InClassType, bool InIsInformationHidden);
	void SetIconTexture(class UTexture2D* InTexture);
	void CreateTooltip(bool InNotUseTooltip);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyChara_AbilityLargeIcon_C">();
	}
	static class UMyChara_AbilityLargeIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyChara_AbilityLargeIcon_C>();
	}
};
static_assert(alignof(UMyChara_AbilityLargeIcon_C) == 0x000008, "Wrong alignment on UMyChara_AbilityLargeIcon_C");
static_assert(sizeof(UMyChara_AbilityLargeIcon_C) == 0x0002A0, "Wrong size on UMyChara_AbilityLargeIcon_C");
static_assert(offsetof(UMyChara_AbilityLargeIcon_C, UberGraphFrame) == 0x000278, "Member 'UMyChara_AbilityLargeIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyChara_AbilityLargeIcon_C, AbilityIcon) == 0x000280, "Member 'UMyChara_AbilityLargeIcon_C::AbilityIcon' has a wrong offset!");
static_assert(offsetof(UMyChara_AbilityLargeIcon_C, AbilityIconBg) == 0x000288, "Member 'UMyChara_AbilityLargeIcon_C::AbilityIconBg' has a wrong offset!");
static_assert(offsetof(UMyChara_AbilityLargeIcon_C, CachedToolTipWidget) == 0x000290, "Member 'UMyChara_AbilityLargeIcon_C::CachedToolTipWidget' has a wrong offset!");
static_assert(offsetof(UMyChara_AbilityLargeIcon_C, SkillId) == 0x000298, "Member 'UMyChara_AbilityLargeIcon_C::SkillId' has a wrong offset!");
static_assert(offsetof(UMyChara_AbilityLargeIcon_C, SkillLevel) == 0x00029C, "Member 'UMyChara_AbilityLargeIcon_C::SkillLevel' has a wrong offset!");

}

