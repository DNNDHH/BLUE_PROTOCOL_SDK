#pragma once

 

// Package: BookmarkDelete

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BookmarkDelete.BookmarkDelete_C
// 0x0028 (0x02A0 - 0x0278)
class UBookmarkDelete_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_Clear;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_55;                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnRequestBookmarkClear;                            // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__Btn_Clear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn_Clear_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn_Clear_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_BookmarkDelete(int32 EntryPoint);
	void OnRequestBookmarkClear__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BookmarkDelete_C">();
	}
	static class UBookmarkDelete_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBookmarkDelete_C>();
	}
};
static_assert(alignof(UBookmarkDelete_C) == 0x000008, "Wrong alignment on UBookmarkDelete_C");
static_assert(sizeof(UBookmarkDelete_C) == 0x0002A0, "Wrong size on UBookmarkDelete_C");
static_assert(offsetof(UBookmarkDelete_C, UberGraphFrame) == 0x000278, "Member 'UBookmarkDelete_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBookmarkDelete_C, Btn_Clear) == 0x000280, "Member 'UBookmarkDelete_C::Btn_Clear' has a wrong offset!");
static_assert(offsetof(UBookmarkDelete_C, SBRuntimeTextBlock_55) == 0x000288, "Member 'UBookmarkDelete_C::SBRuntimeTextBlock_55' has a wrong offset!");
static_assert(offsetof(UBookmarkDelete_C, OnRequestBookmarkClear) == 0x000290, "Member 'UBookmarkDelete_C::OnRequestBookmarkClear' has a wrong offset!");

}

