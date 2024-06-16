#pragma once

 

// Package: CommandIcon_Tooltip

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommandIcon_Tooltip.CommandIcon_Tooltip_C
// 0x0008 (0x0280 - 0x0278)
class UCommandIcon_Tooltip_C final : public UUserWidget
{
public:
	class UTextBlock*                             NameLabel;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Setup(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommandIcon_Tooltip_C">();
	}
	static class UCommandIcon_Tooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommandIcon_Tooltip_C>();
	}
};
static_assert(alignof(UCommandIcon_Tooltip_C) == 0x000008, "Wrong alignment on UCommandIcon_Tooltip_C");
static_assert(sizeof(UCommandIcon_Tooltip_C) == 0x000280, "Wrong size on UCommandIcon_Tooltip_C");
static_assert(offsetof(UCommandIcon_Tooltip_C, NameLabel) == 0x000278, "Member 'UCommandIcon_Tooltip_C::NameLabel' has a wrong offset!");

}

