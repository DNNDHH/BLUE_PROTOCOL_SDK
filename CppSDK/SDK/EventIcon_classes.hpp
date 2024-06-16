#pragma once

 

// Package: EventIcon

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "ToolTipType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventIcon.EventIcon_C
// 0x0008 (0x0280 - 0x0278)
class UEventIcon_C final : public UUserWidget
{
public:
	class UEventIconToolTip_C*                    EventIconToolTip;                                  // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	class UWidget* GetToolTipWidget_0();
	void SetInfo();
	void CreateToolTipWidgetifNeeded(class UEventIconToolTip_C** Widget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventIcon_C">();
	}
	static class UEventIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventIcon_C>();
	}
};
static_assert(alignof(UEventIcon_C) == 0x000008, "Wrong alignment on UEventIcon_C");
static_assert(sizeof(UEventIcon_C) == 0x000280, "Wrong size on UEventIcon_C");
static_assert(offsetof(UEventIcon_C, EventIconToolTip) == 0x000278, "Member 'UEventIcon_C::EventIconToolTip' has a wrong offset!");

}

