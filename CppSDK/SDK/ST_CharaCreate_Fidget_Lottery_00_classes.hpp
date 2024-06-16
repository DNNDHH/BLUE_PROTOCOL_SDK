#pragma once

 

// Package: ST_CharaCreate_Fidget_Lottery_00

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_CharaCreate_Fidget_Lottery_00.ST_CharaCreate_Fidget_Lottery_00_C
// 0x0000 (0x0050 - 0x0050)
class UST_CharaCreate_Fidget_Lottery_00_C final : public UASTransition_BlueprintBase
{
public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_CharaCreate_Fidget_Lottery_00_C">();
	}
	static class UST_CharaCreate_Fidget_Lottery_00_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_CharaCreate_Fidget_Lottery_00_C>();
	}
};
static_assert(alignof(UST_CharaCreate_Fidget_Lottery_00_C) == 0x000008, "Wrong alignment on UST_CharaCreate_Fidget_Lottery_00_C");
static_assert(sizeof(UST_CharaCreate_Fidget_Lottery_00_C) == 0x000050, "Wrong size on UST_CharaCreate_Fidget_Lottery_00_C");

}

