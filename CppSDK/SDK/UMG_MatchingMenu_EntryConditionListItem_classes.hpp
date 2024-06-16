#pragma once

 

// Package: UMG_MatchingMenu_EntryConditionListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C
// 0x0070 (0x02E8 - 0x0278)
class UUMG_MatchingMenu_EntryConditionListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                ButtonOpenWindow;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageDoNotMeet;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_H;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RuntimeTextCaption;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RuntimeTextValueSuffix;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextValue;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Passed;                                            // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_8640[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x02B8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         Value;                                             // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          WithValue;                                         // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          WithButton;                                        // 0x02D5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_8641[0x2];                                     // 0x02D6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPressedButton;                                   // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnPressedButton__DelegateSignature(int32 Param_Value, const struct FVector2D& Position);
	void ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem(int32 EntryPoint);
	void BndEvt__UMG_MatchingMenu_EntryConditionListItem_ButtonOpenWindow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void GetPosition(struct FVector2D* OutPosition);
	void SetVisibleUnderline(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MatchingMenu_EntryConditionListItem_C">();
	}
	static class UUMG_MatchingMenu_EntryConditionListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MatchingMenu_EntryConditionListItem_C>();
	}
};
static_assert(alignof(UUMG_MatchingMenu_EntryConditionListItem_C) == 0x000008, "Wrong alignment on UUMG_MatchingMenu_EntryConditionListItem_C");
static_assert(sizeof(UUMG_MatchingMenu_EntryConditionListItem_C) == 0x0002E8, "Wrong size on UUMG_MatchingMenu_EntryConditionListItem_C");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionListItem_C, UberGraphFrame) == 0x000278, "Member 'UUMG_MatchingMenu_EntryConditionListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionListItem_C, ButtonOpenWindow) == 0x000280, "Member 'UUMG_MatchingMenu_EntryConditionListItem_C::ButtonOpenWindow' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionListItem_C, ImageDoNotMeet) == 0x000288, "Member 'UUMG_MatchingMenu_EntryConditionListItem_C::ImageDoNotMeet' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionListItem_C, Line_H) == 0x000290, "Member 'UUMG_MatchingMenu_EntryConditionListItem_C::Line_H' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionListItem_C, RuntimeTextCaption) == 0x000298, "Member 'UUMG_MatchingMenu_EntryConditionListItem_C::RuntimeTextCaption' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionListItem_C, RuntimeTextValueSuffix) == 0x0002A0, "Member 'UUMG_MatchingMenu_EntryConditionListItem_C::RuntimeTextValueSuffix' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionListItem_C, TextValue) == 0x0002A8, "Member 'UUMG_MatchingMenu_EntryConditionListItem_C::TextValue' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionListItem_C, Passed) == 0x0002B0, "Member 'UUMG_MatchingMenu_EntryConditionListItem_C::Passed' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionListItem_C, Text) == 0x0002B8, "Member 'UUMG_MatchingMenu_EntryConditionListItem_C::Text' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionListItem_C, Value) == 0x0002D0, "Member 'UUMG_MatchingMenu_EntryConditionListItem_C::Value' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionListItem_C, WithValue) == 0x0002D4, "Member 'UUMG_MatchingMenu_EntryConditionListItem_C::WithValue' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionListItem_C, WithButton) == 0x0002D5, "Member 'UUMG_MatchingMenu_EntryConditionListItem_C::WithButton' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionListItem_C, OnPressedButton) == 0x0002D8, "Member 'UUMG_MatchingMenu_EntryConditionListItem_C::OnPressedButton' has a wrong offset!");

}

