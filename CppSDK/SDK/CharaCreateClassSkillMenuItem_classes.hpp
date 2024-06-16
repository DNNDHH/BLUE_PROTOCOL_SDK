#pragma once

 

// Package: CharaCreateClassSkillMenuItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C
// 0x0068 (0x02E0 - 0x0278)
class UCharaCreateClassSkillMenuItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn;                                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayIcon;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ScaleBox_SkillName;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SelectedBG;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SkillNameLabel;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelected;                                        // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPressed;                                         // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnReleased;                                        // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ESkillActionPosition                          SkillPosition;                                     // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCheckCanStart;                                    // 0x02D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnSelected__DelegateSignature(class UCharaCreateClassSkillMenuItem_C* InSelectedItem);
	void OnPressed__DelegateSignature(class UCharaCreateClassSkillMenuItem_C* Sender);
	void OnReleased__DelegateSignature(class UCharaCreateClassSkillMenuItem_C* Sender);
	void ExecuteUbergraph_CharaCreateClassSkillMenuItem(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Btn_K2Node_ComponentBoundEvent_140_OnButtonPressedEvent__DelegateSignature();
	void SetSkillNameText(const class FText& InText);
	void SetSelected(bool IsSelected);
	void SetPlayIconVisibility(bool Param_IsVisible);
	void SetSkillNamePadding(const struct FMargin& InPadding);
	void SetSkillDataAtPhotoMode(const class FText& InText, ESkillActionPosition InPosition);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharaCreateClassSkillMenuItem_C">();
	}
	static class UCharaCreateClassSkillMenuItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharaCreateClassSkillMenuItem_C>();
	}
};
static_assert(alignof(UCharaCreateClassSkillMenuItem_C) == 0x000008, "Wrong alignment on UCharaCreateClassSkillMenuItem_C");
static_assert(sizeof(UCharaCreateClassSkillMenuItem_C) == 0x0002E0, "Wrong size on UCharaCreateClassSkillMenuItem_C");
static_assert(offsetof(UCharaCreateClassSkillMenuItem_C, UberGraphFrame) == 0x000278, "Member 'UCharaCreateClassSkillMenuItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCharaCreateClassSkillMenuItem_C, Btn) == 0x000280, "Member 'UCharaCreateClassSkillMenuItem_C::Btn' has a wrong offset!");
static_assert(offsetof(UCharaCreateClassSkillMenuItem_C, PlayIcon) == 0x000288, "Member 'UCharaCreateClassSkillMenuItem_C::PlayIcon' has a wrong offset!");
static_assert(offsetof(UCharaCreateClassSkillMenuItem_C, ScaleBox_SkillName) == 0x000290, "Member 'UCharaCreateClassSkillMenuItem_C::ScaleBox_SkillName' has a wrong offset!");
static_assert(offsetof(UCharaCreateClassSkillMenuItem_C, SelectedBG) == 0x000298, "Member 'UCharaCreateClassSkillMenuItem_C::SelectedBG' has a wrong offset!");
static_assert(offsetof(UCharaCreateClassSkillMenuItem_C, SkillNameLabel) == 0x0002A0, "Member 'UCharaCreateClassSkillMenuItem_C::SkillNameLabel' has a wrong offset!");
static_assert(offsetof(UCharaCreateClassSkillMenuItem_C, OnSelected) == 0x0002A8, "Member 'UCharaCreateClassSkillMenuItem_C::OnSelected' has a wrong offset!");
static_assert(offsetof(UCharaCreateClassSkillMenuItem_C, OnPressed) == 0x0002B8, "Member 'UCharaCreateClassSkillMenuItem_C::OnPressed' has a wrong offset!");
static_assert(offsetof(UCharaCreateClassSkillMenuItem_C, OnReleased) == 0x0002C8, "Member 'UCharaCreateClassSkillMenuItem_C::OnReleased' has a wrong offset!");
static_assert(offsetof(UCharaCreateClassSkillMenuItem_C, SkillPosition) == 0x0002D8, "Member 'UCharaCreateClassSkillMenuItem_C::SkillPosition' has a wrong offset!");
static_assert(offsetof(UCharaCreateClassSkillMenuItem_C, bCheckCanStart) == 0x0002D9, "Member 'UCharaCreateClassSkillMenuItem_C::bCheckCanStart' has a wrong offset!");

}

