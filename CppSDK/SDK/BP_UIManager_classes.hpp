#pragma once

 

// Package: BP_UIManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UIManager.BP_UIManager_C
// 0x0008 (0x02B8 - 0x02B0)
class UBP_UIManager_C final : public USBUIManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_UIManager(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UIManager_C">();
	}
	static class UBP_UIManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UIManager_C>();
	}
};
static_assert(alignof(UBP_UIManager_C) == 0x000008, "Wrong alignment on UBP_UIManager_C");
static_assert(sizeof(UBP_UIManager_C) == 0x0002B8, "Wrong size on UBP_UIManager_C");
static_assert(offsetof(UBP_UIManager_C, UberGraphFrame) == 0x0002B0, "Member 'UBP_UIManager_C::UberGraphFrame' has a wrong offset!");

}

