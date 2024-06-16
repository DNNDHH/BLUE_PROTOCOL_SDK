#pragma once

 

// Package: KeyConfig_Slider

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Config_KeyconfigItems_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KeyConfig_Slider.KeyConfig_Slider_C
// 0x0040 (0x02B8 - 0x0278)
class UKeyConfig_Slider_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Changed;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USliderInput_C*                         SliderInput;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChangeValue;                                     // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USBTextTableAsset*                      TextDataTable;                                     // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         TextId;                                            // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Type;                                              // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bChanged;                                          // 0x02B5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void SetChanged(bool Param_bChanged);
	void GetRatio(float* Ratio);
	void ApplyRatio(float Ratio);
	void GetValue(int32* Value);
	void ApplyValue(int32 NewValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void CallOnChange(int32 NewValue, float Ratio);
	void ExecuteUbergraph_KeyConfig_Slider(int32 EntryPoint);
	void OnChangeValue__DelegateSignature(int32 NewValue, float Ratio, EConfig_KeyconfigItems Param_Type, class UKeyConfig_Slider_C* Target);

	void IsChangeBefore(bool* ChangeBefore) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KeyConfig_Slider_C">();
	}
	static class UKeyConfig_Slider_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyConfig_Slider_C>();
	}
};
static_assert(alignof(UKeyConfig_Slider_C) == 0x000008, "Wrong alignment on UKeyConfig_Slider_C");
static_assert(sizeof(UKeyConfig_Slider_C) == 0x0002B8, "Wrong size on UKeyConfig_Slider_C");
static_assert(offsetof(UKeyConfig_Slider_C, UberGraphFrame) == 0x000278, "Member 'UKeyConfig_Slider_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKeyConfig_Slider_C, Changed) == 0x000280, "Member 'UKeyConfig_Slider_C::Changed' has a wrong offset!");
static_assert(offsetof(UKeyConfig_Slider_C, Label) == 0x000288, "Member 'UKeyConfig_Slider_C::Label' has a wrong offset!");
static_assert(offsetof(UKeyConfig_Slider_C, SliderInput) == 0x000290, "Member 'UKeyConfig_Slider_C::SliderInput' has a wrong offset!");
static_assert(offsetof(UKeyConfig_Slider_C, OnChangeValue) == 0x000298, "Member 'UKeyConfig_Slider_C::OnChangeValue' has a wrong offset!");
static_assert(offsetof(UKeyConfig_Slider_C, TextDataTable) == 0x0002A8, "Member 'UKeyConfig_Slider_C::TextDataTable' has a wrong offset!");
static_assert(offsetof(UKeyConfig_Slider_C, TextId) == 0x0002B0, "Member 'UKeyConfig_Slider_C::TextId' has a wrong offset!");
static_assert(offsetof(UKeyConfig_Slider_C, Type) == 0x0002B4, "Member 'UKeyConfig_Slider_C::Type' has a wrong offset!");
static_assert(offsetof(UKeyConfig_Slider_C, bChanged) == 0x0002B5, "Member 'UKeyConfig_Slider_C::bChanged' has a wrong offset!");

}

