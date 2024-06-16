#pragma once

 

// Package: UMG_StartMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function UMG_StartMenu.UMG_StartMenu_C.ExecuteUbergraph_UMG_StartMenu
// 0x0060 (0x0060 - 0x0000)
struct UMG_StartMenu_C_ExecuteUbergraph_UMG_StartMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A32[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetProjectVersion_ReturnValue;            // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	TArray<struct FSBUserOnlineAccountCharacter>  CallFunc_GetLogedInPlayerCharacters_OutCharacters; // 0x0048(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetLogedInPlayerCharacters_ReturnValue;   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A33[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_StartMenu_C_ExecuteUbergraph_UMG_StartMenu) == 0x000008, "Wrong alignment on UMG_StartMenu_C_ExecuteUbergraph_UMG_StartMenu");
static_assert(sizeof(UMG_StartMenu_C_ExecuteUbergraph_UMG_StartMenu) == 0x000060, "Wrong size on UMG_StartMenu_C_ExecuteUbergraph_UMG_StartMenu");
static_assert(offsetof(UMG_StartMenu_C_ExecuteUbergraph_UMG_StartMenu, EntryPoint) == 0x000000, "Member 'UMG_StartMenu_C_ExecuteUbergraph_UMG_StartMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_StartMenu_C_ExecuteUbergraph_UMG_StartMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UMG_StartMenu_C_ExecuteUbergraph_UMG_StartMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StartMenu_C_ExecuteUbergraph_UMG_StartMenu, CallFunc_GetProjectVersion_ReturnValue) == 0x000010, "Member 'UMG_StartMenu_C_ExecuteUbergraph_UMG_StartMenu::CallFunc_GetProjectVersion_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StartMenu_C_ExecuteUbergraph_UMG_StartMenu, CallFunc_Concat_StrStr_ReturnValue) == 0x000020, "Member 'UMG_StartMenu_C_ExecuteUbergraph_UMG_StartMenu::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StartMenu_C_ExecuteUbergraph_UMG_StartMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'UMG_StartMenu_C_ExecuteUbergraph_UMG_StartMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StartMenu_C_ExecuteUbergraph_UMG_StartMenu, CallFunc_GetLogedInPlayerCharacters_OutCharacters) == 0x000048, "Member 'UMG_StartMenu_C_ExecuteUbergraph_UMG_StartMenu::CallFunc_GetLogedInPlayerCharacters_OutCharacters' has a wrong offset!");
static_assert(offsetof(UMG_StartMenu_C_ExecuteUbergraph_UMG_StartMenu, CallFunc_GetLogedInPlayerCharacters_ReturnValue) == 0x000058, "Member 'UMG_StartMenu_C_ExecuteUbergraph_UMG_StartMenu::CallFunc_GetLogedInPlayerCharacters_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StartMenu_C_ExecuteUbergraph_UMG_StartMenu, CallFunc_Not_PreBool_ReturnValue) == 0x000059, "Member 'UMG_StartMenu_C_ExecuteUbergraph_UMG_StartMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_StartMenu_C_ExecuteUbergraph_UMG_StartMenu, CallFunc_SelectInt_ReturnValue) == 0x00005C, "Member 'UMG_StartMenu_C_ExecuteUbergraph_UMG_StartMenu::CallFunc_SelectInt_ReturnValue' has a wrong offset!");

// Function UMG_StartMenu.UMG_StartMenu_C.Start
// 0x0010 (0x0010 - 0x0000)
struct UMG_StartMenu_C_Start final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A34[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_StartMenu_C_Start) == 0x000008, "Wrong alignment on UMG_StartMenu_C_Start");
static_assert(sizeof(UMG_StartMenu_C_Start) == 0x000010, "Wrong size on UMG_StartMenu_C_Start");
static_assert(offsetof(UMG_StartMenu_C_Start, Temp_bool_Variable) == 0x000000, "Member 'UMG_StartMenu_C_Start::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_StartMenu_C_Start, K2Node_Select_Default) == 0x000008, "Member 'UMG_StartMenu_C_Start::K2Node_Select_Default' has a wrong offset!");

// Function UMG_StartMenu.UMG_StartMenu_C.SetButtonFocus
// 0x0010 (0x0010 - 0x0000)
struct UMG_StartMenu_C_SetButtonFocus final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A35[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCmnBtn21_C*                            K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_StartMenu_C_SetButtonFocus) == 0x000008, "Wrong alignment on UMG_StartMenu_C_SetButtonFocus");
static_assert(sizeof(UMG_StartMenu_C_SetButtonFocus) == 0x000010, "Wrong size on UMG_StartMenu_C_SetButtonFocus");
static_assert(offsetof(UMG_StartMenu_C_SetButtonFocus, Temp_bool_Variable) == 0x000000, "Member 'UMG_StartMenu_C_SetButtonFocus::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_StartMenu_C_SetButtonFocus, K2Node_Select_Default) == 0x000008, "Member 'UMG_StartMenu_C_SetButtonFocus::K2Node_Select_Default' has a wrong offset!");

}

