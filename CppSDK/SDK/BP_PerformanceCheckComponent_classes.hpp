#pragma once

 

// Package: BP_PerformanceCheckComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PerformanceCheckComponent.BP_PerformanceCheckComponent_C
// 0x0010 (0x0150 - 0x0140)
class UBP_PerformanceCheckComponent_C final : public USBPerformanceCheckComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Checking;                                          // 0x0148(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_PerformanceCheckComponent(int32 EntryPoint);
	void OnPerformanceCheckStart();
	void OnPerformanceCheckStop();
	void PerformanceCheckEvent();
	class FString GenerateFilename(const class FString& Direction);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PerformanceCheckComponent_C">();
	}
	static class UBP_PerformanceCheckComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PerformanceCheckComponent_C>();
	}
};
static_assert(alignof(UBP_PerformanceCheckComponent_C) == 0x000008, "Wrong alignment on UBP_PerformanceCheckComponent_C");
static_assert(sizeof(UBP_PerformanceCheckComponent_C) == 0x000150, "Wrong size on UBP_PerformanceCheckComponent_C");
static_assert(offsetof(UBP_PerformanceCheckComponent_C, UberGraphFrame) == 0x000140, "Member 'UBP_PerformanceCheckComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PerformanceCheckComponent_C, Checking) == 0x000148, "Member 'UBP_PerformanceCheckComponent_C::Checking' has a wrong offset!");

}

