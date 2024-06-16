#pragma once

 

// Package: MyCharaMenu_TacticalSkillLargeIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_TacticalSkillLargeIcon.MyCharaMenu_TacticalSkillLargeIcon_C
// 0x0100 (0x0378 - 0x0278)
class UMyCharaMenu_TacticalSkillLargeIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ElementIcon;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TacticalSkillIcon;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TacticalSkillIconBg;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           TacticalSkillIconGrp;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TacticalSkillIconNotEnableBg;                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TacticalSkillIconTypeBg;                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                            CachedToolTipWidget;                               // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillId;                                           // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLevel;                                        // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnabled;                                         // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83C9[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<ESBSkillIconBgType, class UTexture2D*>   IconBgImageList;                                   // 0x02C8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<ESBSkillElementIconType, class UTexture2D*> ElementIconList;                                   // 0x0318(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsHoverEnabled;                                    // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83CA[0x3];                                     // 0x0369(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         EquipSkillId;                                      // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInformationHidden;                               // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_MyCharaMenu_TacticalSkillLargeIcon(int32 EntryPoint);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SetSKill(int32 InSkillId, int32 InSkillLevel, bool InIsInformationHidden);
	void CreateTooltip(bool InNotUseTooltip);
	void SetIconTexture(class UTexture2D* InTexture);
	void SetIsIconEnabled(bool InIsEnabled);
	void SetIsHoverEnabled(bool InIsEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_TacticalSkillLargeIcon_C">();
	}
	static class UMyCharaMenu_TacticalSkillLargeIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_TacticalSkillLargeIcon_C>();
	}
};
static_assert(alignof(UMyCharaMenu_TacticalSkillLargeIcon_C) == 0x000008, "Wrong alignment on UMyCharaMenu_TacticalSkillLargeIcon_C");
static_assert(sizeof(UMyCharaMenu_TacticalSkillLargeIcon_C) == 0x000378, "Wrong size on UMyCharaMenu_TacticalSkillLargeIcon_C");
static_assert(offsetof(UMyCharaMenu_TacticalSkillLargeIcon_C, UberGraphFrame) == 0x000278, "Member 'UMyCharaMenu_TacticalSkillLargeIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_TacticalSkillLargeIcon_C, ElementIcon) == 0x000280, "Member 'UMyCharaMenu_TacticalSkillLargeIcon_C::ElementIcon' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_TacticalSkillLargeIcon_C, TacticalSkillIcon) == 0x000288, "Member 'UMyCharaMenu_TacticalSkillLargeIcon_C::TacticalSkillIcon' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_TacticalSkillLargeIcon_C, TacticalSkillIconBg) == 0x000290, "Member 'UMyCharaMenu_TacticalSkillLargeIcon_C::TacticalSkillIconBg' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_TacticalSkillLargeIcon_C, TacticalSkillIconGrp) == 0x000298, "Member 'UMyCharaMenu_TacticalSkillLargeIcon_C::TacticalSkillIconGrp' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_TacticalSkillLargeIcon_C, TacticalSkillIconNotEnableBg) == 0x0002A0, "Member 'UMyCharaMenu_TacticalSkillLargeIcon_C::TacticalSkillIconNotEnableBg' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_TacticalSkillLargeIcon_C, TacticalSkillIconTypeBg) == 0x0002A8, "Member 'UMyCharaMenu_TacticalSkillLargeIcon_C::TacticalSkillIconTypeBg' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_TacticalSkillLargeIcon_C, CachedToolTipWidget) == 0x0002B0, "Member 'UMyCharaMenu_TacticalSkillLargeIcon_C::CachedToolTipWidget' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_TacticalSkillLargeIcon_C, SkillId) == 0x0002B8, "Member 'UMyCharaMenu_TacticalSkillLargeIcon_C::SkillId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_TacticalSkillLargeIcon_C, SkillLevel) == 0x0002BC, "Member 'UMyCharaMenu_TacticalSkillLargeIcon_C::SkillLevel' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_TacticalSkillLargeIcon_C, IsEnabled) == 0x0002C0, "Member 'UMyCharaMenu_TacticalSkillLargeIcon_C::IsEnabled' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_TacticalSkillLargeIcon_C, IconBgImageList) == 0x0002C8, "Member 'UMyCharaMenu_TacticalSkillLargeIcon_C::IconBgImageList' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_TacticalSkillLargeIcon_C, ElementIconList) == 0x000318, "Member 'UMyCharaMenu_TacticalSkillLargeIcon_C::ElementIconList' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_TacticalSkillLargeIcon_C, IsHoverEnabled) == 0x000368, "Member 'UMyCharaMenu_TacticalSkillLargeIcon_C::IsHoverEnabled' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_TacticalSkillLargeIcon_C, EquipSkillId) == 0x00036C, "Member 'UMyCharaMenu_TacticalSkillLargeIcon_C::EquipSkillId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_TacticalSkillLargeIcon_C, IsInformationHidden) == 0x000370, "Member 'UMyCharaMenu_TacticalSkillLargeIcon_C::IsInformationHidden' has a wrong offset!");

}

