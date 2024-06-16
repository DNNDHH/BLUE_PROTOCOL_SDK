#pragma once

 

// Package: ST_CheckGameInput

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_CheckGameInput.ST_CheckGameInput_C
// 0x0018 (0x0068 - 0x0050)
class UST_CheckGameInput_C final : public UASTransition_BlueprintBase
{
public:
	bool                                          OnlyTriggered;                                     // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9ADA[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EGameInput>                            CheckInput;                                        // 0x0058(0x0010)(Edit, BlueprintVisible)

public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_CheckGameInput_C">();
	}
	static class UST_CheckGameInput_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_CheckGameInput_C>();
	}
};
static_assert(alignof(UST_CheckGameInput_C) == 0x000008, "Wrong alignment on UST_CheckGameInput_C");
static_assert(sizeof(UST_CheckGameInput_C) == 0x000068, "Wrong size on UST_CheckGameInput_C");
static_assert(offsetof(UST_CheckGameInput_C, OnlyTriggered) == 0x000050, "Member 'UST_CheckGameInput_C::OnlyTriggered' has a wrong offset!");
static_assert(offsetof(UST_CheckGameInput_C, CheckInput) == 0x000058, "Member 'UST_CheckGameInput_C::CheckInput' has a wrong offset!");

}

