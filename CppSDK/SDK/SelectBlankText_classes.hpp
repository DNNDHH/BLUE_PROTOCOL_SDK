#pragma once

 

// Package: SelectBlankText

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SelectBlankText.SelectBlankText_C
// 0x0008 (0x0280 - 0x0278)
class USelectBlankText_C final : public UUserWidget
{
public:
	class USBRuntimeTextBlock*                    Txt_ImagineName_2;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetText(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SelectBlankText_C">();
	}
	static class USelectBlankText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USelectBlankText_C>();
	}
};
static_assert(alignof(USelectBlankText_C) == 0x000008, "Wrong alignment on USelectBlankText_C");
static_assert(sizeof(USelectBlankText_C) == 0x000280, "Wrong size on USelectBlankText_C");
static_assert(offsetof(USelectBlankText_C, Txt_ImagineName_2) == 0x000278, "Member 'USelectBlankText_C::Txt_ImagineName_2' has a wrong offset!");

}

