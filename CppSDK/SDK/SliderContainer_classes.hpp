#pragma once

 

// Package: SliderContainer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SliderContainerSetting_structs.hpp"
#include "GraphicsSliderSetting_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SliderContainer.SliderContainer_C
// 0x0090 (0x0308 - 0x0278)
class USliderContainer_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           Labels;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Sliders;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSliderContainerSetting>        SliderSettings;                                    // 0x0290(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	TMap<EGraphicsSliderSetting, int32>           Indexes;                                           // 0x02A0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnChangeSlider;                                    // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         MaxIndexes;                                        // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void SetValue(EGraphicsSliderSetting Type, int32 NewValue);
	void OnChangeSlider_Deligate(int32 New_Value, float Ratio, int32 Param_Index);
	void ExecuteUbergraph_SliderContainer(int32 EntryPoint);
	void OnChangeSlider__DelegateSignature(int32 Value, float Ratio, EGraphicsSliderSetting Type);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SliderContainer_C">();
	}
	static class USliderContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USliderContainer_C>();
	}
};
static_assert(alignof(USliderContainer_C) == 0x000008, "Wrong alignment on USliderContainer_C");
static_assert(sizeof(USliderContainer_C) == 0x000308, "Wrong size on USliderContainer_C");
static_assert(offsetof(USliderContainer_C, UberGraphFrame) == 0x000278, "Member 'USliderContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USliderContainer_C, Labels) == 0x000280, "Member 'USliderContainer_C::Labels' has a wrong offset!");
static_assert(offsetof(USliderContainer_C, Sliders) == 0x000288, "Member 'USliderContainer_C::Sliders' has a wrong offset!");
static_assert(offsetof(USliderContainer_C, SliderSettings) == 0x000290, "Member 'USliderContainer_C::SliderSettings' has a wrong offset!");
static_assert(offsetof(USliderContainer_C, Indexes) == 0x0002A0, "Member 'USliderContainer_C::Indexes' has a wrong offset!");
static_assert(offsetof(USliderContainer_C, OnChangeSlider) == 0x0002F0, "Member 'USliderContainer_C::OnChangeSlider' has a wrong offset!");
static_assert(offsetof(USliderContainer_C, MaxIndexes) == 0x000300, "Member 'USliderContainer_C::MaxIndexes' has a wrong offset!");

}

