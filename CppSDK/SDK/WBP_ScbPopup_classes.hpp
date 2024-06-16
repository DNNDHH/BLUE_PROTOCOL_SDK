#pragma once

 

// Package: WBP_ScbPopup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ScbPopup.WBP_ScbPopup_C
// 0x0130 (0x03F0 - 0x02C0)
class UWBP_ScbPopup_C final : public USBScbPopup
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBSelectableTextButtonCmnBtn27_C*      Button_Conditions;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBSelectableTextButtonCmnBtn27_C*      Button_Rank;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_TotalBonus;                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbClassItem_C*                    ClassItem0;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbClassItem_C*                    ClassItem1;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbClassItem_C*                    ClassItem2;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbClassItem_C*                    ClassItem3;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbClassItem_C*                    ClassItem4;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbClassItem_C*                    ClassItem5;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbClassItem_C*                    ClassItem6;                                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbClassItem_C*                    ClassItem7;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScbClassItem_C*                    ClassItem8;                                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_542;                                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_HeaderBg1;                                   // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_HeaderBg2;                                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1;                                             // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line2;                                             // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineGreen1;                                        // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineGreen2;                                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RuntimeText_Description;                           // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RuntimeText_Header0;                               // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RuntimeText_Header1;                               // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RuntimeText_Title;                                 // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Close;                                    // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  SBButtonFullScreen;                                // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_TotalBonus_Dex;                          // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_TotalBonus_Hp;                           // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_TotalBonus_Int;                          // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_TotalBonus_Mnd;                          // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_TotalBonus_Str;                          // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_TotalBonus_Vit;                          // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_ScbClassItem_C*>            ClassItemList;                                     // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          IsOpen;                                            // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_ScbPopup(int32 EntryPoint);
	void OnPressCancelKey();
	void BndEvt__WBP_SubClassBonusPopup_SBButtonFullScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_SubClassBonusPopup_SBButton_Close_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_SubClassBonusPopup_Button_Conditions_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_SubClassBonusPopup_Button_Proficiency_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ShowConditions();
	void ShowRank();
	void Construct();
	void Finished_48175ABA459004A31D7F73BB1AD68F3D();
	void SetTotalBonus(const struct FSBScbClassData& TotalBonus);
	void ChangeDesign(bool bRank);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ScbPopup_C">();
	}
	static class UWBP_ScbPopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ScbPopup_C>();
	}
};
static_assert(alignof(UWBP_ScbPopup_C) == 0x000008, "Wrong alignment on UWBP_ScbPopup_C");
static_assert(sizeof(UWBP_ScbPopup_C) == 0x0003F0, "Wrong size on UWBP_ScbPopup_C");
static_assert(offsetof(UWBP_ScbPopup_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_ScbPopup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, AnimOut) == 0x0002C8, "Member 'UWBP_ScbPopup_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, AnimIn) == 0x0002D0, "Member 'UWBP_ScbPopup_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, Button_Conditions) == 0x0002D8, "Member 'UWBP_ScbPopup_C::Button_Conditions' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, Button_Rank) == 0x0002E0, "Member 'UWBP_ScbPopup_C::Button_Rank' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, CanvasPanel_TotalBonus) == 0x0002E8, "Member 'UWBP_ScbPopup_C::CanvasPanel_TotalBonus' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, ClassItem0) == 0x0002F0, "Member 'UWBP_ScbPopup_C::ClassItem0' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, ClassItem1) == 0x0002F8, "Member 'UWBP_ScbPopup_C::ClassItem1' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, ClassItem2) == 0x000300, "Member 'UWBP_ScbPopup_C::ClassItem2' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, ClassItem3) == 0x000308, "Member 'UWBP_ScbPopup_C::ClassItem3' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, ClassItem4) == 0x000310, "Member 'UWBP_ScbPopup_C::ClassItem4' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, ClassItem5) == 0x000318, "Member 'UWBP_ScbPopup_C::ClassItem5' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, ClassItem6) == 0x000320, "Member 'UWBP_ScbPopup_C::ClassItem6' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, ClassItem7) == 0x000328, "Member 'UWBP_ScbPopup_C::ClassItem7' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, ClassItem8) == 0x000330, "Member 'UWBP_ScbPopup_C::ClassItem8' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, Image_542) == 0x000338, "Member 'UWBP_ScbPopup_C::Image_542' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, Image_HeaderBg1) == 0x000340, "Member 'UWBP_ScbPopup_C::Image_HeaderBg1' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, Image_HeaderBg2) == 0x000348, "Member 'UWBP_ScbPopup_C::Image_HeaderBg2' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, Line1) == 0x000350, "Member 'UWBP_ScbPopup_C::Line1' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, Line2) == 0x000358, "Member 'UWBP_ScbPopup_C::Line2' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, LineGreen1) == 0x000360, "Member 'UWBP_ScbPopup_C::LineGreen1' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, LineGreen2) == 0x000368, "Member 'UWBP_ScbPopup_C::LineGreen2' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, RuntimeText_Description) == 0x000370, "Member 'UWBP_ScbPopup_C::RuntimeText_Description' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, RuntimeText_Header0) == 0x000378, "Member 'UWBP_ScbPopup_C::RuntimeText_Header0' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, RuntimeText_Header1) == 0x000380, "Member 'UWBP_ScbPopup_C::RuntimeText_Header1' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, RuntimeText_Title) == 0x000388, "Member 'UWBP_ScbPopup_C::RuntimeText_Title' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, SBButton_Close) == 0x000390, "Member 'UWBP_ScbPopup_C::SBButton_Close' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, SBButtonFullScreen) == 0x000398, "Member 'UWBP_ScbPopup_C::SBButtonFullScreen' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, TextBlock_TotalBonus_Dex) == 0x0003A0, "Member 'UWBP_ScbPopup_C::TextBlock_TotalBonus_Dex' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, TextBlock_TotalBonus_Hp) == 0x0003A8, "Member 'UWBP_ScbPopup_C::TextBlock_TotalBonus_Hp' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, TextBlock_TotalBonus_Int) == 0x0003B0, "Member 'UWBP_ScbPopup_C::TextBlock_TotalBonus_Int' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, TextBlock_TotalBonus_Mnd) == 0x0003B8, "Member 'UWBP_ScbPopup_C::TextBlock_TotalBonus_Mnd' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, TextBlock_TotalBonus_Str) == 0x0003C0, "Member 'UWBP_ScbPopup_C::TextBlock_TotalBonus_Str' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, TextBlock_TotalBonus_Vit) == 0x0003C8, "Member 'UWBP_ScbPopup_C::TextBlock_TotalBonus_Vit' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, UIBlocker) == 0x0003D0, "Member 'UWBP_ScbPopup_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, ClassItemList) == 0x0003D8, "Member 'UWBP_ScbPopup_C::ClassItemList' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopup_C, IsOpen) == 0x0003E8, "Member 'UWBP_ScbPopup_C::IsOpen' has a wrong offset!");

}

