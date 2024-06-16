#pragma once

 

// Package: MapWidget_CompoundBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_CompoundBox.MapWidget_CompoundBox_C
// 0x0070 (0x02E8 - 0x0278)
class UMapWidget_CompoundBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Bg1;                                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasForOptionWidget;                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBox_C*                          SBComboBox;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_OptionWidget;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TitleLabel;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnItemSelected;                                    // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUserWidget*                            OptionWidget;                                      // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnListBoxOpened;                                   // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnListBoxClosed;                                   // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsSelectOpen;                                     // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnItemSelected__DelegateSignature(const class FString& InSelectedItemName, int32 InSelectedItemId);
	void OnListBoxOpened__DelegateSignature();
	void OnListBoxClosed__DelegateSignature();
	void ExecuteUbergraph_MapWidget_CompoundBox(int32 EntryPoint);
	void BndEvt__SBComboBox_K2Node_ComponentBoundEvent_3_OnClosingEvent__DelegateSignature();
	void BndEvt__SBComboBox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature();
	void BndEvt__SBComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void Destruct();
	void AddItemToComboBox(const class FString& InItemName);
	void SetComboBoxItemSelected(const class FString& InItemName);
	void SetWidgetToOptionCanvas(class UUserWidget* InUserWidget);
	void SetOptionWidgetVisibility(bool Param_IsVisible);
	void SetTitleText(const class FText& InText);
	void SetTitleTextId(int32 InTextID);
	void SetComboBoxEnable(bool IsEnable);
	class UWidget* On_CBox_1_GenerateWidget_0(const class FString& Item);
	void ClearComboBox();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_CompoundBox_C">();
	}
	static class UMapWidget_CompoundBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_CompoundBox_C>();
	}
};
static_assert(alignof(UMapWidget_CompoundBox_C) == 0x000008, "Wrong alignment on UMapWidget_CompoundBox_C");
static_assert(sizeof(UMapWidget_CompoundBox_C) == 0x0002E8, "Wrong size on UMapWidget_CompoundBox_C");
static_assert(offsetof(UMapWidget_CompoundBox_C, UberGraphFrame) == 0x000278, "Member 'UMapWidget_CompoundBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapWidget_CompoundBox_C, Bg1) == 0x000280, "Member 'UMapWidget_CompoundBox_C::Bg1' has a wrong offset!");
static_assert(offsetof(UMapWidget_CompoundBox_C, CanvasForOptionWidget) == 0x000288, "Member 'UMapWidget_CompoundBox_C::CanvasForOptionWidget' has a wrong offset!");
static_assert(offsetof(UMapWidget_CompoundBox_C, SBComboBox) == 0x000290, "Member 'UMapWidget_CompoundBox_C::SBComboBox' has a wrong offset!");
static_assert(offsetof(UMapWidget_CompoundBox_C, SizeBox_OptionWidget) == 0x000298, "Member 'UMapWidget_CompoundBox_C::SizeBox_OptionWidget' has a wrong offset!");
static_assert(offsetof(UMapWidget_CompoundBox_C, TitleLabel) == 0x0002A0, "Member 'UMapWidget_CompoundBox_C::TitleLabel' has a wrong offset!");
static_assert(offsetof(UMapWidget_CompoundBox_C, OnItemSelected) == 0x0002A8, "Member 'UMapWidget_CompoundBox_C::OnItemSelected' has a wrong offset!");
static_assert(offsetof(UMapWidget_CompoundBox_C, OptionWidget) == 0x0002B8, "Member 'UMapWidget_CompoundBox_C::OptionWidget' has a wrong offset!");
static_assert(offsetof(UMapWidget_CompoundBox_C, OnListBoxOpened) == 0x0002C0, "Member 'UMapWidget_CompoundBox_C::OnListBoxOpened' has a wrong offset!");
static_assert(offsetof(UMapWidget_CompoundBox_C, OnListBoxClosed) == 0x0002D0, "Member 'UMapWidget_CompoundBox_C::OnListBoxClosed' has a wrong offset!");
static_assert(offsetof(UMapWidget_CompoundBox_C, bIsSelectOpen) == 0x0002E0, "Member 'UMapWidget_CompoundBox_C::bIsSelectOpen' has a wrong offset!");

}

