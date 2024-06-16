#pragma once

 

// Package: WBP_SkillListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SkillListItem.WBP_SkillListItem_C
// 0x0140 (0x03B8 - 0x0278)
class UWBP_SkillListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Alpha;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Base;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Beta;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_1;                                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Camma;                                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Ability;                               // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Type;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ClassLvText_2;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Arrow;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemNameText;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemNameText_1;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemNameText_2;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line01;                                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_C_174;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_248;                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SkillLvText_1;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextLearningConditions;                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Type00;                                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Type01;                                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Type02;                                            // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Type03;                                            // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillIconSwitcher_C*               WBP_SkillIconSwitcher;                             // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Bg;                                 // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBSkillDataMasterData                 SBSkill_Data_Master_Data;                          // 0x0340(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBSkillMasteryParam                   Mastery;                                           // 0x0398(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         CurrentLV;                                         // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClick__DelegateSignature(const struct FSBSkillDataMasterData& SkillId);
	void ExecuteUbergraph_WBP_SkillListItem(int32 EntryPoint);
	void BndEvt__WBP_SkillListItem_SBButton_C_174_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Init(const struct FSBSkillDataMasterData& SBSkillDataMasterData);
	void UpdateAbility(bool* Use);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SkillListItem_C">();
	}
	static class UWBP_SkillListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SkillListItem_C>();
	}
};
static_assert(alignof(UWBP_SkillListItem_C) == 0x000008, "Wrong alignment on UWBP_SkillListItem_C");
static_assert(sizeof(UWBP_SkillListItem_C) == 0x0003B8, "Wrong size on UWBP_SkillListItem_C");
static_assert(offsetof(UWBP_SkillListItem_C, UberGraphFrame) == 0x000278, "Member 'UWBP_SkillListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, Alpha) == 0x000280, "Member 'UWBP_SkillListItem_C::Alpha' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, Base) == 0x000288, "Member 'UWBP_SkillListItem_C::Base' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, Beta) == 0x000290, "Member 'UWBP_SkillListItem_C::Beta' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, BG) == 0x000298, "Member 'UWBP_SkillListItem_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, BG_1) == 0x0002A0, "Member 'UWBP_SkillListItem_C::BG_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, Camma) == 0x0002A8, "Member 'UWBP_SkillListItem_C::Camma' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, CanvasPanel_Ability) == 0x0002B0, "Member 'UWBP_SkillListItem_C::CanvasPanel_Ability' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, CanvasPanel_Type) == 0x0002B8, "Member 'UWBP_SkillListItem_C::CanvasPanel_Type' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, ClassLvText_2) == 0x0002C0, "Member 'UWBP_SkillListItem_C::ClassLvText_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, Image_Arrow) == 0x0002C8, "Member 'UWBP_SkillListItem_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, ItemNameText) == 0x0002D0, "Member 'UWBP_SkillListItem_C::ItemNameText' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, ItemNameText_1) == 0x0002D8, "Member 'UWBP_SkillListItem_C::ItemNameText_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, ItemNameText_2) == 0x0002E0, "Member 'UWBP_SkillListItem_C::ItemNameText_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, Line01) == 0x0002E8, "Member 'UWBP_SkillListItem_C::Line01' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, SBButton_C_174) == 0x0002F0, "Member 'UWBP_SkillListItem_C::SBButton_C_174' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, SBRuntimeTextBlock_248) == 0x0002F8, "Member 'UWBP_SkillListItem_C::SBRuntimeTextBlock_248' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, SkillLvText_1) == 0x000300, "Member 'UWBP_SkillListItem_C::SkillLvText_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, TextLearningConditions) == 0x000308, "Member 'UWBP_SkillListItem_C::TextLearningConditions' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, Type00) == 0x000310, "Member 'UWBP_SkillListItem_C::Type00' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, Type01) == 0x000318, "Member 'UWBP_SkillListItem_C::Type01' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, Type02) == 0x000320, "Member 'UWBP_SkillListItem_C::Type02' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, Type03) == 0x000328, "Member 'UWBP_SkillListItem_C::Type03' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, WBP_SkillIconSwitcher) == 0x000330, "Member 'UWBP_SkillListItem_C::WBP_SkillIconSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, WidgetSwitcher_Bg) == 0x000338, "Member 'UWBP_SkillListItem_C::WidgetSwitcher_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, SBSkill_Data_Master_Data) == 0x000340, "Member 'UWBP_SkillListItem_C::SBSkill_Data_Master_Data' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, Mastery) == 0x000398, "Member 'UWBP_SkillListItem_C::Mastery' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, OnClick) == 0x0003A0, "Member 'UWBP_SkillListItem_C::OnClick' has a wrong offset!");
static_assert(offsetof(UWBP_SkillListItem_C, CurrentLV) == 0x0003B0, "Member 'UWBP_SkillListItem_C::CurrentLV' has a wrong offset!");

}

