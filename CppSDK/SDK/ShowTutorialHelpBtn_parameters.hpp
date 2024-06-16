#pragma once

 

// Package: ShowTutorialHelpBtn

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.ExecuteUbergraph_ShowTutorialHelpBtn
// 0x0028 (0x0028 - 0x0000)
struct ShowTutorialHelpBtn_C_ExecuteUbergraph_ShowTutorialHelpBtn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C92[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTutorialHelpDialogBox_C*               CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C93[0x1];                                     // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(ShowTutorialHelpBtn_C_ExecuteUbergraph_ShowTutorialHelpBtn) == 0x000008, "Wrong alignment on ShowTutorialHelpBtn_C_ExecuteUbergraph_ShowTutorialHelpBtn");
static_assert(sizeof(ShowTutorialHelpBtn_C_ExecuteUbergraph_ShowTutorialHelpBtn) == 0x000028, "Wrong size on ShowTutorialHelpBtn_C_ExecuteUbergraph_ShowTutorialHelpBtn");
static_assert(offsetof(ShowTutorialHelpBtn_C_ExecuteUbergraph_ShowTutorialHelpBtn, EntryPoint) == 0x000000, "Member 'ShowTutorialHelpBtn_C_ExecuteUbergraph_ShowTutorialHelpBtn::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShowTutorialHelpBtn_C_ExecuteUbergraph_ShowTutorialHelpBtn, CallFunc_Create_ReturnValue) == 0x000008, "Member 'ShowTutorialHelpBtn_C_ExecuteUbergraph_ShowTutorialHelpBtn::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowTutorialHelpBtn_C_ExecuteUbergraph_ShowTutorialHelpBtn, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'ShowTutorialHelpBtn_C_ExecuteUbergraph_ShowTutorialHelpBtn::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowTutorialHelpBtn_C_ExecuteUbergraph_ShowTutorialHelpBtn, K2Node_Event_IsDesignTime) == 0x000011, "Member 'ShowTutorialHelpBtn_C_ExecuteUbergraph_ShowTutorialHelpBtn::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ShowTutorialHelpBtn_C_ExecuteUbergraph_ShowTutorialHelpBtn, K2Node_SwitchInteger_CmpSuccess) == 0x000012, "Member 'ShowTutorialHelpBtn_C_ExecuteUbergraph_ShowTutorialHelpBtn::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShowTutorialHelpBtn_C_ExecuteUbergraph_ShowTutorialHelpBtn, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'ShowTutorialHelpBtn_C_ExecuteUbergraph_ShowTutorialHelpBtn::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ShowTutorialHelpBtn_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShowTutorialHelpBtn_C_PreConstruct) == 0x000001, "Wrong alignment on ShowTutorialHelpBtn_C_PreConstruct");
static_assert(sizeof(ShowTutorialHelpBtn_C_PreConstruct) == 0x000001, "Wrong size on ShowTutorialHelpBtn_C_PreConstruct");
static_assert(offsetof(ShowTutorialHelpBtn_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ShowTutorialHelpBtn_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.SetClassTypeForTutorialHelp
// 0x0002 (0x0002 - 0x0000)
struct ShowTutorialHelpBtn_C_SetClassTypeForTutorialHelp final
{
public:
	bool                                          bInIsUsingClassTypeForTutorialHelp;                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  InClassType;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShowTutorialHelpBtn_C_SetClassTypeForTutorialHelp) == 0x000001, "Wrong alignment on ShowTutorialHelpBtn_C_SetClassTypeForTutorialHelp");
static_assert(sizeof(ShowTutorialHelpBtn_C_SetClassTypeForTutorialHelp) == 0x000002, "Wrong size on ShowTutorialHelpBtn_C_SetClassTypeForTutorialHelp");
static_assert(offsetof(ShowTutorialHelpBtn_C_SetClassTypeForTutorialHelp, bInIsUsingClassTypeForTutorialHelp) == 0x000000, "Member 'ShowTutorialHelpBtn_C_SetClassTypeForTutorialHelp::bInIsUsingClassTypeForTutorialHelp' has a wrong offset!");
static_assert(offsetof(ShowTutorialHelpBtn_C_SetClassTypeForTutorialHelp, InClassType) == 0x000001, "Member 'ShowTutorialHelpBtn_C_SetClassTypeForTutorialHelp::InClassType' has a wrong offset!");

}

