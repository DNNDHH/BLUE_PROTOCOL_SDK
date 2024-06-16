#pragma once

 

// Package: KeyConfig_Radio

#include "Basic.hpp"

#include "RadioButtonData_structs.hpp"
#include "Engine_structs.hpp"
#include "Config_KeyconfigItems_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KeyConfig_Radio.KeyConfig_Radio_C
// 0x0050 (0x02C8 - 0x0278)
class UKeyConfig_Radio_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Changed;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadioButtonsH_C*                       RadioButtonsH;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FRadioButtonData>               RadioButtonData;                                   // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             SelectRadioButton;                                 // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EConfig_KeyconfigItems                        Type;                                              // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_671B[0x3];                                     // 0x02B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TextId;                                            // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bChanged;                                          // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void SetChanged(bool Param_bChanged);
	void PreConstruct(bool IsDesignTime);
	void ReInitData(const TArray<struct FRadioButtonData>& Param_RadioButtonData);
	void SelectButton(bool IsChecked, class URadioButton_C* RadioButton, int32 Param_Index);
	void Set_Focus(int32 Param_Index);
	void ExecuteUbergraph_KeyConfig_Radio(int32 EntryPoint);
	void SelectRadioButton__DelegateSignature(int32 Param_Index, EConfig_KeyconfigItems Param_Type);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KeyConfig_Radio_C">();
	}
	static class UKeyConfig_Radio_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyConfig_Radio_C>();
	}
};
static_assert(alignof(UKeyConfig_Radio_C) == 0x000008, "Wrong alignment on UKeyConfig_Radio_C");
static_assert(sizeof(UKeyConfig_Radio_C) == 0x0002C8, "Wrong size on UKeyConfig_Radio_C");
static_assert(offsetof(UKeyConfig_Radio_C, UberGraphFrame) == 0x000278, "Member 'UKeyConfig_Radio_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKeyConfig_Radio_C, Changed) == 0x000280, "Member 'UKeyConfig_Radio_C::Changed' has a wrong offset!");
static_assert(offsetof(UKeyConfig_Radio_C, Label) == 0x000288, "Member 'UKeyConfig_Radio_C::Label' has a wrong offset!");
static_assert(offsetof(UKeyConfig_Radio_C, RadioButtonsH) == 0x000290, "Member 'UKeyConfig_Radio_C::RadioButtonsH' has a wrong offset!");
static_assert(offsetof(UKeyConfig_Radio_C, RadioButtonData) == 0x000298, "Member 'UKeyConfig_Radio_C::RadioButtonData' has a wrong offset!");
static_assert(offsetof(UKeyConfig_Radio_C, SelectRadioButton) == 0x0002A8, "Member 'UKeyConfig_Radio_C::SelectRadioButton' has a wrong offset!");
static_assert(offsetof(UKeyConfig_Radio_C, Type) == 0x0002B8, "Member 'UKeyConfig_Radio_C::Type' has a wrong offset!");
static_assert(offsetof(UKeyConfig_Radio_C, TextId) == 0x0002BC, "Member 'UKeyConfig_Radio_C::TextId' has a wrong offset!");
static_assert(offsetof(UKeyConfig_Radio_C, bChanged) == 0x0002C0, "Member 'UKeyConfig_Radio_C::bChanged' has a wrong offset!");

}

