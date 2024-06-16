#pragma once

 

// Package: FilterRadioButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FilterRadioButton.FilterRadioButton_C
// 0x0050 (0x02C8 - 0x0278)
class UFilterRadioButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBCheckBox_C*                          CheckBox_64;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img;                                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Texts;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ChangeChecked;                                     // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Index_FilterRadioButton_C;                         // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         TextId;                                            // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class USBTextTableAsset*                      TextDataBase;                                      // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UTexture2D*                             Texture;                                           // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ChangeChecked__DelegateSignature(bool IsChecked, class UFilterRadioButton_C* Checked, int32 Param_Index);
	void ExecuteUbergraph_FilterRadioButton(int32 EntryPoint);
	void SetNameTextId(const class FName InTextID);
	void SetCheckedStyle(ECheckBoxState InCheckedState);
	void SetChecked(bool InIsChecked);
	void SetTextId(int32 InTextID);
	void SetText(const class FText& InText);
	void BndEvt__CheckBox_64_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FilterRadioButton_C">();
	}
	static class UFilterRadioButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFilterRadioButton_C>();
	}
};
static_assert(alignof(UFilterRadioButton_C) == 0x000008, "Wrong alignment on UFilterRadioButton_C");
static_assert(sizeof(UFilterRadioButton_C) == 0x0002C8, "Wrong size on UFilterRadioButton_C");
static_assert(offsetof(UFilterRadioButton_C, UberGraphFrame) == 0x000278, "Member 'UFilterRadioButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFilterRadioButton_C, CheckBox_64) == 0x000280, "Member 'UFilterRadioButton_C::CheckBox_64' has a wrong offset!");
static_assert(offsetof(UFilterRadioButton_C, Img) == 0x000288, "Member 'UFilterRadioButton_C::Img' has a wrong offset!");
static_assert(offsetof(UFilterRadioButton_C, SizeBox_0) == 0x000290, "Member 'UFilterRadioButton_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UFilterRadioButton_C, Texts) == 0x000298, "Member 'UFilterRadioButton_C::Texts' has a wrong offset!");
static_assert(offsetof(UFilterRadioButton_C, ChangeChecked) == 0x0002A0, "Member 'UFilterRadioButton_C::ChangeChecked' has a wrong offset!");
static_assert(offsetof(UFilterRadioButton_C, Index_FilterRadioButton_C) == 0x0002B0, "Member 'UFilterRadioButton_C::Index_FilterRadioButton_C' has a wrong offset!");
static_assert(offsetof(UFilterRadioButton_C, TextId) == 0x0002B4, "Member 'UFilterRadioButton_C::TextId' has a wrong offset!");
static_assert(offsetof(UFilterRadioButton_C, TextDataBase) == 0x0002B8, "Member 'UFilterRadioButton_C::TextDataBase' has a wrong offset!");
static_assert(offsetof(UFilterRadioButton_C, Texture) == 0x0002C0, "Member 'UFilterRadioButton_C::Texture' has a wrong offset!");

}

