#pragma once

 

// Package: DsState

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DsState.DsState_C
// 0x00A8 (0x0330 - 0x0288)
class UDsState_C final : public USBDsStateWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimCountTextLoop;                                 // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimCountDownPinch;                                // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimCountDown;                                     // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimEffect;                                        // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimCount_B;                                       // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_UI;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Count_10;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Count_01;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Count_S01;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Count_S10;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Effect1;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                ForEditMode;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsDsState;                                        // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7464[0x7];                                     // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTexture2D*>                     NumberTex;                                         // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UTexture2D*>                     ShadowTex;                                         // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         CountType;                                         // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DsState(int32 EntryPoint);
	void WidgetAnimationEvt_AnimCountDown_K2Node_WidgetAnimationEvent_2();
	void WidgetAnimationEvt_AnimCountDownPinch_K2Node_WidgetAnimationEvent_0();
	void OnChangeEffect(int32 Param_Index);
	void OnSetCount(int32 Count);
	void OnHide();
	void OnShow();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Construct();
	void Show();
	void Hide();
	void SetCount(int32 InCount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DsState_C">();
	}
	static class UDsState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDsState_C>();
	}
};
static_assert(alignof(UDsState_C) == 0x000008, "Wrong alignment on UDsState_C");
static_assert(sizeof(UDsState_C) == 0x000330, "Wrong size on UDsState_C");
static_assert(offsetof(UDsState_C, UberGraphFrame) == 0x000288, "Member 'UDsState_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDsState_C, AnimCountTextLoop) == 0x000290, "Member 'UDsState_C::AnimCountTextLoop' has a wrong offset!");
static_assert(offsetof(UDsState_C, AnimCountDownPinch) == 0x000298, "Member 'UDsState_C::AnimCountDownPinch' has a wrong offset!");
static_assert(offsetof(UDsState_C, AnimCountDown) == 0x0002A0, "Member 'UDsState_C::AnimCountDown' has a wrong offset!");
static_assert(offsetof(UDsState_C, AnimEffect) == 0x0002A8, "Member 'UDsState_C::AnimEffect' has a wrong offset!");
static_assert(offsetof(UDsState_C, AnimCount_B) == 0x0002B0, "Member 'UDsState_C::AnimCount_B' has a wrong offset!");
static_assert(offsetof(UDsState_C, AnimOut) == 0x0002B8, "Member 'UDsState_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UDsState_C, AnimIn) == 0x0002C0, "Member 'UDsState_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UDsState_C, CanvasPanel_UI) == 0x0002C8, "Member 'UDsState_C::CanvasPanel_UI' has a wrong offset!");
static_assert(offsetof(UDsState_C, Count_10) == 0x0002D0, "Member 'UDsState_C::Count_10' has a wrong offset!");
static_assert(offsetof(UDsState_C, Count_01) == 0x0002D8, "Member 'UDsState_C::Count_01' has a wrong offset!");
static_assert(offsetof(UDsState_C, Count_S01) == 0x0002E0, "Member 'UDsState_C::Count_S01' has a wrong offset!");
static_assert(offsetof(UDsState_C, Count_S10) == 0x0002E8, "Member 'UDsState_C::Count_S10' has a wrong offset!");
static_assert(offsetof(UDsState_C, Effect1) == 0x0002F0, "Member 'UDsState_C::Effect1' has a wrong offset!");
static_assert(offsetof(UDsState_C, ForEditMode) == 0x0002F8, "Member 'UDsState_C::ForEditMode' has a wrong offset!");
static_assert(offsetof(UDsState_C, bIsDsState) == 0x000300, "Member 'UDsState_C::bIsDsState' has a wrong offset!");
static_assert(offsetof(UDsState_C, NumberTex) == 0x000308, "Member 'UDsState_C::NumberTex' has a wrong offset!");
static_assert(offsetof(UDsState_C, ShadowTex) == 0x000318, "Member 'UDsState_C::ShadowTex' has a wrong offset!");
static_assert(offsetof(UDsState_C, CountType) == 0x000328, "Member 'UDsState_C::CountType' has a wrong offset!");

}

