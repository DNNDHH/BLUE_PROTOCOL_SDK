#pragma once

 

// Package: GraphicsSlider

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SliderInput_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GraphicsSlider.GraphicsSlider_C
// 0x0020 (0x02F8 - 0x02D8)
class UGraphicsSlider_C final : public USliderInput_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GraphicsSlider_C;                   // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             OnGraphicsChanged;                                 // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Index_GraphicsSlider_C;                            // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void OnChangeSignature(int32 NewValue, float Ratio);
	void ExecuteUbergraph_GraphicsSlider(int32 EntryPoint);
	void OnGraphicsChanged__DelegateSignature(int32 New_Value, float Ratio, int32 Param_Index);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GraphicsSlider_C">();
	}
	static class UGraphicsSlider_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGraphicsSlider_C>();
	}
};
static_assert(alignof(UGraphicsSlider_C) == 0x000008, "Wrong alignment on UGraphicsSlider_C");
static_assert(sizeof(UGraphicsSlider_C) == 0x0002F8, "Wrong size on UGraphicsSlider_C");
static_assert(offsetof(UGraphicsSlider_C, UberGraphFrame_GraphicsSlider_C) == 0x0002D8, "Member 'UGraphicsSlider_C::UberGraphFrame_GraphicsSlider_C' has a wrong offset!");
static_assert(offsetof(UGraphicsSlider_C, OnGraphicsChanged) == 0x0002E0, "Member 'UGraphicsSlider_C::OnGraphicsChanged' has a wrong offset!");
static_assert(offsetof(UGraphicsSlider_C, Index_GraphicsSlider_C) == 0x0002F0, "Member 'UGraphicsSlider_C::Index_GraphicsSlider_C' has a wrong offset!");

}

