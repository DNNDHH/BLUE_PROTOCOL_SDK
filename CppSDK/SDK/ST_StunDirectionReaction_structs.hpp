#pragma once

 

// Package: ST_StunDirectionReaction

#include "Basic.hpp"

#include "E_DamageReaction_structs.hpp"


namespace SDK
{

// UserDefinedStruct ST_StunDirectionReaction.ST_StunDirectionReaction
// 0x0003 (0x0003 - 0x0000)
struct FST_StunDirectionReaction final
{
public:
	E_DamageReaction                              Down_34_C79A995A4D5D3089096919AE6852EDD6;          // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_DamageReaction                              KnockBack_37_EE35851F4675CAE5FBBC54BEAC8A0364;     // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_DamageReaction                              Up_39_C5E242D84EBADDF39D0712AB17B3B4A1;            // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FST_StunDirectionReaction) == 0x000001, "Wrong alignment on FST_StunDirectionReaction");
static_assert(sizeof(FST_StunDirectionReaction) == 0x000003, "Wrong size on FST_StunDirectionReaction");
static_assert(offsetof(FST_StunDirectionReaction, Down_34_C79A995A4D5D3089096919AE6852EDD6) == 0x000000, "Member 'FST_StunDirectionReaction::Down_34_C79A995A4D5D3089096919AE6852EDD6' has a wrong offset!");
static_assert(offsetof(FST_StunDirectionReaction, KnockBack_37_EE35851F4675CAE5FBBC54BEAC8A0364) == 0x000001, "Member 'FST_StunDirectionReaction::KnockBack_37_EE35851F4675CAE5FBBC54BEAC8A0364' has a wrong offset!");
static_assert(offsetof(FST_StunDirectionReaction, Up_39_C5E242D84EBADDF39D0712AB17B3B4A1) == 0x000002, "Member 'FST_StunDirectionReaction::Up_39_C5E242D84EBADDF39D0712AB17B3B4A1' has a wrong offset!");

}

