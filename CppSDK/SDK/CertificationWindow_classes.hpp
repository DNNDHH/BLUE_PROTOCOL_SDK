#pragma once

 

// Package: CertificationWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CertificationWindow.CertificationWindow_C
// 0x00C0 (0x0370 - 0x02B0)
class UCertificationWindow_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                           Box_AgeLimit;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Box_BtnCancel;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Box_BtnRegister;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            BtnCancel;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           BtnExit;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            BtnRegister;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCertificationWindow_Sub_C*             CertificationWindow_Sub;                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCertificationWindow_Sub_C*             CertificationWindow_Sub_140;                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCertificationWindow_Sub_C*             CertificationWindow_Sub_305;                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBEditableTextBox*                     EditMonth;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBEditableTextBox*                     EditYear;                                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                        List_Month;                                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                        List_Year;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRequest;                                         // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsActive;                                          // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSelectYear;                                      // 0x0351(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSelectMonth;                                     // 0x0352(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5668[0x1];                                     // 0x0353(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SelectYear;                                        // 0x0354(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectMonth;                                       // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ThisYear;                                          // 0x035C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Year;                                              // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Month;                                             // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Age;                                               // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void OnRequest__DelegateSignature(int32 Param_Year, int32 Param_Month);
	void ExecuteUbergraph_CertificationWindow(int32 EntryPoint);
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1();
	void BndEvt__CertificationWindow_BtnExit_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature();
	void OnEsc();
	void BndEvt__EditMonth_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void BndEvt__EditYear_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void BndEvt__EditMonth_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__EditYear_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__CmnBtn27_132_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
	void BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
	void DoClose();
	void BndEvt__List_Month_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__List_Year_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void Construct();
	void Show();
	void Hide();
	void CreateLists();
	void Clear();
	void CreateAgeLimit();
	void CheckInputText(const class FText& Input, bool IsYear, bool IsMonth);
	void ReserveInputText(const class FText& Input, bool IsYear, bool IsMonth);
	void SetBirthdayInfo(int32 Param_Year, int32 Param_Month, int32 Param_Age, int32 Param_Count);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CertificationWindow_C">();
	}
	static class UCertificationWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCertificationWindow_C>();
	}
};
static_assert(alignof(UCertificationWindow_C) == 0x000008, "Wrong alignment on UCertificationWindow_C");
static_assert(sizeof(UCertificationWindow_C) == 0x000370, "Wrong size on UCertificationWindow_C");
static_assert(offsetof(UCertificationWindow_C, UberGraphFrame) == 0x0002B0, "Member 'UCertificationWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, AnimOut) == 0x0002B8, "Member 'UCertificationWindow_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, AnimIn) == 0x0002C0, "Member 'UCertificationWindow_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, Box_AgeLimit) == 0x0002C8, "Member 'UCertificationWindow_C::Box_AgeLimit' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, Box_BtnCancel) == 0x0002D0, "Member 'UCertificationWindow_C::Box_BtnCancel' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, Box_BtnRegister) == 0x0002D8, "Member 'UCertificationWindow_C::Box_BtnRegister' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, BtnCancel) == 0x0002E0, "Member 'UCertificationWindow_C::BtnCancel' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, BtnExit) == 0x0002E8, "Member 'UCertificationWindow_C::BtnExit' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, BtnRegister) == 0x0002F0, "Member 'UCertificationWindow_C::BtnRegister' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, CertificationWindow_Sub) == 0x0002F8, "Member 'UCertificationWindow_C::CertificationWindow_Sub' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, CertificationWindow_Sub_140) == 0x000300, "Member 'UCertificationWindow_C::CertificationWindow_Sub_140' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, CertificationWindow_Sub_305) == 0x000308, "Member 'UCertificationWindow_C::CertificationWindow_Sub_305' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, EditMonth) == 0x000310, "Member 'UCertificationWindow_C::EditMonth' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, EditYear) == 0x000318, "Member 'UCertificationWindow_C::EditYear' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, List_Month) == 0x000320, "Member 'UCertificationWindow_C::List_Month' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, List_Year) == 0x000328, "Member 'UCertificationWindow_C::List_Year' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, OnClose) == 0x000330, "Member 'UCertificationWindow_C::OnClose' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, OnRequest) == 0x000340, "Member 'UCertificationWindow_C::OnRequest' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, IsActive) == 0x000350, "Member 'UCertificationWindow_C::IsActive' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, IsSelectYear) == 0x000351, "Member 'UCertificationWindow_C::IsSelectYear' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, IsSelectMonth) == 0x000352, "Member 'UCertificationWindow_C::IsSelectMonth' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, SelectYear) == 0x000354, "Member 'UCertificationWindow_C::SelectYear' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, SelectMonth) == 0x000358, "Member 'UCertificationWindow_C::SelectMonth' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, ThisYear) == 0x00035C, "Member 'UCertificationWindow_C::ThisYear' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, Year) == 0x000360, "Member 'UCertificationWindow_C::Year' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, Month) == 0x000364, "Member 'UCertificationWindow_C::Month' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, Age) == 0x000368, "Member 'UCertificationWindow_C::Age' has a wrong offset!");
static_assert(offsetof(UCertificationWindow_C, Count) == 0x00036C, "Member 'UCertificationWindow_C::Count' has a wrong offset!");

}

