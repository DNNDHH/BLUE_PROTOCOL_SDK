#pragma once

 

// Package: BP_BalloonComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BalloonComponent.BP_BalloonComponent_C
// 0x0020 (0x00D8 - 0x00B8)
class UBP_BalloonComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNpcBalloonWindow_C*                    BalloonWidget;                                     // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ChangeBalloonVisible;                              // 0x00C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ChangeBalloonVisible__DelegateSignature(bool bVsiible);
	void ExecuteUbergraph_BP_BalloonComponent(int32 EntryPoint);
	void Hide();
	void Show(const class FString& InText, class ACharacter* InAttachCharacter);
	void OnRemove_Event_0();
	void Show_Extend(const class FString& InText, class ACharacter* InAttachCharacter, class FName InAttachTransformName, float InAutoCloseTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BalloonComponent_C">();
	}
	static class UBP_BalloonComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BalloonComponent_C>();
	}
};
static_assert(alignof(UBP_BalloonComponent_C) == 0x000008, "Wrong alignment on UBP_BalloonComponent_C");
static_assert(sizeof(UBP_BalloonComponent_C) == 0x0000D8, "Wrong size on UBP_BalloonComponent_C");
static_assert(offsetof(UBP_BalloonComponent_C, UberGraphFrame) == 0x0000B8, "Member 'UBP_BalloonComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_BalloonComponent_C, BalloonWidget) == 0x0000C0, "Member 'UBP_BalloonComponent_C::BalloonWidget' has a wrong offset!");
static_assert(offsetof(UBP_BalloonComponent_C, ChangeBalloonVisible) == 0x0000C8, "Member 'UBP_BalloonComponent_C::ChangeBalloonVisible' has a wrong offset!");

}

