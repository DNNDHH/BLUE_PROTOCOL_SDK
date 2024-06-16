#pragma once

 

// Package: CommandMenu_MenuItem2

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CommandMenu_MenuItem2.CommandMenu_MenuItem2_C.OnSelect__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_MenuItem2_C_OnSelect__DelegateSignature final
{
public:
	ESBCommandMenuType                            Param_MenuType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_MenuItem2_C_OnSelect__DelegateSignature) == 0x000001, "Wrong alignment on CommandMenu_MenuItem2_C_OnSelect__DelegateSignature");
static_assert(sizeof(CommandMenu_MenuItem2_C_OnSelect__DelegateSignature) == 0x000001, "Wrong size on CommandMenu_MenuItem2_C_OnSelect__DelegateSignature");
static_assert(offsetof(CommandMenu_MenuItem2_C_OnSelect__DelegateSignature, Param_MenuType) == 0x000000, "Member 'CommandMenu_MenuItem2_C_OnSelect__DelegateSignature::Param_MenuType' has a wrong offset!");

// Function CommandMenu_MenuItem2.CommandMenu_MenuItem2_C.ExecuteUbergraph_CommandMenu_MenuItem2
// 0x0068 (0x0068 - 0x0000)
struct CommandMenu_MenuItem2_C_ExecuteUbergraph_CommandMenu_MenuItem2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E63[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0010(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0038(0x0028)()
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_MenuItem2_C_ExecuteUbergraph_CommandMenu_MenuItem2) == 0x000008, "Wrong alignment on CommandMenu_MenuItem2_C_ExecuteUbergraph_CommandMenu_MenuItem2");
static_assert(sizeof(CommandMenu_MenuItem2_C_ExecuteUbergraph_CommandMenu_MenuItem2) == 0x000068, "Wrong size on CommandMenu_MenuItem2_C_ExecuteUbergraph_CommandMenu_MenuItem2");
static_assert(offsetof(CommandMenu_MenuItem2_C_ExecuteUbergraph_CommandMenu_MenuItem2, EntryPoint) == 0x000000, "Member 'CommandMenu_MenuItem2_C_ExecuteUbergraph_CommandMenu_MenuItem2::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem2_C_ExecuteUbergraph_CommandMenu_MenuItem2, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'CommandMenu_MenuItem2_C_ExecuteUbergraph_CommandMenu_MenuItem2::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem2_C_ExecuteUbergraph_CommandMenu_MenuItem2, K2Node_SwitchEnum_CmpSuccess) == 0x000008, "Member 'CommandMenu_MenuItem2_C_ExecuteUbergraph_CommandMenu_MenuItem2::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem2_C_ExecuteUbergraph_CommandMenu_MenuItem2, K2Node_Event_IsDesignTime) == 0x000009, "Member 'CommandMenu_MenuItem2_C_ExecuteUbergraph_CommandMenu_MenuItem2::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem2_C_ExecuteUbergraph_CommandMenu_MenuItem2, K2Node_MakeStruct_SlateColor) == 0x000010, "Member 'CommandMenu_MenuItem2_C_ExecuteUbergraph_CommandMenu_MenuItem2::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem2_C_ExecuteUbergraph_CommandMenu_MenuItem2, K2Node_MakeStruct_SlateColor_1) == 0x000038, "Member 'CommandMenu_MenuItem2_C_ExecuteUbergraph_CommandMenu_MenuItem2::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem2_C_ExecuteUbergraph_CommandMenu_MenuItem2, CallFunc_PlaySE_ReturnValue_1) == 0x000060, "Member 'CommandMenu_MenuItem2_C_ExecuteUbergraph_CommandMenu_MenuItem2::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");

// Function CommandMenu_MenuItem2.CommandMenu_MenuItem2_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_MenuItem2_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_MenuItem2_C_PreConstruct) == 0x000001, "Wrong alignment on CommandMenu_MenuItem2_C_PreConstruct");
static_assert(sizeof(CommandMenu_MenuItem2_C_PreConstruct) == 0x000001, "Wrong size on CommandMenu_MenuItem2_C_PreConstruct");
static_assert(offsetof(CommandMenu_MenuItem2_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommandMenu_MenuItem2_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

