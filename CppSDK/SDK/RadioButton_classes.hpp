#pragma once

 

// Package: RadioButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RadioButton.RadioButton_C
// 0x0040 (0x02B8 - 0x0278)
class URadioButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBCheckBox_C*                          CheckBox_64;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Texts;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                UIBlocker;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ChangeChecked;                                     // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Index_RadioButton_C;                               // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         TextId;                                            // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class USBTextTableAsset*                      TextDataBase;                                      // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ChangeChecked__DelegateSignature(bool IsChecked, class URadioButton_C* Checked, int32 Param_Index);
	void ExecuteUbergraph_RadioButton(int32 EntryPoint);
	void SetCheckedStyle(ECheckBoxState InCheckedState);
	void SetChecked(bool InIsChecked);
	void SetTextId(int32 InTextID);
	void SetText(const class FText& InText);
	void BndEvt__CheckBox_64_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RadioButton_C">();
	}
	static class URadioButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URadioButton_C>();
	}
};
static_assert(alignof(URadioButton_C) == 0x000008, "Wrong alignment on URadioButton_C");
static_assert(sizeof(URadioButton_C) == 0x0002B8, "Wrong size on URadioButton_C");
static_assert(offsetof(URadioButton_C, UberGraphFrame) == 0x000278, "Member 'URadioButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URadioButton_C, CheckBox_64) == 0x000280, "Member 'URadioButton_C::CheckBox_64' has a wrong offset!");
static_assert(offsetof(URadioButton_C, Texts) == 0x000288, "Member 'URadioButton_C::Texts' has a wrong offset!");
static_assert(offsetof(URadioButton_C, UIBlocker) == 0x000290, "Member 'URadioButton_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(URadioButton_C, ChangeChecked) == 0x000298, "Member 'URadioButton_C::ChangeChecked' has a wrong offset!");
static_assert(offsetof(URadioButton_C, Index_RadioButton_C) == 0x0002A8, "Member 'URadioButton_C::Index_RadioButton_C' has a wrong offset!");
static_assert(offsetof(URadioButton_C, TextId) == 0x0002AC, "Member 'URadioButton_C::TextId' has a wrong offset!");
static_assert(offsetof(URadioButton_C, TextDataBase) == 0x0002B0, "Member 'URadioButton_C::TextDataBase' has a wrong offset!");

}

