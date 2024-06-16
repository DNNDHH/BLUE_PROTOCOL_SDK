#pragma once

 

// Package: BP_PlayerSelectCaptureCharacter

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerSelectCaptureCharacter.BP_PlayerSelectCaptureCharacter_C
// 0x0000 (0x14D0 - 0x14D0)
class ABP_PlayerSelectCaptureCharacter_C final : public ASBCharaCreateCharacter
{
public:
	void NewFunction_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerSelectCaptureCharacter_C">();
	}
	static class ABP_PlayerSelectCaptureCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerSelectCaptureCharacter_C>();
	}
};
static_assert(alignof(ABP_PlayerSelectCaptureCharacter_C) == 0x000010, "Wrong alignment on ABP_PlayerSelectCaptureCharacter_C");
static_assert(sizeof(ABP_PlayerSelectCaptureCharacter_C) == 0x0014D0, "Wrong size on ABP_PlayerSelectCaptureCharacter_C");

}

