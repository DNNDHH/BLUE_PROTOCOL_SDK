#pragma once

 

// Package: AbilityInfoDescView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AbilityInfoDescView.AbilityInfoDescView_C
// 0x0148 (0x03C0 - 0x0278)
class UAbilityInfoDescView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CvItem;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImagineAbilityInfoView_C*              ImagineAbilityInfoView;                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgHoverd;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgSelected;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           Info;                                              // 0x02A0(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bDisableMouseOver;                                 // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_AbilityInfoDescView(int32 EntryPoint);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void Construct();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
	void SetAbility(const struct FOwnItemInfo& Param_Info);
	void GetAbility(struct FOwnItemInfo* Param_Info);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AbilityInfoDescView_C">();
	}
	static class UAbilityInfoDescView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbilityInfoDescView_C>();
	}
};
static_assert(alignof(UAbilityInfoDescView_C) == 0x000008, "Wrong alignment on UAbilityInfoDescView_C");
static_assert(sizeof(UAbilityInfoDescView_C) == 0x0003C0, "Wrong size on UAbilityInfoDescView_C");
static_assert(offsetof(UAbilityInfoDescView_C, UberGraphFrame) == 0x000278, "Member 'UAbilityInfoDescView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAbilityInfoDescView_C, CvItem) == 0x000280, "Member 'UAbilityInfoDescView_C::CvItem' has a wrong offset!");
static_assert(offsetof(UAbilityInfoDescView_C, ImagineAbilityInfoView) == 0x000288, "Member 'UAbilityInfoDescView_C::ImagineAbilityInfoView' has a wrong offset!");
static_assert(offsetof(UAbilityInfoDescView_C, ImgHoverd) == 0x000290, "Member 'UAbilityInfoDescView_C::ImgHoverd' has a wrong offset!");
static_assert(offsetof(UAbilityInfoDescView_C, ImgSelected) == 0x000298, "Member 'UAbilityInfoDescView_C::ImgSelected' has a wrong offset!");
static_assert(offsetof(UAbilityInfoDescView_C, Info) == 0x0002A0, "Member 'UAbilityInfoDescView_C::Info' has a wrong offset!");
static_assert(offsetof(UAbilityInfoDescView_C, bDisableMouseOver) == 0x0003B8, "Member 'UAbilityInfoDescView_C::bDisableMouseOver' has a wrong offset!");

}

