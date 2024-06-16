#pragma once

 

// Package: UD_IsEnableNpcTalk

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UD_IsEnableNpcTalk.UD_IsEnableNpcTalk_C
// 0x0010 (0x0040 - 0x0030)
class UUD_IsEnableNpcTalk_C final : public USBUtilityDataProvider_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ASBMobCharacter*                        OwnerMobCharacter;                                 // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UD_IsEnableNpcTalk(int32 EntryPoint);
	void ReceiveInitialize(class USBUtilityBrainComponent* OwnerComponent);
	float ReceiveFetchValue();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UD_IsEnableNpcTalk_C">();
	}
	static class UUD_IsEnableNpcTalk_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUD_IsEnableNpcTalk_C>();
	}
};
static_assert(alignof(UUD_IsEnableNpcTalk_C) == 0x000008, "Wrong alignment on UUD_IsEnableNpcTalk_C");
static_assert(sizeof(UUD_IsEnableNpcTalk_C) == 0x000040, "Wrong size on UUD_IsEnableNpcTalk_C");
static_assert(offsetof(UUD_IsEnableNpcTalk_C, UberGraphFrame) == 0x000030, "Member 'UUD_IsEnableNpcTalk_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUD_IsEnableNpcTalk_C, OwnerMobCharacter) == 0x000038, "Member 'UUD_IsEnableNpcTalk_C::OwnerMobCharacter' has a wrong offset!");

}

