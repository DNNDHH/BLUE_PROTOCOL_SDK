#pragma once

 

// Package: SortBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SortTypeCategory_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SortBox.SortBox_C
// 0x0090 (0x0308 - 0x0278)
class USortBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBComboBox_C*                          Cmb_Drop;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<ESBItemSortType>                       SortType;                                          // 0x0288(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, ESBItemSortType>          SortText;                                          // 0x0298(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnSelectSortType;                                  // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ESBSortFilterSaveType                         SaveType;                                          // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESortTypeCategory                             SortTypeCategory;                                  // 0x02F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_42F3[0x2];                                     // 0x02FA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CBoxWidth;                                         // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bGenerating;                                       // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnSelectSortType__DelegateSignature(ESBItemSortType Param_SortType);
	void ExecuteUbergraph_SortBox(int32 EntryPoint);
	void BndEvt__Cmb_Drop_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	class UWidget* On_Cmb_Drop_GenerateWidget_0(const class FString& Item);
	void GetSortType(ESBItemSortType* OutSortType);
	void RemoveOption(ESBItemSortType InOptionType);
	void GenerateOptions();
	void LoadOptions();
	void SetSortType(ESBSortFilterSaveType Param_SaveType, ESortTypeCategory Param_SortTypeCategory);
	void SetSelectedSortType(ESBItemSortType InSortType);

	void GetSortTextId(ESBItemSortType Param_SortType, int32* TextId) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SortBox_C">();
	}
	static class USortBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USortBox_C>();
	}
};
static_assert(alignof(USortBox_C) == 0x000008, "Wrong alignment on USortBox_C");
static_assert(sizeof(USortBox_C) == 0x000308, "Wrong size on USortBox_C");
static_assert(offsetof(USortBox_C, UberGraphFrame) == 0x000278, "Member 'USortBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USortBox_C, Cmb_Drop) == 0x000280, "Member 'USortBox_C::Cmb_Drop' has a wrong offset!");
static_assert(offsetof(USortBox_C, SortType) == 0x000288, "Member 'USortBox_C::SortType' has a wrong offset!");
static_assert(offsetof(USortBox_C, SortText) == 0x000298, "Member 'USortBox_C::SortText' has a wrong offset!");
static_assert(offsetof(USortBox_C, OnSelectSortType) == 0x0002E8, "Member 'USortBox_C::OnSelectSortType' has a wrong offset!");
static_assert(offsetof(USortBox_C, SaveType) == 0x0002F8, "Member 'USortBox_C::SaveType' has a wrong offset!");
static_assert(offsetof(USortBox_C, SortTypeCategory) == 0x0002F9, "Member 'USortBox_C::SortTypeCategory' has a wrong offset!");
static_assert(offsetof(USortBox_C, CBoxWidth) == 0x0002FC, "Member 'USortBox_C::CBoxWidth' has a wrong offset!");
static_assert(offsetof(USortBox_C, bGenerating) == 0x000300, "Member 'USortBox_C::bGenerating' has a wrong offset!");

}

