#pragma once

 

// Package: Filter_ProtectorEquipPosition

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C
// 0x0010 (0x0298 - 0x0288)
class UFilter_ProtectorEquipPosition_C final : public USBItemFilterWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFilterRadioButtons_C*                  FilterRadioButtons;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Filter_ProtectorEquipPosition(int32 EntryPoint);
	void BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature(bool IsChecked, class UFilterRadioButton_C* RadioButton, int32 Param_Index);
	void ResetAll();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Generate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Filter_ProtectorEquipPosition_C">();
	}
	static class UFilter_ProtectorEquipPosition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFilter_ProtectorEquipPosition_C>();
	}
};
static_assert(alignof(UFilter_ProtectorEquipPosition_C) == 0x000008, "Wrong alignment on UFilter_ProtectorEquipPosition_C");
static_assert(sizeof(UFilter_ProtectorEquipPosition_C) == 0x000298, "Wrong size on UFilter_ProtectorEquipPosition_C");
static_assert(offsetof(UFilter_ProtectorEquipPosition_C, UberGraphFrame) == 0x000288, "Member 'UFilter_ProtectorEquipPosition_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFilter_ProtectorEquipPosition_C, FilterRadioButtons) == 0x000290, "Member 'UFilter_ProtectorEquipPosition_C::FilterRadioButtons' has a wrong offset!");

}

