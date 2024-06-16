#pragma once

 

// Package: UMG_InputAuthToken

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_InputAuthToken.UMG_InputAuthToken_C
// 0x0030 (0x02A8 - 0x0278)
class UUMG_InputAuthToken_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_Submit;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_176;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBEditableTextBox*                     TextBot_AuthToken;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnInput;                                           // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__Button_Submit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__TextBot_AuthToken_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void ExecuteUbergraph_UMG_InputAuthToken(int32 EntryPoint);
	void OnInput__DelegateSignature(const class FString& InAuthToken);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_InputAuthToken_C">();
	}
	static class UUMG_InputAuthToken_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_InputAuthToken_C>();
	}
};
static_assert(alignof(UUMG_InputAuthToken_C) == 0x000008, "Wrong alignment on UUMG_InputAuthToken_C");
static_assert(sizeof(UUMG_InputAuthToken_C) == 0x0002A8, "Wrong size on UUMG_InputAuthToken_C");
static_assert(offsetof(UUMG_InputAuthToken_C, UberGraphFrame) == 0x000278, "Member 'UUMG_InputAuthToken_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_InputAuthToken_C, Button_Submit) == 0x000280, "Member 'UUMG_InputAuthToken_C::Button_Submit' has a wrong offset!");
static_assert(offsetof(UUMG_InputAuthToken_C, Image_176) == 0x000288, "Member 'UUMG_InputAuthToken_C::Image_176' has a wrong offset!");
static_assert(offsetof(UUMG_InputAuthToken_C, TextBot_AuthToken) == 0x000290, "Member 'UUMG_InputAuthToken_C::TextBot_AuthToken' has a wrong offset!");
static_assert(offsetof(UUMG_InputAuthToken_C, OnInput) == 0x000298, "Member 'UUMG_InputAuthToken_C::OnInput' has a wrong offset!");

}

