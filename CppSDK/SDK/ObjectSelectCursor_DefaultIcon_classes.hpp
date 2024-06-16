#pragma once

 

// Package: ObjectSelectCursor_DefaultIcon

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ObjectSelectCursor_DefaultIcon.ObjectSelectCursor_DefaultIcon_C
// 0x0008 (0x0280 - 0x0278)
class UObjectSelectCursor_DefaultIcon_C final : public UUserWidget
{
public:
	class UImage*                                 Bg1;                                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ObjectSelectCursor_DefaultIcon_C">();
	}
	static class UObjectSelectCursor_DefaultIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectSelectCursor_DefaultIcon_C>();
	}
};
static_assert(alignof(UObjectSelectCursor_DefaultIcon_C) == 0x000008, "Wrong alignment on UObjectSelectCursor_DefaultIcon_C");
static_assert(sizeof(UObjectSelectCursor_DefaultIcon_C) == 0x000280, "Wrong size on UObjectSelectCursor_DefaultIcon_C");
static_assert(offsetof(UObjectSelectCursor_DefaultIcon_C, Bg1) == 0x000278, "Member 'UObjectSelectCursor_DefaultIcon_C::Bg1' has a wrong offset!");

}

