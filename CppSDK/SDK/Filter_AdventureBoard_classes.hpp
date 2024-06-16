#pragma once

 

// Package: Filter_AdventureBoard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "FilterRadioButtonData_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Filter_AdventureBoard.Filter_AdventureBoard_C
// 0x0050 (0x02D8 - 0x0288)
class UFilter_AdventureBoard_C final : public USBItemFilterWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           FilterBG_VerticalBox;                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilterRadioButtons_C*                  FilterRadioButtons;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FFilterRadioButtonData>         BuuttonPreset;                                     // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ClassFilterStartIndex;                             // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88F1[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBClassType>                          ClassTypeList;                                     // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<ESBClassType>                          ClassTypeList_0;                                   // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Filter_AdventureBoard(int32 EntryPoint);
	void ResetAll();
	void BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature(bool IsChecked, class UFilterRadioButton_C* RadioButton, int32 Param_Index);
	void Construct();
	void CreateFilterList();
	void IsFilterActive(int32 InIndex, bool* IsActive);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Filter_AdventureBoard_C">();
	}
	static class UFilter_AdventureBoard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFilter_AdventureBoard_C>();
	}
};
static_assert(alignof(UFilter_AdventureBoard_C) == 0x000008, "Wrong alignment on UFilter_AdventureBoard_C");
static_assert(sizeof(UFilter_AdventureBoard_C) == 0x0002D8, "Wrong size on UFilter_AdventureBoard_C");
static_assert(offsetof(UFilter_AdventureBoard_C, UberGraphFrame) == 0x000288, "Member 'UFilter_AdventureBoard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFilter_AdventureBoard_C, FilterBG_VerticalBox) == 0x000290, "Member 'UFilter_AdventureBoard_C::FilterBG_VerticalBox' has a wrong offset!");
static_assert(offsetof(UFilter_AdventureBoard_C, FilterRadioButtons) == 0x000298, "Member 'UFilter_AdventureBoard_C::FilterRadioButtons' has a wrong offset!");
static_assert(offsetof(UFilter_AdventureBoard_C, BuuttonPreset) == 0x0002A0, "Member 'UFilter_AdventureBoard_C::BuuttonPreset' has a wrong offset!");
static_assert(offsetof(UFilter_AdventureBoard_C, ClassFilterStartIndex) == 0x0002B0, "Member 'UFilter_AdventureBoard_C::ClassFilterStartIndex' has a wrong offset!");
static_assert(offsetof(UFilter_AdventureBoard_C, ClassTypeList) == 0x0002B8, "Member 'UFilter_AdventureBoard_C::ClassTypeList' has a wrong offset!");
static_assert(offsetof(UFilter_AdventureBoard_C, ClassTypeList_0) == 0x0002C8, "Member 'UFilter_AdventureBoard_C::ClassTypeList_0' has a wrong offset!");

}

