#pragma once

 

// Package: CommandMenu_Line

#include "Basic.hpp"


namespace SDK::Params
{

// Function CommandMenu_Line.CommandMenu_Line_C.ExecuteUbergraph_CommandMenu_Line
// 0x0010 (0x0010 - 0x0000)
struct CommandMenu_Line_C_ExecuteUbergraph_CommandMenu_Line final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EDB[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_Line_C_ExecuteUbergraph_CommandMenu_Line) == 0x000008, "Wrong alignment on CommandMenu_Line_C_ExecuteUbergraph_CommandMenu_Line");
static_assert(sizeof(CommandMenu_Line_C_ExecuteUbergraph_CommandMenu_Line) == 0x000010, "Wrong size on CommandMenu_Line_C_ExecuteUbergraph_CommandMenu_Line");
static_assert(offsetof(CommandMenu_Line_C_ExecuteUbergraph_CommandMenu_Line, EntryPoint) == 0x000000, "Member 'CommandMenu_Line_C_ExecuteUbergraph_CommandMenu_Line::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommandMenu_Line_C_ExecuteUbergraph_CommandMenu_Line, K2Node_SwitchEnum_CmpSuccess) == 0x000004, "Member 'CommandMenu_Line_C_ExecuteUbergraph_CommandMenu_Line::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenu_Line_C_ExecuteUbergraph_CommandMenu_Line, K2Node_Event_IsDesignTime) == 0x000005, "Member 'CommandMenu_Line_C_ExecuteUbergraph_CommandMenu_Line::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CommandMenu_Line_C_ExecuteUbergraph_CommandMenu_Line, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'CommandMenu_Line_C_ExecuteUbergraph_CommandMenu_Line::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function CommandMenu_Line.CommandMenu_Line_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_Line_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_Line_C_PreConstruct) == 0x000001, "Wrong alignment on CommandMenu_Line_C_PreConstruct");
static_assert(sizeof(CommandMenu_Line_C_PreConstruct) == 0x000001, "Wrong size on CommandMenu_Line_C_PreConstruct");
static_assert(offsetof(CommandMenu_Line_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommandMenu_Line_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

