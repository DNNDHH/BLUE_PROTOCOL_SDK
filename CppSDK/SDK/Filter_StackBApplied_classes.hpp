#pragma once

 

// Package: Filter_StackBApplied

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Filter_StackBApplied.Filter_StackBApplied_C
// 0x0010 (0x0298 - 0x0288)
class UFilter_StackBApplied_C final : public USBItemFilterWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFilterRadioButtons_C*                  FilterRadioButtons;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Filter_StackBApplied(int32 EntryPoint);
	void BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature(bool IsChecked, class UFilterRadioButton_C* RadioButton, int32 Param_Index);
	void ResetAll();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Filter_StackBApplied_C">();
	}
	static class UFilter_StackBApplied_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFilter_StackBApplied_C>();
	}
};
static_assert(alignof(UFilter_StackBApplied_C) == 0x000008, "Wrong alignment on UFilter_StackBApplied_C");
static_assert(sizeof(UFilter_StackBApplied_C) == 0x000298, "Wrong size on UFilter_StackBApplied_C");
static_assert(offsetof(UFilter_StackBApplied_C, UberGraphFrame) == 0x000288, "Member 'UFilter_StackBApplied_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFilter_StackBApplied_C, FilterRadioButtons) == 0x000290, "Member 'UFilter_StackBApplied_C::FilterRadioButtons' has a wrong offset!");

}
