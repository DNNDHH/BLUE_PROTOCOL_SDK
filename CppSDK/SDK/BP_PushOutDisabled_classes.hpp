#pragma once

 

// Package: BP_PushOutDisabled

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PushOutDisabled.BP_PushOutDisabled_C
// 0x0008 (0x0078 - 0x0070)
class UBP_PushOutDisabled_C final : public USBAnimNotify
{
public:
	bool                                          PushOutDisable;                                    // 0x0070(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;
	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PushOutDisabled_C">();
	}
	static class UBP_PushOutDisabled_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PushOutDisabled_C>();
	}
};
static_assert(alignof(UBP_PushOutDisabled_C) == 0x000008, "Wrong alignment on UBP_PushOutDisabled_C");
static_assert(sizeof(UBP_PushOutDisabled_C) == 0x000078, "Wrong size on UBP_PushOutDisabled_C");
static_assert(offsetof(UBP_PushOutDisabled_C, PushOutDisable) == 0x000070, "Member 'UBP_PushOutDisabled_C::PushOutDisable' has a wrong offset!");

}

