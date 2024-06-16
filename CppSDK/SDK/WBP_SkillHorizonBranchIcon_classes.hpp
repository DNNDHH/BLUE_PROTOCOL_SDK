#pragma once

 

// Package: WBP_SkillHorizonBranchIcon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "ESkillTreeIconFormation_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C
// 0x0140 (0x03B8 - 0x0278)
class UWBP_SkillHorizonBranchIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Hovered01;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Hovered02;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Hovered03_01;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Hovered03_03;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image03_02;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Pressed01;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Pressed02;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Pressed03_01;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Pressed03_02;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Pressed03_03;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Unhover01;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Unhover02;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Unhover03_01;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Unhover03_02;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Unhover03_03;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillIconSwitcher_C*               WBP_SkillIconSwitcher_1;                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillIconSwitcher_C*               WBP_SkillIconSwitcher_1_1;                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillIconSwitcher_C*               WBP_SkillIconSwitcher_3_1;                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillIconSwitcher_C*               WBP_SkillIconSwitcher_3_2;                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillIconSwitcher_C*               WBP_SkillIconSwitcher_3_3;                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_47;                                 // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_HoverChangeSingle1;                 // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_HoverChangeSingle1_1;               // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_HoverChangeSingle_3_1;              // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_HoverChangeSingle_3_2;              // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_HoverChangeSingle_3_3;              // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_press1;                             // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_press1_1;                           // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_press3_1;                           // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_press3_2;                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_press3_3;                           // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESkillTreeIconFormation                       SkillTreeHorizonBranchType;                        // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E11[0x7];                                     // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FCharaSkillMasteryInfo>         MySkill_List;                                      // 0x0390(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UWidgetSwitcher*>                WidgetSwitcher_pressList;                          // 0x03A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         SelectNumber;                                      // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClick__DelegateSignature(int32 SkillId, int32 SkillLV);
	void ExecuteUbergraph_WBP_SkillHorizonBranchIcon(int32 EntryPoint);
	void SelectUpdate();
	void Construct();
	void SkillSetSingleCenter();
	void BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature(int32 SkillId, int32 SkillLV);
	void BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_K2Node_ComponentBoundEvent_13_OnUnhovered__DelegateSignature();
	void BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature();
	void BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_3_K2Node_ComponentBoundEvent_11_OnUnhovered__DelegateSignature();
	void BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_3_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature();
	void BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_2_K2Node_ComponentBoundEvent_9_OnUnhovered__DelegateSignature();
	void BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_2_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature();
	void BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_1_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature();
	void BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_1_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature();
	void BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_1_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature(int32 SkillId, int32 SkillLV);
	void BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_1_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature();
	void BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_1_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature();
	void Init(const TArray<struct FCharaSkillMasteryInfo>& InSkillList, ESkillTreeHorizonBranchType Brunch);
	void SetMulti();
	void BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_206_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(int32 SkillId, int32 SkillLV);
	void BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_110_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(int32 SkillId, int32 SkillLV);
	void BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(int32 SkillId, int32 SkillLV);
	void UpdetIcon();
	void SkillSetSingleUpper();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SkillHorizonBranchIcon_C">();
	}
	static class UWBP_SkillHorizonBranchIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SkillHorizonBranchIcon_C>();
	}
};
static_assert(alignof(UWBP_SkillHorizonBranchIcon_C) == 0x000008, "Wrong alignment on UWBP_SkillHorizonBranchIcon_C");
static_assert(sizeof(UWBP_SkillHorizonBranchIcon_C) == 0x0003B8, "Wrong size on UWBP_SkillHorizonBranchIcon_C");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, UberGraphFrame) == 0x000278, "Member 'UWBP_SkillHorizonBranchIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, Hovered01) == 0x000280, "Member 'UWBP_SkillHorizonBranchIcon_C::Hovered01' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, Hovered02) == 0x000288, "Member 'UWBP_SkillHorizonBranchIcon_C::Hovered02' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, Hovered03_01) == 0x000290, "Member 'UWBP_SkillHorizonBranchIcon_C::Hovered03_01' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, Hovered03_03) == 0x000298, "Member 'UWBP_SkillHorizonBranchIcon_C::Hovered03_03' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, Image03_02) == 0x0002A0, "Member 'UWBP_SkillHorizonBranchIcon_C::Image03_02' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, Pressed01) == 0x0002A8, "Member 'UWBP_SkillHorizonBranchIcon_C::Pressed01' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, Pressed02) == 0x0002B0, "Member 'UWBP_SkillHorizonBranchIcon_C::Pressed02' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, Pressed03_01) == 0x0002B8, "Member 'UWBP_SkillHorizonBranchIcon_C::Pressed03_01' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, Pressed03_02) == 0x0002C0, "Member 'UWBP_SkillHorizonBranchIcon_C::Pressed03_02' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, Pressed03_03) == 0x0002C8, "Member 'UWBP_SkillHorizonBranchIcon_C::Pressed03_03' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, Unhover01) == 0x0002D0, "Member 'UWBP_SkillHorizonBranchIcon_C::Unhover01' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, Unhover02) == 0x0002D8, "Member 'UWBP_SkillHorizonBranchIcon_C::Unhover02' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, Unhover03_01) == 0x0002E0, "Member 'UWBP_SkillHorizonBranchIcon_C::Unhover03_01' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, Unhover03_02) == 0x0002E8, "Member 'UWBP_SkillHorizonBranchIcon_C::Unhover03_02' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, Unhover03_03) == 0x0002F0, "Member 'UWBP_SkillHorizonBranchIcon_C::Unhover03_03' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, WBP_SkillIconSwitcher_1) == 0x0002F8, "Member 'UWBP_SkillHorizonBranchIcon_C::WBP_SkillIconSwitcher_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, WBP_SkillIconSwitcher_1_1) == 0x000300, "Member 'UWBP_SkillHorizonBranchIcon_C::WBP_SkillIconSwitcher_1_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, WBP_SkillIconSwitcher_3_1) == 0x000308, "Member 'UWBP_SkillHorizonBranchIcon_C::WBP_SkillIconSwitcher_3_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, WBP_SkillIconSwitcher_3_2) == 0x000310, "Member 'UWBP_SkillHorizonBranchIcon_C::WBP_SkillIconSwitcher_3_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, WBP_SkillIconSwitcher_3_3) == 0x000318, "Member 'UWBP_SkillHorizonBranchIcon_C::WBP_SkillIconSwitcher_3_3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, WidgetSwitcher_47) == 0x000320, "Member 'UWBP_SkillHorizonBranchIcon_C::WidgetSwitcher_47' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, WidgetSwitcher_HoverChangeSingle1) == 0x000328, "Member 'UWBP_SkillHorizonBranchIcon_C::WidgetSwitcher_HoverChangeSingle1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, WidgetSwitcher_HoverChangeSingle1_1) == 0x000330, "Member 'UWBP_SkillHorizonBranchIcon_C::WidgetSwitcher_HoverChangeSingle1_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, WidgetSwitcher_HoverChangeSingle_3_1) == 0x000338, "Member 'UWBP_SkillHorizonBranchIcon_C::WidgetSwitcher_HoverChangeSingle_3_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, WidgetSwitcher_HoverChangeSingle_3_2) == 0x000340, "Member 'UWBP_SkillHorizonBranchIcon_C::WidgetSwitcher_HoverChangeSingle_3_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, WidgetSwitcher_HoverChangeSingle_3_3) == 0x000348, "Member 'UWBP_SkillHorizonBranchIcon_C::WidgetSwitcher_HoverChangeSingle_3_3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, WidgetSwitcher_press1) == 0x000350, "Member 'UWBP_SkillHorizonBranchIcon_C::WidgetSwitcher_press1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, WidgetSwitcher_press1_1) == 0x000358, "Member 'UWBP_SkillHorizonBranchIcon_C::WidgetSwitcher_press1_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, WidgetSwitcher_press3_1) == 0x000360, "Member 'UWBP_SkillHorizonBranchIcon_C::WidgetSwitcher_press3_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, WidgetSwitcher_press3_2) == 0x000368, "Member 'UWBP_SkillHorizonBranchIcon_C::WidgetSwitcher_press3_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, WidgetSwitcher_press3_3) == 0x000370, "Member 'UWBP_SkillHorizonBranchIcon_C::WidgetSwitcher_press3_3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, SkillTreeHorizonBranchType) == 0x000378, "Member 'UWBP_SkillHorizonBranchIcon_C::SkillTreeHorizonBranchType' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, OnClick) == 0x000380, "Member 'UWBP_SkillHorizonBranchIcon_C::OnClick' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, MySkill_List) == 0x000390, "Member 'UWBP_SkillHorizonBranchIcon_C::MySkill_List' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, WidgetSwitcher_pressList) == 0x0003A0, "Member 'UWBP_SkillHorizonBranchIcon_C::WidgetSwitcher_pressList' has a wrong offset!");
static_assert(offsetof(UWBP_SkillHorizonBranchIcon_C, SelectNumber) == 0x0003B0, "Member 'UWBP_SkillHorizonBranchIcon_C::SelectNumber' has a wrong offset!");

}

