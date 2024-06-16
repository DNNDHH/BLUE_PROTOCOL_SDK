#pragma once

 

// Package: CommandMenu_MissionEffect1

#include "Basic.hpp"


namespace SDK::Params
{

// Function CommandMenu_MissionEffect1.CommandMenu_MissionEffect1_C.ExecuteUbergraph_CommandMenu_MissionEffect1
// 0x0010 (0x0010 - 0x0000)
struct CommandMenu_MissionEffect1_C_ExecuteUbergraph_CommandMenu_MissionEffect1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CA9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_MissionEffect1_C_ExecuteUbergraph_CommandMenu_MissionEffect1) == 0x000008, "Wrong alignment on CommandMenu_MissionEffect1_C_ExecuteUbergraph_CommandMenu_MissionEffect1");
static_assert(sizeof(CommandMenu_MissionEffect1_C_ExecuteUbergraph_CommandMenu_MissionEffect1) == 0x000010, "Wrong size on CommandMenu_MissionEffect1_C_ExecuteUbergraph_CommandMenu_MissionEffect1");
static_assert(offsetof(CommandMenu_MissionEffect1_C_ExecuteUbergraph_CommandMenu_MissionEffect1, EntryPoint) == 0x000000, "Member 'CommandMenu_MissionEffect1_C_ExecuteUbergraph_CommandMenu_MissionEffect1::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommandMenu_MissionEffect1_C_ExecuteUbergraph_CommandMenu_MissionEffect1, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'CommandMenu_MissionEffect1_C_ExecuteUbergraph_CommandMenu_MissionEffect1::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

