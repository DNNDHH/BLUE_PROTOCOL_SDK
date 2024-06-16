#pragma once

 

// Package: NumberInputBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NumberInputBase.NumberInputBase_C
// 0x0068 (0x02E0 - 0x0278)
class UNumberInputBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         Value;                                             // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ValueMax;                                          // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ValueMin;                                          // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RepeatPlus;                                        // 0x028C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RepeatMinus;                                       // 0x028D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_951F[0x2];                                     // 0x028E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnValueChanged;                                    // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UTextBlock*                             TextValue;                                         // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                ButtonPlus;                                        // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                ButtonMinus;                                       // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimerHandlePressed;                                // 0x02B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimerHandleRepeat;                                 // 0x02C0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         WorkChangeValue;                                   // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9520[0x4];                                     // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                ButtonMax;                                         // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                ButtonMin;                                         // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnValueChanged__DelegateSignature(int32 Param_Value);
	void ExecuteUbergraph_NumberInputBase(int32 EntryPoint);
	void Event_OnValueChanged();
	void OnClickedMinButton();
	void OnClickedMaxButton();
	void ChangeValue(int32 InChangeValue);
	void UpdateButtonStatus();
	void ClearHandle();
	void OnReleaseMinusButton();
	void OnPressMinusButton();
	void OnReleasePlusButton();
	void OnPressPlusButton();
	void StartRepeatMinus();
	void StartRepeatPlus();
	void NumberMinus();
	void NumberPlus();
	void Construct();
	void GetValue(int32* Number);
	void InitializeValue(int32 Number, int32 NumberMin, int32 NumberMax);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NumberInputBase_C">();
	}
	static class UNumberInputBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNumberInputBase_C>();
	}
};
static_assert(alignof(UNumberInputBase_C) == 0x000008, "Wrong alignment on UNumberInputBase_C");
static_assert(sizeof(UNumberInputBase_C) == 0x0002E0, "Wrong size on UNumberInputBase_C");
static_assert(offsetof(UNumberInputBase_C, UberGraphFrame) == 0x000278, "Member 'UNumberInputBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNumberInputBase_C, Value) == 0x000280, "Member 'UNumberInputBase_C::Value' has a wrong offset!");
static_assert(offsetof(UNumberInputBase_C, ValueMax) == 0x000284, "Member 'UNumberInputBase_C::ValueMax' has a wrong offset!");
static_assert(offsetof(UNumberInputBase_C, ValueMin) == 0x000288, "Member 'UNumberInputBase_C::ValueMin' has a wrong offset!");
static_assert(offsetof(UNumberInputBase_C, RepeatPlus) == 0x00028C, "Member 'UNumberInputBase_C::RepeatPlus' has a wrong offset!");
static_assert(offsetof(UNumberInputBase_C, RepeatMinus) == 0x00028D, "Member 'UNumberInputBase_C::RepeatMinus' has a wrong offset!");
static_assert(offsetof(UNumberInputBase_C, OnValueChanged) == 0x000290, "Member 'UNumberInputBase_C::OnValueChanged' has a wrong offset!");
static_assert(offsetof(UNumberInputBase_C, TextValue) == 0x0002A0, "Member 'UNumberInputBase_C::TextValue' has a wrong offset!");
static_assert(offsetof(UNumberInputBase_C, ButtonPlus) == 0x0002A8, "Member 'UNumberInputBase_C::ButtonPlus' has a wrong offset!");
static_assert(offsetof(UNumberInputBase_C, ButtonMinus) == 0x0002B0, "Member 'UNumberInputBase_C::ButtonMinus' has a wrong offset!");
static_assert(offsetof(UNumberInputBase_C, TimerHandlePressed) == 0x0002B8, "Member 'UNumberInputBase_C::TimerHandlePressed' has a wrong offset!");
static_assert(offsetof(UNumberInputBase_C, TimerHandleRepeat) == 0x0002C0, "Member 'UNumberInputBase_C::TimerHandleRepeat' has a wrong offset!");
static_assert(offsetof(UNumberInputBase_C, WorkChangeValue) == 0x0002C8, "Member 'UNumberInputBase_C::WorkChangeValue' has a wrong offset!");
static_assert(offsetof(UNumberInputBase_C, ButtonMax) == 0x0002D0, "Member 'UNumberInputBase_C::ButtonMax' has a wrong offset!");
static_assert(offsetof(UNumberInputBase_C, ButtonMin) == 0x0002D8, "Member 'UNumberInputBase_C::ButtonMin' has a wrong offset!");

}

