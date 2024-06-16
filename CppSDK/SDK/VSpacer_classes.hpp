#pragma once

 

// Package: VSpacer

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass VSpacer.VSpacer_C
// 0x0008 (0x0280 - 0x0278)
class UVSpacer_C final : public UUserWidget
{
public:
	class USpacer*                                Space;                                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetSpace(float YOffset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VSpacer_C">();
	}
	static class UVSpacer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVSpacer_C>();
	}
};
static_assert(alignof(UVSpacer_C) == 0x000008, "Wrong alignment on UVSpacer_C");
static_assert(sizeof(UVSpacer_C) == 0x000280, "Wrong size on UVSpacer_C");
static_assert(offsetof(UVSpacer_C, Space) == 0x000278, "Member 'UVSpacer_C::Space' has a wrong offset!");

}

