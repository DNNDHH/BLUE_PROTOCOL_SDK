#pragma once

 

// Package: DialogButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DialogButton.DialogButton_C
// 0x0038 (0x02B0 - 0x0278)
class UDialogButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    Label_Contents;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         TextId;                                            // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_5579[0x4];                                     // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          ClickedSeAsset;                                    // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClicked__DelegateSignature(class UUserWidget* InButtonWidget);
	void ExecuteUbergraph_DialogButton(int32 EntryPoint);
	void BndEvt__SBButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DialogButton_C">();
	}
	static class UDialogButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDialogButton_C>();
	}
};
static_assert(alignof(UDialogButton_C) == 0x000008, "Wrong alignment on UDialogButton_C");
static_assert(sizeof(UDialogButton_C) == 0x0002B0, "Wrong size on UDialogButton_C");
static_assert(offsetof(UDialogButton_C, UberGraphFrame) == 0x000278, "Member 'UDialogButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDialogButton_C, Label_Contents) == 0x000280, "Member 'UDialogButton_C::Label_Contents' has a wrong offset!");
static_assert(offsetof(UDialogButton_C, SBButton) == 0x000288, "Member 'UDialogButton_C::SBButton' has a wrong offset!");
static_assert(offsetof(UDialogButton_C, OnClicked) == 0x000290, "Member 'UDialogButton_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UDialogButton_C, TextId) == 0x0002A0, "Member 'UDialogButton_C::TextId' has a wrong offset!");
static_assert(offsetof(UDialogButton_C, ClickedSeAsset) == 0x0002A8, "Member 'UDialogButton_C::ClickedSeAsset' has a wrong offset!");

}

