#pragma once

 

// Package: WBP_TermsOfService

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TermsOfService.WBP_TermsOfService_C
// 0x0090 (0x0308 - 0x0278)
class UWBP_TermsOfService_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            AgreeBtn;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Agreetext;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base;                                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack01;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Contents;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Explanation;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             SBCheckBoxCmnCheckBox01_C_6;                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_1;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_0;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Title;                                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_End;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnEnd;                                             // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Approval;                                          // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          End;                                               // 0x02F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EA3[0x2];                                     // 0x02FA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCursorStateHandle                   CursorHandle;                                      // 0x02FC(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          TitleMode;                                         // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void OnEnd__DelegateSignature(bool Param_Approval);
	void ExecuteUbergraph_WBP_TermsOfService(int32 EntryPoint);
	void CustomEvent_0();
	void BndEvt__WBP_TermsOfService_CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature();
	void BndEvt__WBP_TermsOfService_AgreeBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_TermsOfService_AgreeBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void Destruct();
	void Construct();
	void WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0();
	void TryEnd();
	void BndEvt__WBP_TermsOfService_SBButton_C_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Initialize(const class FText& InTitle, const class FText& InExplanation, const class FText& InContents);
	void BndEvt__WBP_TermsOfService_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	void BndEvt__WBP_TermsOfService_SBCheckBoxCmnCheckBox01_C_6_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TermsOfService_C">();
	}
	static class UWBP_TermsOfService_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TermsOfService_C>();
	}
};
static_assert(alignof(UWBP_TermsOfService_C) == 0x000008, "Wrong alignment on UWBP_TermsOfService_C");
static_assert(sizeof(UWBP_TermsOfService_C) == 0x000308, "Wrong size on UWBP_TermsOfService_C");
static_assert(offsetof(UWBP_TermsOfService_C, UberGraphFrame) == 0x000278, "Member 'UWBP_TermsOfService_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TermsOfService_C, AnimInOut) == 0x000280, "Member 'UWBP_TermsOfService_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UWBP_TermsOfService_C, AgreeBtn) == 0x000288, "Member 'UWBP_TermsOfService_C::AgreeBtn' has a wrong offset!");
static_assert(offsetof(UWBP_TermsOfService_C, Agreetext) == 0x000290, "Member 'UWBP_TermsOfService_C::Agreetext' has a wrong offset!");
static_assert(offsetof(UWBP_TermsOfService_C, Base) == 0x000298, "Member 'UWBP_TermsOfService_C::Base' has a wrong offset!");
static_assert(offsetof(UWBP_TermsOfService_C, CmnBack01) == 0x0002A0, "Member 'UWBP_TermsOfService_C::CmnBack01' has a wrong offset!");
static_assert(offsetof(UWBP_TermsOfService_C, Contents) == 0x0002A8, "Member 'UWBP_TermsOfService_C::Contents' has a wrong offset!");
static_assert(offsetof(UWBP_TermsOfService_C, Explanation) == 0x0002B0, "Member 'UWBP_TermsOfService_C::Explanation' has a wrong offset!");
static_assert(offsetof(UWBP_TermsOfService_C, SBCheckBoxCmnCheckBox01_C_6) == 0x0002B8, "Member 'UWBP_TermsOfService_C::SBCheckBoxCmnCheckBox01_C_6' has a wrong offset!");
static_assert(offsetof(UWBP_TermsOfService_C, SBRuntimeTextBlock_1) == 0x0002C0, "Member 'UWBP_TermsOfService_C::SBRuntimeTextBlock_1' has a wrong offset!");
static_assert(offsetof(UWBP_TermsOfService_C, ScrollBox_0) == 0x0002C8, "Member 'UWBP_TermsOfService_C::ScrollBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_TermsOfService_C, Title) == 0x0002D0, "Member 'UWBP_TermsOfService_C::Title' has a wrong offset!");
static_assert(offsetof(UWBP_TermsOfService_C, UIBlocker) == 0x0002D8, "Member 'UWBP_TermsOfService_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_TermsOfService_C, UIBlocker_End) == 0x0002E0, "Member 'UWBP_TermsOfService_C::UIBlocker_End' has a wrong offset!");
static_assert(offsetof(UWBP_TermsOfService_C, OnEnd) == 0x0002E8, "Member 'UWBP_TermsOfService_C::OnEnd' has a wrong offset!");
static_assert(offsetof(UWBP_TermsOfService_C, Approval) == 0x0002F8, "Member 'UWBP_TermsOfService_C::Approval' has a wrong offset!");
static_assert(offsetof(UWBP_TermsOfService_C, End) == 0x0002F9, "Member 'UWBP_TermsOfService_C::End' has a wrong offset!");
static_assert(offsetof(UWBP_TermsOfService_C, CursorHandle) == 0x0002FC, "Member 'UWBP_TermsOfService_C::CursorHandle' has a wrong offset!");
static_assert(offsetof(UWBP_TermsOfService_C, TitleMode) == 0x000300, "Member 'UWBP_TermsOfService_C::TitleMode' has a wrong offset!");

}

