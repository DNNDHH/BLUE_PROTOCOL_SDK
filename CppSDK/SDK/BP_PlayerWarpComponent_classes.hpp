#pragma once

 

// Package: BP_PlayerWarpComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerWarpComponent.BP_PlayerWarpComponent_C
// 0x0010 (0x03C0 - 0x03B0)
class UBP_PlayerWarpComponent_C final : public USBPlayerWarpComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWarpCountDown_C*                       CountDownWidget;                                   // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PlayerWarpComponent(int32 EntryPoint);
	void TickComponentByActorEvent(float DeltaTime);
	void HideCountDownUI();
	void ShowCountDownUI();
	bool IsCountDownUICancelPressed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerWarpComponent_C">();
	}
	static class UBP_PlayerWarpComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerWarpComponent_C>();
	}
};
static_assert(alignof(UBP_PlayerWarpComponent_C) == 0x000008, "Wrong alignment on UBP_PlayerWarpComponent_C");
static_assert(sizeof(UBP_PlayerWarpComponent_C) == 0x0003C0, "Wrong size on UBP_PlayerWarpComponent_C");
static_assert(offsetof(UBP_PlayerWarpComponent_C, UberGraphFrame) == 0x0003B0, "Member 'UBP_PlayerWarpComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerWarpComponent_C, CountDownWidget) == 0x0003B8, "Member 'UBP_PlayerWarpComponent_C::CountDownWidget' has a wrong offset!");

}

