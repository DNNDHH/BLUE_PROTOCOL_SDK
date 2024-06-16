#pragma once

 

// Package: BP_ProjectilePath

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ProjectilePath.BP_ProjectilePath_C
// 0x0008 (0x0288 - 0x0280)
class ABP_ProjectilePath_C final : public ASBProjectilePath
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ProjectilePath(int32 EntryPoint);
	void InitBuildSplineMesh();
	void RecalcSplinePath();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ProjectilePath_C">();
	}
	static class ABP_ProjectilePath_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ProjectilePath_C>();
	}
};
static_assert(alignof(ABP_ProjectilePath_C) == 0x000008, "Wrong alignment on ABP_ProjectilePath_C");
static_assert(sizeof(ABP_ProjectilePath_C) == 0x000288, "Wrong size on ABP_ProjectilePath_C");
static_assert(offsetof(ABP_ProjectilePath_C, UberGraphFrame) == 0x000280, "Member 'ABP_ProjectilePath_C::UberGraphFrame' has a wrong offset!");

}

