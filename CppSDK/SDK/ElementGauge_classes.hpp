#pragma once

 

// Package: ElementGauge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ElementGauge.ElementGauge_C
// 0x0008 (0x02B0 - 0x02A8)
class UElementGauge_C final : public USBElementGaugeWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_ElementGauge(int32 EntryPoint);
	void CustomEvent_1(ESBAttribute ElementType);
	void CustomEvent_0(ESBAttribute ElementType);
	void OnUnbind(class ASBCharacter* InCharacter);
	void OnBind(class ASBCharacter* InCharacter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ElementGauge_C">();
	}
	static class UElementGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UElementGauge_C>();
	}
};
static_assert(alignof(UElementGauge_C) == 0x000008, "Wrong alignment on UElementGauge_C");
static_assert(sizeof(UElementGauge_C) == 0x0002B0, "Wrong size on UElementGauge_C");
static_assert(offsetof(UElementGauge_C, UberGraphFrame) == 0x0002A8, "Member 'UElementGauge_C::UberGraphFrame' has a wrong offset!");

}

