#pragma once

 

// Package: ImagineAbilityInfoView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImagineAbilityInfoView.ImagineAbilityInfoView_C
// 0x0048 (0x02C0 - 0x0278)
class UImagineAbilityInfoView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             AbilityDescTxt;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base01;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base02;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgUpgrade;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Ability;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBox_EfficacyInfoItem;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ListItemNumMax;                                    // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AbilityEffectId;                                   // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TitleWidth;                                        // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ImagineAbilityInfoView(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void CreateEfficacyInfoItemList();
	void SetupAbilityInfo(int32 InAbilityEffectId);
	void GetAbilityPartsValueText(int32 InValue, class FText* OutText);
	void ShowChange(bool bShow);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImagineAbilityInfoView_C">();
	}
	static class UImagineAbilityInfoView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagineAbilityInfoView_C>();
	}
};
static_assert(alignof(UImagineAbilityInfoView_C) == 0x000008, "Wrong alignment on UImagineAbilityInfoView_C");
static_assert(sizeof(UImagineAbilityInfoView_C) == 0x0002C0, "Wrong size on UImagineAbilityInfoView_C");
static_assert(offsetof(UImagineAbilityInfoView_C, UberGraphFrame) == 0x000278, "Member 'UImagineAbilityInfoView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImagineAbilityInfoView_C, AbilityDescTxt) == 0x000280, "Member 'UImagineAbilityInfoView_C::AbilityDescTxt' has a wrong offset!");
static_assert(offsetof(UImagineAbilityInfoView_C, Base01) == 0x000288, "Member 'UImagineAbilityInfoView_C::Base01' has a wrong offset!");
static_assert(offsetof(UImagineAbilityInfoView_C, Base02) == 0x000290, "Member 'UImagineAbilityInfoView_C::Base02' has a wrong offset!");
static_assert(offsetof(UImagineAbilityInfoView_C, ImgUpgrade) == 0x000298, "Member 'UImagineAbilityInfoView_C::ImgUpgrade' has a wrong offset!");
static_assert(offsetof(UImagineAbilityInfoView_C, Overlay_Ability) == 0x0002A0, "Member 'UImagineAbilityInfoView_C::Overlay_Ability' has a wrong offset!");
static_assert(offsetof(UImagineAbilityInfoView_C, VBox_EfficacyInfoItem) == 0x0002A8, "Member 'UImagineAbilityInfoView_C::VBox_EfficacyInfoItem' has a wrong offset!");
static_assert(offsetof(UImagineAbilityInfoView_C, ListItemNumMax) == 0x0002B0, "Member 'UImagineAbilityInfoView_C::ListItemNumMax' has a wrong offset!");
static_assert(offsetof(UImagineAbilityInfoView_C, AbilityEffectId) == 0x0002B4, "Member 'UImagineAbilityInfoView_C::AbilityEffectId' has a wrong offset!");
static_assert(offsetof(UImagineAbilityInfoView_C, TitleWidth) == 0x0002B8, "Member 'UImagineAbilityInfoView_C::TitleWidth' has a wrong offset!");

}

