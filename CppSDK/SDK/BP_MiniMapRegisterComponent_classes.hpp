#pragma once

 

// Package: BP_MiniMapRegisterComponent

#include "Basic.hpp"

#include "MiniMapIconRegisterType_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C
// 0x0028 (0x00E0 - 0x00B8)
class UBP_MiniMapRegisterComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBMiniMapIconBase*                     MiniMapIconWidget;                                 // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMiniMapIconRegisterType                      RegisterIconType;                                  // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTick;                                            // 0x00C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9ACB[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMapIcon*                             WholeMapIconWidget;                                // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           EventHandle;                                       // 0x00D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MiniMapRegisterComponent(int32 EntryPoint);
	void StopRequest();
	void OnRequest();
	void StartRequest();
	void OnBuddyDelegate();
	void UnbindBuddy();
	void BindBuddy();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void CreateIcon(bool* Result);
	void DeleteIcon();
	void OnTick();
	void CreateMiniMapIcon(bool* Result);
	void DeleteMiniMapIcon();
	void CreateWholeMapIcon(bool* Result);
	void DeleteWholeMapIcon();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MiniMapRegisterComponent_C">();
	}
	static class UBP_MiniMapRegisterComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MiniMapRegisterComponent_C>();
	}
};
static_assert(alignof(UBP_MiniMapRegisterComponent_C) == 0x000008, "Wrong alignment on UBP_MiniMapRegisterComponent_C");
static_assert(sizeof(UBP_MiniMapRegisterComponent_C) == 0x0000E0, "Wrong size on UBP_MiniMapRegisterComponent_C");
static_assert(offsetof(UBP_MiniMapRegisterComponent_C, UberGraphFrame) == 0x0000B8, "Member 'UBP_MiniMapRegisterComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_MiniMapRegisterComponent_C, MiniMapIconWidget) == 0x0000C0, "Member 'UBP_MiniMapRegisterComponent_C::MiniMapIconWidget' has a wrong offset!");
static_assert(offsetof(UBP_MiniMapRegisterComponent_C, RegisterIconType) == 0x0000C8, "Member 'UBP_MiniMapRegisterComponent_C::RegisterIconType' has a wrong offset!");
static_assert(offsetof(UBP_MiniMapRegisterComponent_C, IsTick) == 0x0000C9, "Member 'UBP_MiniMapRegisterComponent_C::IsTick' has a wrong offset!");
static_assert(offsetof(UBP_MiniMapRegisterComponent_C, WholeMapIconWidget) == 0x0000D0, "Member 'UBP_MiniMapRegisterComponent_C::WholeMapIconWidget' has a wrong offset!");
static_assert(offsetof(UBP_MiniMapRegisterComponent_C, EventHandle) == 0x0000D8, "Member 'UBP_MiniMapRegisterComponent_C::EventHandle' has a wrong offset!");

}

