#pragma once

 

// Package: FilterRadioButtons

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FilterRadioButtonData_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FilterRadioButtons.FilterRadioButtons_C
// 0x0048 (0x02C0 - 0x0278)
class UFilterRadioButtons_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           RadioButtons;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FFilterRadioButtonData>         RadioButtonData;                                   // 0x0288(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             SelectButton;                                      // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UFilterRadioButton_C*>           Buttons;                                           // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class USBTextTableAsset*                      TextDataBase;                                      // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void SelectButton__DelegateSignature(bool IsChecked, class UFilterRadioButton_C* RadioButton, int32 Param_Index);
	void ExecuteUbergraph_FilterRadioButtons(int32 EntryPoint);
	void InitializeButton();
	void SetCheck(int32 Param_Index);
	void Changed(bool IsChecked, class UFilterRadioButton_C* Checked, int32 Param_Index);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnSelectButtons();
	class UFilterRadioButton_C* CreateRadioButton(const struct FFilterRadioButtonData& Param_RadioButtonData, int32 Param_Index);
	void SetChildWidthOverride(float InWidth, float InHeight);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FilterRadioButtons_C">();
	}
	static class UFilterRadioButtons_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFilterRadioButtons_C>();
	}
};
static_assert(alignof(UFilterRadioButtons_C) == 0x000008, "Wrong alignment on UFilterRadioButtons_C");
static_assert(sizeof(UFilterRadioButtons_C) == 0x0002C0, "Wrong size on UFilterRadioButtons_C");
static_assert(offsetof(UFilterRadioButtons_C, UberGraphFrame) == 0x000278, "Member 'UFilterRadioButtons_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFilterRadioButtons_C, RadioButtons) == 0x000280, "Member 'UFilterRadioButtons_C::RadioButtons' has a wrong offset!");
static_assert(offsetof(UFilterRadioButtons_C, RadioButtonData) == 0x000288, "Member 'UFilterRadioButtons_C::RadioButtonData' has a wrong offset!");
static_assert(offsetof(UFilterRadioButtons_C, SelectButton) == 0x000298, "Member 'UFilterRadioButtons_C::SelectButton' has a wrong offset!");
static_assert(offsetof(UFilterRadioButtons_C, Buttons) == 0x0002A8, "Member 'UFilterRadioButtons_C::Buttons' has a wrong offset!");
static_assert(offsetof(UFilterRadioButtons_C, TextDataBase) == 0x0002B8, "Member 'UFilterRadioButtons_C::TextDataBase' has a wrong offset!");

}

