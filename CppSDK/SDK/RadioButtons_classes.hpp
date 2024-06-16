#pragma once

 

// Package: RadioButtons

#include "Basic.hpp"

#include "RadioButtonData_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RadioButtons.RadioButtons_C
// 0x0048 (0x02C0 - 0x0278)
class URadioButtons_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           RadioButtons;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FRadioButtonData>               RadioButtonData;                                   // 0x0288(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             SelectButton;                                      // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class URadioButton_C*>                 Buttons;                                           // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class USBTextTableAsset*                      TextDataBase;                                      // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	class URadioButton_C* CreateRadioButton(const struct FRadioButtonData& Param_RadioButtonData, int32 Param_Index);
	void OnSelectButtons();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Changed(bool IsChecked, class URadioButton_C* Checked, int32 Param_Index);
	void SetCheck(int32 Param_Index);
	void InitializeButton();
	void ExecuteUbergraph_RadioButtons(int32 EntryPoint);
	void SelectButton__DelegateSignature(bool IsChecked, class URadioButton_C* RadioButton, int32 Param_Index);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RadioButtons_C">();
	}
	static class URadioButtons_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URadioButtons_C>();
	}
};
static_assert(alignof(URadioButtons_C) == 0x000008, "Wrong alignment on URadioButtons_C");
static_assert(sizeof(URadioButtons_C) == 0x0002C0, "Wrong size on URadioButtons_C");
static_assert(offsetof(URadioButtons_C, UberGraphFrame) == 0x000278, "Member 'URadioButtons_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URadioButtons_C, RadioButtons) == 0x000280, "Member 'URadioButtons_C::RadioButtons' has a wrong offset!");
static_assert(offsetof(URadioButtons_C, RadioButtonData) == 0x000288, "Member 'URadioButtons_C::RadioButtonData' has a wrong offset!");
static_assert(offsetof(URadioButtons_C, SelectButton) == 0x000298, "Member 'URadioButtons_C::SelectButton' has a wrong offset!");
static_assert(offsetof(URadioButtons_C, Buttons) == 0x0002A8, "Member 'URadioButtons_C::Buttons' has a wrong offset!");
static_assert(offsetof(URadioButtons_C, TextDataBase) == 0x0002B8, "Member 'URadioButtons_C::TextDataBase' has a wrong offset!");

}

