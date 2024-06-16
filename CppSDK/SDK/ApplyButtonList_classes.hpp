#pragma once

 

// Package: ApplyButtonList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ApplyButtonList.ApplyButtonList_C
// 0x0270 (0x04E8 - 0x0278)
class UApplyButtonList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                BorderCannotApply;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn01_C*                            CmnBtn01Matching;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn01_C*                            CmnBtn01SoloOrParty;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            CmnBtn16PartyList;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_46;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxMatching;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxPartyList;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxSoloOrParty;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedSoloOrParty;                              // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedMatching;                                 // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedPartyList;                                // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Is_Command_Menu;                                   // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_747C[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             Map_Info;                                          // 0x02F8(0x01E0)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnClickedHelpMatching;                             // 0x04D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClickedSoloOrParty__DelegateSignature();
	void OnClickedMatching__DelegateSignature();
	void OnClickedPartyList__DelegateSignature();
	void OnClickedHelpMatching__DelegateSignature(const class FString& MapId, int32 ModeId);
	void ExecuteUbergraph_ApplyButtonList(int32 EntryPoint);
	void OnIsHelpMatchingMode_Event(const bool bWasSuccessful, const int32 RetCode, const class FString& GameContentId);
	void GetHelpMIssionId();
	void Event_ReSetups();
	void Destruct();
	void Construct();
	void BndEvt__ApplyButtonList_CmnBtn16PartyList_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void BndEvt__ApplyButtonList_CmnBtn01Matching_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void BndEvt__ApplyButtonList_CmnBtn01SoloOrParty_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void Setup(bool IsCommandMenu, struct FSBMapInfo& MapInfo);
	void SetupText(struct FSBMapInfo& MapInfo);
	void SetupVisibility(bool IsCommandMenu, struct FSBMapInfo& MapInfo);
	void SetupIsEnabled(struct FSBMapInfo& MapInfo);
	void SetErrorText(const struct FSBMapInfo& SelectedMapInfo, bool* CanApply);
	void SetErrorText2(const struct FSBMapInfo& SelectedMapInfo, bool IsParty, bool* CanApply);
	void UISupportKeyReset();
	void SetClickInputAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ApplyButtonList_C">();
	}
	static class UApplyButtonList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UApplyButtonList_C>();
	}
};
static_assert(alignof(UApplyButtonList_C) == 0x000008, "Wrong alignment on UApplyButtonList_C");
static_assert(sizeof(UApplyButtonList_C) == 0x0004E8, "Wrong size on UApplyButtonList_C");
static_assert(offsetof(UApplyButtonList_C, UberGraphFrame) == 0x000278, "Member 'UApplyButtonList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UApplyButtonList_C, BorderCannotApply) == 0x000280, "Member 'UApplyButtonList_C::BorderCannotApply' has a wrong offset!");
static_assert(offsetof(UApplyButtonList_C, CmnBtn01Matching) == 0x000288, "Member 'UApplyButtonList_C::CmnBtn01Matching' has a wrong offset!");
static_assert(offsetof(UApplyButtonList_C, CmnBtn01SoloOrParty) == 0x000290, "Member 'UApplyButtonList_C::CmnBtn01SoloOrParty' has a wrong offset!");
static_assert(offsetof(UApplyButtonList_C, CmnBtn16PartyList) == 0x000298, "Member 'UApplyButtonList_C::CmnBtn16PartyList' has a wrong offset!");
static_assert(offsetof(UApplyButtonList_C, SBRuntimeTextBlock_46) == 0x0002A0, "Member 'UApplyButtonList_C::SBRuntimeTextBlock_46' has a wrong offset!");
static_assert(offsetof(UApplyButtonList_C, SizeBoxMatching) == 0x0002A8, "Member 'UApplyButtonList_C::SizeBoxMatching' has a wrong offset!");
static_assert(offsetof(UApplyButtonList_C, SizeBoxPartyList) == 0x0002B0, "Member 'UApplyButtonList_C::SizeBoxPartyList' has a wrong offset!");
static_assert(offsetof(UApplyButtonList_C, SizeBoxSoloOrParty) == 0x0002B8, "Member 'UApplyButtonList_C::SizeBoxSoloOrParty' has a wrong offset!");
static_assert(offsetof(UApplyButtonList_C, OnClickedSoloOrParty) == 0x0002C0, "Member 'UApplyButtonList_C::OnClickedSoloOrParty' has a wrong offset!");
static_assert(offsetof(UApplyButtonList_C, OnClickedMatching) == 0x0002D0, "Member 'UApplyButtonList_C::OnClickedMatching' has a wrong offset!");
static_assert(offsetof(UApplyButtonList_C, OnClickedPartyList) == 0x0002E0, "Member 'UApplyButtonList_C::OnClickedPartyList' has a wrong offset!");
static_assert(offsetof(UApplyButtonList_C, Is_Command_Menu) == 0x0002F0, "Member 'UApplyButtonList_C::Is_Command_Menu' has a wrong offset!");
static_assert(offsetof(UApplyButtonList_C, Map_Info) == 0x0002F8, "Member 'UApplyButtonList_C::Map_Info' has a wrong offset!");
static_assert(offsetof(UApplyButtonList_C, OnClickedHelpMatching) == 0x0004D8, "Member 'UApplyButtonList_C::OnClickedHelpMatching' has a wrong offset!");

}

