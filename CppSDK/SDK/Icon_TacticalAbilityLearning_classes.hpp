#pragma once

 

// Package: Icon_TacticalAbilityLearning

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C
// 0x0118 (0x0390 - 0x0278)
class UIcon_TacticalAbilityLearning_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_173;                                   // 0x0280(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CPAmount2;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageElement;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageIcon;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageIconBg;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Amount2;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NewIconGrp;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SBIcon;                                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<ESBSkillIconBgType, class UTexture2D*>   IconBgImageList;                                   // 0x02C8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<ESBSkillElementIconType, class UTexture2D*> ElementIconImageList;                              // 0x0318(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Skill_ID;                                          // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Skill_LV;                                          // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ToolTip_Skill_C*                   ToolTip;                                           // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         In_Width_Override;                                 // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         In_Height_Override;                                // 0x037C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClicked__DelegateSignature();
	void ExecuteUbergraph_Icon_TacticalAbilityLearning(int32 EntryPoint);
	void BndEvt__Icon_TacticalAbilityLearning_SBButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Setup(int32 SkillId, int32 SkillLV);
	void SetIcon();
	void SetIconBG();
	void SetElement();
	void SetNewMark(bool IsNew);
	void SetAmountValue(int32 Value);
	void SetAmountVisible(bool Param_IsVisible);
	void SetVisibleButton(bool Param_IsVisible);
	void SetEnableButton(bool IsEnable);
	class UWidget* GetToolTipWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Icon_TacticalAbilityLearning_C">();
	}
	static class UIcon_TacticalAbilityLearning_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIcon_TacticalAbilityLearning_C>();
	}
};
static_assert(alignof(UIcon_TacticalAbilityLearning_C) == 0x000008, "Wrong alignment on UIcon_TacticalAbilityLearning_C");
static_assert(sizeof(UIcon_TacticalAbilityLearning_C) == 0x000390, "Wrong size on UIcon_TacticalAbilityLearning_C");
static_assert(offsetof(UIcon_TacticalAbilityLearning_C, UberGraphFrame) == 0x000278, "Member 'UIcon_TacticalAbilityLearning_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UIcon_TacticalAbilityLearning_C, CanvasPanel_173) == 0x000280, "Member 'UIcon_TacticalAbilityLearning_C::CanvasPanel_173' has a wrong offset!");
static_assert(offsetof(UIcon_TacticalAbilityLearning_C, CPAmount2) == 0x000288, "Member 'UIcon_TacticalAbilityLearning_C::CPAmount2' has a wrong offset!");
static_assert(offsetof(UIcon_TacticalAbilityLearning_C, ImageElement) == 0x000290, "Member 'UIcon_TacticalAbilityLearning_C::ImageElement' has a wrong offset!");
static_assert(offsetof(UIcon_TacticalAbilityLearning_C, ImageIcon) == 0x000298, "Member 'UIcon_TacticalAbilityLearning_C::ImageIcon' has a wrong offset!");
static_assert(offsetof(UIcon_TacticalAbilityLearning_C, ImageIconBg) == 0x0002A0, "Member 'UIcon_TacticalAbilityLearning_C::ImageIconBg' has a wrong offset!");
static_assert(offsetof(UIcon_TacticalAbilityLearning_C, Label_Amount2) == 0x0002A8, "Member 'UIcon_TacticalAbilityLearning_C::Label_Amount2' has a wrong offset!");
static_assert(offsetof(UIcon_TacticalAbilityLearning_C, NewIconGrp) == 0x0002B0, "Member 'UIcon_TacticalAbilityLearning_C::NewIconGrp' has a wrong offset!");
static_assert(offsetof(UIcon_TacticalAbilityLearning_C, SBButton) == 0x0002B8, "Member 'UIcon_TacticalAbilityLearning_C::SBButton' has a wrong offset!");
static_assert(offsetof(UIcon_TacticalAbilityLearning_C, SBIcon) == 0x0002C0, "Member 'UIcon_TacticalAbilityLearning_C::SBIcon' has a wrong offset!");
static_assert(offsetof(UIcon_TacticalAbilityLearning_C, IconBgImageList) == 0x0002C8, "Member 'UIcon_TacticalAbilityLearning_C::IconBgImageList' has a wrong offset!");
static_assert(offsetof(UIcon_TacticalAbilityLearning_C, ElementIconImageList) == 0x000318, "Member 'UIcon_TacticalAbilityLearning_C::ElementIconImageList' has a wrong offset!");
static_assert(offsetof(UIcon_TacticalAbilityLearning_C, Skill_ID) == 0x000368, "Member 'UIcon_TacticalAbilityLearning_C::Skill_ID' has a wrong offset!");
static_assert(offsetof(UIcon_TacticalAbilityLearning_C, Skill_LV) == 0x00036C, "Member 'UIcon_TacticalAbilityLearning_C::Skill_LV' has a wrong offset!");
static_assert(offsetof(UIcon_TacticalAbilityLearning_C, ToolTip) == 0x000370, "Member 'UIcon_TacticalAbilityLearning_C::ToolTip' has a wrong offset!");
static_assert(offsetof(UIcon_TacticalAbilityLearning_C, In_Width_Override) == 0x000378, "Member 'UIcon_TacticalAbilityLearning_C::In_Width_Override' has a wrong offset!");
static_assert(offsetof(UIcon_TacticalAbilityLearning_C, In_Height_Override) == 0x00037C, "Member 'UIcon_TacticalAbilityLearning_C::In_Height_Override' has a wrong offset!");
static_assert(offsetof(UIcon_TacticalAbilityLearning_C, OnClicked) == 0x000380, "Member 'UIcon_TacticalAbilityLearning_C::OnClicked' has a wrong offset!");

}

