#pragma once

 

// Package: BP_FieldInteractionComponent

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FieldInteractionComponent.BP_FieldInteractionComponent_C
// 0x0000 (0x0290 - 0x0290)
class UBP_FieldInteractionComponent_C final : public USBInteractionTargetComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FieldInteractionComponent_C">();
	}
	static class UBP_FieldInteractionComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FieldInteractionComponent_C>();
	}
};
static_assert(alignof(UBP_FieldInteractionComponent_C) == 0x000010, "Wrong alignment on UBP_FieldInteractionComponent_C");
static_assert(sizeof(UBP_FieldInteractionComponent_C) == 0x000290, "Wrong size on UBP_FieldInteractionComponent_C");

}

