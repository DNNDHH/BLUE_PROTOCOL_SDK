#pragma once

 

// Package: BP_MeshClimbingComponent

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MeshClimbingComponent.BP_MeshClimbingComponent_C
// 0x0000 (0x0178 - 0x0178)
class UBP_MeshClimbingComponent_C final : public USBMeshClimbingComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MeshClimbingComponent_C">();
	}
	static class UBP_MeshClimbingComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MeshClimbingComponent_C>();
	}
};
static_assert(alignof(UBP_MeshClimbingComponent_C) == 0x000008, "Wrong alignment on UBP_MeshClimbingComponent_C");
static_assert(sizeof(UBP_MeshClimbingComponent_C) == 0x000178, "Wrong size on UBP_MeshClimbingComponent_C");

}

