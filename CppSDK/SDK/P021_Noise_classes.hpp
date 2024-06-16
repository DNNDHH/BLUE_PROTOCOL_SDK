#pragma once

 

// Package: P021_Noise

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass P021_Noise.P021_Noise_C
// 0x0010 (0x0288 - 0x0278)
class UP021_Noise_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimationNoise;                                    // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_P021_Noise(int32 EntryPoint);
	void Construct();
	void PlayAnimForwardNoise();
	void PlayAnimReverseNoise();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"P021_Noise_C">();
	}
	static class UP021_Noise_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UP021_Noise_C>();
	}
};
static_assert(alignof(UP021_Noise_C) == 0x000008, "Wrong alignment on UP021_Noise_C");
static_assert(sizeof(UP021_Noise_C) == 0x000288, "Wrong size on UP021_Noise_C");
static_assert(offsetof(UP021_Noise_C, UberGraphFrame) == 0x000278, "Member 'UP021_Noise_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UP021_Noise_C, AnimationNoise) == 0x000280, "Member 'UP021_Noise_C::AnimationNoise' has a wrong offset!");

}

