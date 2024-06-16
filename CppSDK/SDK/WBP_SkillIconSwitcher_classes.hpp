#pragma once

 

// Package: WBP_SkillIconSwitcher

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C
// 0x0130 (0x03A8 - 0x0278)
class UWBP_SkillIconSwitcher_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Alpha;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Base;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Beta;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Camma;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        IconSwitcher;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_C_40;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillTree_SkillIconMain_C*             SkillTree_SkillIconMain;                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillTree_SkillIconPassive_C*          SkillTree_SkillIconPassive;                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillTree_SkillIconPassiveAlways_C*    SkillTree_SkillIconPassiveAlways;                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillTree_SkillIconSpecial_C*          SkillTree_SkillIconSpecial;                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillTree_SkillIconSub_C*              SkillTree_SkillIconSub;                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillTree_SkillIconTactical_C*         SkillTree_SkillIconTactical;                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillTree_SkillIconTacticalAbility_C*  SkillTree_SkillIconTacticalAbility;                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Type_00;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Type_01;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Type_02;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Type_03;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_76;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SkillId;                                           // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLV;                                           // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnHovered;                                         // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhovered;                                       // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBSkillDataMasterData                 Master;                                            // 0x0348(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_ToolTip_Skill_C*                   CachedToolTipWidget;                               // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnHovered__DelegateSignature();
	void OnUnhovered__DelegateSignature();
	void OnClick__DelegateSignature(int32 Param_SkillId, int32 Param_SkillLV);
	void ExecuteUbergraph_WBP_SkillIconSwitcher(int32 EntryPoint);
	void BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void Init(int32 Param_SkillId, int32 SkillLevel, ESkillTreeAbilityType AbilityType);
	void Update();
	void Set_Equipment_Icon_Visible(bool Visible);
	class UWidget* GetToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SkillIconSwitcher_C">();
	}
	static class UWBP_SkillIconSwitcher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SkillIconSwitcher_C>();
	}
};
static_assert(alignof(UWBP_SkillIconSwitcher_C) == 0x000008, "Wrong alignment on UWBP_SkillIconSwitcher_C");
static_assert(sizeof(UWBP_SkillIconSwitcher_C) == 0x0003A8, "Wrong size on UWBP_SkillIconSwitcher_C");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, UberGraphFrame) == 0x000278, "Member 'UWBP_SkillIconSwitcher_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, Alpha) == 0x000280, "Member 'UWBP_SkillIconSwitcher_C::Alpha' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, Base) == 0x000288, "Member 'UWBP_SkillIconSwitcher_C::Base' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, Beta) == 0x000290, "Member 'UWBP_SkillIconSwitcher_C::Beta' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, Camma) == 0x000298, "Member 'UWBP_SkillIconSwitcher_C::Camma' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, IconSwitcher) == 0x0002A0, "Member 'UWBP_SkillIconSwitcher_C::IconSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, SBButton_C_40) == 0x0002A8, "Member 'UWBP_SkillIconSwitcher_C::SBButton_C_40' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, SkillTree_SkillIconMain) == 0x0002B0, "Member 'UWBP_SkillIconSwitcher_C::SkillTree_SkillIconMain' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, SkillTree_SkillIconPassive) == 0x0002B8, "Member 'UWBP_SkillIconSwitcher_C::SkillTree_SkillIconPassive' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, SkillTree_SkillIconPassiveAlways) == 0x0002C0, "Member 'UWBP_SkillIconSwitcher_C::SkillTree_SkillIconPassiveAlways' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, SkillTree_SkillIconSpecial) == 0x0002C8, "Member 'UWBP_SkillIconSwitcher_C::SkillTree_SkillIconSpecial' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, SkillTree_SkillIconSub) == 0x0002D0, "Member 'UWBP_SkillIconSwitcher_C::SkillTree_SkillIconSub' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, SkillTree_SkillIconTactical) == 0x0002D8, "Member 'UWBP_SkillIconSwitcher_C::SkillTree_SkillIconTactical' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, SkillTree_SkillIconTacticalAbility) == 0x0002E0, "Member 'UWBP_SkillIconSwitcher_C::SkillTree_SkillIconTacticalAbility' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, Type_00) == 0x0002E8, "Member 'UWBP_SkillIconSwitcher_C::Type_00' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, Type_01) == 0x0002F0, "Member 'UWBP_SkillIconSwitcher_C::Type_01' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, Type_02) == 0x0002F8, "Member 'UWBP_SkillIconSwitcher_C::Type_02' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, Type_03) == 0x000300, "Member 'UWBP_SkillIconSwitcher_C::Type_03' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, WidgetSwitcher_76) == 0x000308, "Member 'UWBP_SkillIconSwitcher_C::WidgetSwitcher_76' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, SkillId) == 0x000310, "Member 'UWBP_SkillIconSwitcher_C::SkillId' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, SkillLV) == 0x000314, "Member 'UWBP_SkillIconSwitcher_C::SkillLV' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, OnHovered) == 0x000318, "Member 'UWBP_SkillIconSwitcher_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, OnUnhovered) == 0x000328, "Member 'UWBP_SkillIconSwitcher_C::OnUnhovered' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, OnClick) == 0x000338, "Member 'UWBP_SkillIconSwitcher_C::OnClick' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, Master) == 0x000348, "Member 'UWBP_SkillIconSwitcher_C::Master' has a wrong offset!");
static_assert(offsetof(UWBP_SkillIconSwitcher_C, CachedToolTipWidget) == 0x0003A0, "Member 'UWBP_SkillIconSwitcher_C::CachedToolTipWidget' has a wrong offset!");

}

