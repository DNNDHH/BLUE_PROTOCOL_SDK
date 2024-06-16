#pragma once

 

// Package: BP_ScriptPostProcessActor

#include "Basic.hpp"

#include "ScriptDofSetting_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C
// 0x0048 (0x0270 - 0x0228)
class ABP_ScriptPostProcessActor_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                  PostProcess;                                       // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FScriptDofSetting                      Settings;                                          // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptDofSetting                      CurSettings;                                       // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TransitionTime;                                    // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TransitionElapsed;                                 // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnDofTransitionFinish;                             // 0x0258(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptDofSetting                      PrevSettings;                                      // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnDofTransitionFinish__DelegateSignature();
	void ExecuteUbergraph_BP_ScriptPostProcessActor(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ApplyDofSettings(class FName InSettingName, float InTransitionTime, bool* bResult);
	void Update_Internal(float InDeltaTime);

	void GetTimeRate(float* TimeRate) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ScriptPostProcessActor_C">();
	}
	static class ABP_ScriptPostProcessActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ScriptPostProcessActor_C>();
	}
};
static_assert(alignof(ABP_ScriptPostProcessActor_C) == 0x000008, "Wrong alignment on ABP_ScriptPostProcessActor_C");
static_assert(sizeof(ABP_ScriptPostProcessActor_C) == 0x000270, "Wrong size on ABP_ScriptPostProcessActor_C");
static_assert(offsetof(ABP_ScriptPostProcessActor_C, UberGraphFrame) == 0x000228, "Member 'ABP_ScriptPostProcessActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ScriptPostProcessActor_C, PostProcess) == 0x000230, "Member 'ABP_ScriptPostProcessActor_C::PostProcess' has a wrong offset!");
static_assert(offsetof(ABP_ScriptPostProcessActor_C, DefaultSceneRoot) == 0x000238, "Member 'ABP_ScriptPostProcessActor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ScriptPostProcessActor_C, Settings) == 0x000240, "Member 'ABP_ScriptPostProcessActor_C::Settings' has a wrong offset!");
static_assert(offsetof(ABP_ScriptPostProcessActor_C, CurSettings) == 0x000248, "Member 'ABP_ScriptPostProcessActor_C::CurSettings' has a wrong offset!");
static_assert(offsetof(ABP_ScriptPostProcessActor_C, TransitionTime) == 0x000250, "Member 'ABP_ScriptPostProcessActor_C::TransitionTime' has a wrong offset!");
static_assert(offsetof(ABP_ScriptPostProcessActor_C, TransitionElapsed) == 0x000254, "Member 'ABP_ScriptPostProcessActor_C::TransitionElapsed' has a wrong offset!");
static_assert(offsetof(ABP_ScriptPostProcessActor_C, OnDofTransitionFinish) == 0x000258, "Member 'ABP_ScriptPostProcessActor_C::OnDofTransitionFinish' has a wrong offset!");
static_assert(offsetof(ABP_ScriptPostProcessActor_C, PrevSettings) == 0x000268, "Member 'ABP_ScriptPostProcessActor_C::PrevSettings' has a wrong offset!");

}

