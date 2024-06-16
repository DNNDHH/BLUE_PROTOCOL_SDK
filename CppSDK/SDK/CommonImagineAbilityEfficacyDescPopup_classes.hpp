#pragma once

 

// Package: CommonImagineAbilityEfficacyDescPopup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonImagineAbilityEfficacyDescPopup.CommonImagineAbilityEfficacyDescPopup_C
// 0x0068 (0x02E0 - 0x0278)
class UCommonImagineAbilityEfficacyDescPopup_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_Anchor;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose01_C*                          CloseBtn;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonEquipmentAbilityInfoDesc_C*      ImagineAbilityInfo;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_line01;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  SBButtonFullScreen_C_87;                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxForArrowDown;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxForArrowUp;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TitleTxt;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Content;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsClosing;                                        // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsArrowUp;                                        // 0x02D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_CommonImagineAbilityEfficacyDescPopup(int32 EntryPoint);
	void OnPressCancelKey();
	void SetPopupPosition(class UWidget* InAnchorWidget, bool InArrowUp);
	void BndEvt__CommonImagineAbilityEfficacyDescPopup_SBButtonFullScreen_C_87_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Destruct();
	void BndEvt__NewWidgetBlueprint222_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void Construct();
	void Setup(int32 InAbilityEffectId);
	void SetArrowVisibility(bool InIsVisible);
	void SetArrowType(bool InArrowUp);
	void SetupByUniqueId(const class FString& UniqueId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonImagineAbilityEfficacyDescPopup_C">();
	}
	static class UCommonImagineAbilityEfficacyDescPopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonImagineAbilityEfficacyDescPopup_C>();
	}
};
static_assert(alignof(UCommonImagineAbilityEfficacyDescPopup_C) == 0x000008, "Wrong alignment on UCommonImagineAbilityEfficacyDescPopup_C");
static_assert(sizeof(UCommonImagineAbilityEfficacyDescPopup_C) == 0x0002E0, "Wrong size on UCommonImagineAbilityEfficacyDescPopup_C");
static_assert(offsetof(UCommonImagineAbilityEfficacyDescPopup_C, UberGraphFrame) == 0x000278, "Member 'UCommonImagineAbilityEfficacyDescPopup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonImagineAbilityEfficacyDescPopup_C, CanvasPanel_Anchor) == 0x000280, "Member 'UCommonImagineAbilityEfficacyDescPopup_C::CanvasPanel_Anchor' has a wrong offset!");
static_assert(offsetof(UCommonImagineAbilityEfficacyDescPopup_C, CloseBtn) == 0x000288, "Member 'UCommonImagineAbilityEfficacyDescPopup_C::CloseBtn' has a wrong offset!");
static_assert(offsetof(UCommonImagineAbilityEfficacyDescPopup_C, ImagineAbilityInfo) == 0x000290, "Member 'UCommonImagineAbilityEfficacyDescPopup_C::ImagineAbilityInfo' has a wrong offset!");
static_assert(offsetof(UCommonImagineAbilityEfficacyDescPopup_C, Img_line01) == 0x000298, "Member 'UCommonImagineAbilityEfficacyDescPopup_C::Img_line01' has a wrong offset!");
static_assert(offsetof(UCommonImagineAbilityEfficacyDescPopup_C, SBButtonFullScreen_C_87) == 0x0002A0, "Member 'UCommonImagineAbilityEfficacyDescPopup_C::SBButtonFullScreen_C_87' has a wrong offset!");
static_assert(offsetof(UCommonImagineAbilityEfficacyDescPopup_C, SizeBoxForArrowDown) == 0x0002A8, "Member 'UCommonImagineAbilityEfficacyDescPopup_C::SizeBoxForArrowDown' has a wrong offset!");
static_assert(offsetof(UCommonImagineAbilityEfficacyDescPopup_C, SizeBoxForArrowUp) == 0x0002B0, "Member 'UCommonImagineAbilityEfficacyDescPopup_C::SizeBoxForArrowUp' has a wrong offset!");
static_assert(offsetof(UCommonImagineAbilityEfficacyDescPopup_C, TitleTxt) == 0x0002B8, "Member 'UCommonImagineAbilityEfficacyDescPopup_C::TitleTxt' has a wrong offset!");
static_assert(offsetof(UCommonImagineAbilityEfficacyDescPopup_C, VerticalBox_Content) == 0x0002C0, "Member 'UCommonImagineAbilityEfficacyDescPopup_C::VerticalBox_Content' has a wrong offset!");
static_assert(offsetof(UCommonImagineAbilityEfficacyDescPopup_C, OnClose) == 0x0002C8, "Member 'UCommonImagineAbilityEfficacyDescPopup_C::OnClose' has a wrong offset!");
static_assert(offsetof(UCommonImagineAbilityEfficacyDescPopup_C, bIsClosing) == 0x0002D8, "Member 'UCommonImagineAbilityEfficacyDescPopup_C::bIsClosing' has a wrong offset!");
static_assert(offsetof(UCommonImagineAbilityEfficacyDescPopup_C, bIsArrowUp) == 0x0002D9, "Member 'UCommonImagineAbilityEfficacyDescPopup_C::bIsArrowUp' has a wrong offset!");

}

