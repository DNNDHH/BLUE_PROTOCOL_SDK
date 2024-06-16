#pragma once

 

// Package: BP_PlayerEngramCannonComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C
// 0x0010 (0x0170 - 0x0160)
class UBP_PlayerEngramCannonComponent_C final : public USBPlayerEngramCannonComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0160(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUserWidget*                            HUD;                                               // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PlayerEngramCannonComponent(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void InitOnBoard_BP();
	void InitGetOff_BP();
	void SetUI();
	void ResetUI();
	void PostAkEvent_RideOn();
	void PostAkEvent_RideOff();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerEngramCannonComponent_C">();
	}
	static class UBP_PlayerEngramCannonComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerEngramCannonComponent_C>();
	}
};
static_assert(alignof(UBP_PlayerEngramCannonComponent_C) == 0x000008, "Wrong alignment on UBP_PlayerEngramCannonComponent_C");
static_assert(sizeof(UBP_PlayerEngramCannonComponent_C) == 0x000170, "Wrong size on UBP_PlayerEngramCannonComponent_C");
static_assert(offsetof(UBP_PlayerEngramCannonComponent_C, UberGraphFrame) == 0x000160, "Member 'UBP_PlayerEngramCannonComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerEngramCannonComponent_C, HUD) == 0x000168, "Member 'UBP_PlayerEngramCannonComponent_C::HUD' has a wrong offset!");

}

