#pragma once

 

// Package: UD_NpcCanWander

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UD_NpcCanWander.UD_NpcCanWander_C
// 0x0010 (0x0040 - 0x0030)
class UUD_NpcCanWander_C final : public USBUtilityDataProvider_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ASBMobCharacter*                        OwnerCharacter;                                    // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UD_NpcCanWander(int32 EntryPoint);
	void OnWanderingModeChanged(bool bCanWander);
	void ReceiveInitialize(class USBUtilityBrainComponent* OwnerComponent);
	float ReceiveFetchValue();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UD_NpcCanWander_C">();
	}
	static class UUD_NpcCanWander_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUD_NpcCanWander_C>();
	}
};
static_assert(alignof(UUD_NpcCanWander_C) == 0x000008, "Wrong alignment on UUD_NpcCanWander_C");
static_assert(sizeof(UUD_NpcCanWander_C) == 0x000040, "Wrong size on UUD_NpcCanWander_C");
static_assert(offsetof(UUD_NpcCanWander_C, UberGraphFrame) == 0x000030, "Member 'UUD_NpcCanWander_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUD_NpcCanWander_C, OwnerCharacter) == 0x000038, "Member 'UUD_NpcCanWander_C::OwnerCharacter' has a wrong offset!");

}

