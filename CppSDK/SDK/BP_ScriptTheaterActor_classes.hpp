#pragma once

 

// Package: BP_ScriptTheaterActor

#include "Basic.hpp"

#include "BP_ScriptActor_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ScriptTheaterActor.BP_ScriptTheaterActor_C
// 0x0010 (0x0BA0 - 0x0B90)
class ABP_ScriptTheaterActor_C final : public ABP_ScriptActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ScriptTheaterActor_C;            // 0x0B90(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ScriptTheaterActor(int32 EntryPoint);
	void ReceiveDestroyed();
	void OnDemoFinish_Theater();
	void RequestPlayDemo_Theater(class FName InDemoName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ScriptTheaterActor_C">();
	}
	static class ABP_ScriptTheaterActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ScriptTheaterActor_C>();
	}
};
static_assert(alignof(ABP_ScriptTheaterActor_C) == 0x000010, "Wrong alignment on ABP_ScriptTheaterActor_C");
static_assert(sizeof(ABP_ScriptTheaterActor_C) == 0x000BA0, "Wrong size on ABP_ScriptTheaterActor_C");
static_assert(offsetof(ABP_ScriptTheaterActor_C, UberGraphFrame_BP_ScriptTheaterActor_C) == 0x000B90, "Member 'ABP_ScriptTheaterActor_C::UberGraphFrame_BP_ScriptTheaterActor_C' has a wrong offset!");

}

