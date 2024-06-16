#pragma once

 

// Package: ChatLogDeadIcon

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatLogDeadIcon.ChatLogDeadIcon_C
// 0x0008 (0x0280 - 0x0278)
class UChatLogDeadIcon_C final : public UUserWidget
{
public:
	class UImage*                                 Image_54;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatLogDeadIcon_C">();
	}
	static class UChatLogDeadIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatLogDeadIcon_C>();
	}
};
static_assert(alignof(UChatLogDeadIcon_C) == 0x000008, "Wrong alignment on UChatLogDeadIcon_C");
static_assert(sizeof(UChatLogDeadIcon_C) == 0x000280, "Wrong size on UChatLogDeadIcon_C");
static_assert(offsetof(UChatLogDeadIcon_C, Image_54) == 0x000278, "Member 'UChatLogDeadIcon_C::Image_54' has a wrong offset!");

}

