#pragma once

 

// Package: Sound_ControlItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Sound_ControlItem.Sound_ControlItem_C
// 0x0078 (0x02F0 - 0x0278)
class USound_ControlItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BtnImage;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonSndBtn_C*                      BtnMute;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       Values;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                Volume;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SoundVolume;                                       // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMuted;                                            // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C1C[0x3];                                     // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTexture2D*>                     SoundItemIndex;                                    // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             ValueChanged;                                      // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Index_Sound_ControlItem_C;                         // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_6C1D[0x4];                                     // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             RequestSoundEvent;                                 // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void SetText(const class FString& Text);
	void SetLabelTextId(int32 TextId);
	void UpdateBtn();
	void SetVolume(int32 Param_Volume, bool bMute);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Values_K2Node_ComponentBoundEvent_48_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__Volume_K2Node_ComponentBoundEvent_56_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__BtnMute_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Volume_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature();
	void RequestSound();
	void BndEvt__BtnMute_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BtnMute_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Volume_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature();
	void ExecuteUbergraph_Sound_ControlItem(int32 EntryPoint);
	void RequestSoundEvent__DelegateSignature(int32 Param_Index);
	void ValueChanged__DelegateSignature(int32 Param_Index, int32 Param_Volume, bool bMute);

	void GetRate(float* Rate) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Sound_ControlItem_C">();
	}
	static class USound_ControlItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USound_ControlItem_C>();
	}
};
static_assert(alignof(USound_ControlItem_C) == 0x000008, "Wrong alignment on USound_ControlItem_C");
static_assert(sizeof(USound_ControlItem_C) == 0x0002F0, "Wrong size on USound_ControlItem_C");
static_assert(offsetof(USound_ControlItem_C, UberGraphFrame) == 0x000278, "Member 'USound_ControlItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USound_ControlItem_C, BtnImage) == 0x000280, "Member 'USound_ControlItem_C::BtnImage' has a wrong offset!");
static_assert(offsetof(USound_ControlItem_C, BtnMute) == 0x000288, "Member 'USound_ControlItem_C::BtnMute' has a wrong offset!");
static_assert(offsetof(USound_ControlItem_C, Image_0) == 0x000290, "Member 'USound_ControlItem_C::Image_0' has a wrong offset!");
static_assert(offsetof(USound_ControlItem_C, Label) == 0x000298, "Member 'USound_ControlItem_C::Label' has a wrong offset!");
static_assert(offsetof(USound_ControlItem_C, Values) == 0x0002A0, "Member 'USound_ControlItem_C::Values' has a wrong offset!");
static_assert(offsetof(USound_ControlItem_C, Volume) == 0x0002A8, "Member 'USound_ControlItem_C::Volume' has a wrong offset!");
static_assert(offsetof(USound_ControlItem_C, SoundVolume) == 0x0002B0, "Member 'USound_ControlItem_C::SoundVolume' has a wrong offset!");
static_assert(offsetof(USound_ControlItem_C, bMuted) == 0x0002B4, "Member 'USound_ControlItem_C::bMuted' has a wrong offset!");
static_assert(offsetof(USound_ControlItem_C, SoundItemIndex) == 0x0002B8, "Member 'USound_ControlItem_C::SoundItemIndex' has a wrong offset!");
static_assert(offsetof(USound_ControlItem_C, ValueChanged) == 0x0002C8, "Member 'USound_ControlItem_C::ValueChanged' has a wrong offset!");
static_assert(offsetof(USound_ControlItem_C, Index_Sound_ControlItem_C) == 0x0002D8, "Member 'USound_ControlItem_C::Index_Sound_ControlItem_C' has a wrong offset!");
static_assert(offsetof(USound_ControlItem_C, RequestSoundEvent) == 0x0002E0, "Member 'USound_ControlItem_C::RequestSoundEvent' has a wrong offset!");

}

