#pragma once

 

// Package: HudPresetSelect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LayoutPresetTypes_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HudPresetSelect.HudPresetSelect_C
// 0x00F0 (0x0368 - 0x0278)
class UHudPresetSelect_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnBtn05_C*                            BtnCancel;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn05_C*                            BtnCS1;                                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn05_C*                            BtnCS2;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn05_C*                            BtnCS3;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn05_C*                            BtnPreset1;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn05_C*                            BtnPreset2;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn05_C*                            BtnPreset3;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_103;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, ELayoutPresetTypes>       TypeStorage;                                       // 0x02D8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             ApplyPreset;                                       // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             LoadCustomSlot;                                    // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ELayoutPresetTypes                            PresetType;                                        // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCustomHudLayoutSlot                        CustomSlotType;                                    // 0x0349(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_743F[0x6];                                     // 0x034A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsCancel;                                         // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ApplyPreset__DelegateSignature(ELayoutPresetTypes ELayoutPreset);
	void LoadCustomSlot__DelegateSignature(ESBCustomHudLayoutSlot Param_LoadCustomSlot);
	void OnClose__DelegateSignature(bool Param_bIsCancel);
	void ExecuteUbergraph_HudPresetSelect(int32 EntryPoint);
	void RequestClose();
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1();
	void PlayCloseAnimation();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__BtnCS3_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature();
	void BndEvt__BtnCS2_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature();
	void BndEvt__BtnCS1_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature();
	void BndEvt__BtnCancel_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature();
	void BndEvt__BtnPreset3_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature();
	void BndEvt__BtnPreset2_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature();
	void BndEvt__BtnPreset1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void Destruct();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void LoadCustomSaveName();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HudPresetSelect_C">();
	}
	static class UHudPresetSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHudPresetSelect_C>();
	}
};
static_assert(alignof(UHudPresetSelect_C) == 0x000008, "Wrong alignment on UHudPresetSelect_C");
static_assert(sizeof(UHudPresetSelect_C) == 0x000368, "Wrong size on UHudPresetSelect_C");
static_assert(offsetof(UHudPresetSelect_C, UberGraphFrame) == 0x000278, "Member 'UHudPresetSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHudPresetSelect_C, AnimOut) == 0x000280, "Member 'UHudPresetSelect_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UHudPresetSelect_C, AnimIn) == 0x000288, "Member 'UHudPresetSelect_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UHudPresetSelect_C, BtnCancel) == 0x000290, "Member 'UHudPresetSelect_C::BtnCancel' has a wrong offset!");
static_assert(offsetof(UHudPresetSelect_C, BtnCS1) == 0x000298, "Member 'UHudPresetSelect_C::BtnCS1' has a wrong offset!");
static_assert(offsetof(UHudPresetSelect_C, BtnCS2) == 0x0002A0, "Member 'UHudPresetSelect_C::BtnCS2' has a wrong offset!");
static_assert(offsetof(UHudPresetSelect_C, BtnCS3) == 0x0002A8, "Member 'UHudPresetSelect_C::BtnCS3' has a wrong offset!");
static_assert(offsetof(UHudPresetSelect_C, BtnPreset1) == 0x0002B0, "Member 'UHudPresetSelect_C::BtnPreset1' has a wrong offset!");
static_assert(offsetof(UHudPresetSelect_C, BtnPreset2) == 0x0002B8, "Member 'UHudPresetSelect_C::BtnPreset2' has a wrong offset!");
static_assert(offsetof(UHudPresetSelect_C, BtnPreset3) == 0x0002C0, "Member 'UHudPresetSelect_C::BtnPreset3' has a wrong offset!");
static_assert(offsetof(UHudPresetSelect_C, Image_103) == 0x0002C8, "Member 'UHudPresetSelect_C::Image_103' has a wrong offset!");
static_assert(offsetof(UHudPresetSelect_C, UIBlocker) == 0x0002D0, "Member 'UHudPresetSelect_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UHudPresetSelect_C, TypeStorage) == 0x0002D8, "Member 'UHudPresetSelect_C::TypeStorage' has a wrong offset!");
static_assert(offsetof(UHudPresetSelect_C, ApplyPreset) == 0x000328, "Member 'UHudPresetSelect_C::ApplyPreset' has a wrong offset!");
static_assert(offsetof(UHudPresetSelect_C, LoadCustomSlot) == 0x000338, "Member 'UHudPresetSelect_C::LoadCustomSlot' has a wrong offset!");
static_assert(offsetof(UHudPresetSelect_C, PresetType) == 0x000348, "Member 'UHudPresetSelect_C::PresetType' has a wrong offset!");
static_assert(offsetof(UHudPresetSelect_C, CustomSlotType) == 0x000349, "Member 'UHudPresetSelect_C::CustomSlotType' has a wrong offset!");
static_assert(offsetof(UHudPresetSelect_C, OnClose) == 0x000350, "Member 'UHudPresetSelect_C::OnClose' has a wrong offset!");
static_assert(offsetof(UHudPresetSelect_C, bIsCancel) == 0x000360, "Member 'UHudPresetSelect_C::bIsCancel' has a wrong offset!");

}

