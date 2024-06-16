#pragma once

 

// Package: BP_EF_Library

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EF_Library.BP_EF_Library_C
// 0x0000 (0x0028 - 0x0028)
class UBP_EF_Library_C final : public UBlueprintFunctionLibrary
{
public:
	static void IsShouldExecOnServerOnly(class UObject* __WorldContext, bool* IsExec);
	static void IsShouldExecOnClientOnly(class UObject* __WorldContext, bool* IsExec);

	static void IsIntervalExec(float& RefTotalDeltaTime, float DeltaTime, float ExecIntervalTime, class UObject* __WorldContext, bool* IsExec);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EF_Library_C">();
	}
	static class UBP_EF_Library_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EF_Library_C>();
	}
};
static_assert(alignof(UBP_EF_Library_C) == 0x000008, "Wrong alignment on UBP_EF_Library_C");
static_assert(sizeof(UBP_EF_Library_C) == 0x000028, "Wrong size on UBP_EF_Library_C");

}

