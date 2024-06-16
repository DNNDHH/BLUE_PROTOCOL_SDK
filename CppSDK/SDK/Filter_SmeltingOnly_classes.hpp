#pragma once

 

// Package: Filter_SmeltingOnly

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Filter_SmeltingOnly.Filter_SmeltingOnly_C
// 0x0010 (0x0298 - 0x0288)
class UFilter_SmeltingOnly_C final : public USBItemFilterWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFilterRadioButtons_C*                  FilterRadioButtons;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Filter_SmeltingOnly(int32 EntryPoint);
	void ResetAll();
	void BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature(bool IsChecked, class UFilterRadioButton_C* RadioButton, int32 Param_Index);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Filter_SmeltingOnly_C">();
	}
	static class UFilter_SmeltingOnly_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFilter_SmeltingOnly_C>();
	}
};
static_assert(alignof(UFilter_SmeltingOnly_C) == 0x000008, "Wrong alignment on UFilter_SmeltingOnly_C");
static_assert(sizeof(UFilter_SmeltingOnly_C) == 0x000298, "Wrong size on UFilter_SmeltingOnly_C");
static_assert(offsetof(UFilter_SmeltingOnly_C, UberGraphFrame) == 0x000288, "Member 'UFilter_SmeltingOnly_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFilter_SmeltingOnly_C, FilterRadioButtons) == 0x000290, "Member 'UFilter_SmeltingOnly_C::FilterRadioButtons' has a wrong offset!");

}

