#pragma once

 

// Package: CommandMenu_FunctionLibrary

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "ST_TutorialExtendDataMain_structs.hpp"
#include "RequiredMaterialInfo_structs.hpp"
#include "ST_TutorialExtendData_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.OpenTutorialHelp_CommandMenu
// 0x0030 (0x0030 - 0x0000)
struct CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_842C[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTutorialHelpDialogBox_C*               CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCommandMenuTutorialHelpID_ReturnValue; // 0x0020(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu) == 0x000008, "Wrong alignment on CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu");
static_assert(sizeof(CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu) == 0x000030, "Wrong size on CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu, __WorldContext) == 0x000000, "Member 'CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu::__WorldContext' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu, CallFunc_GetUIManager_IsValid) == 0x000008, "Member 'CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu, CallFunc_GetUIManager_ReturnValue) == 0x000010, "Member 'CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu, CallFunc_Create_ReturnValue) == 0x000018, "Member 'CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu, CallFunc_GetCommandMenuTutorialHelpID_ReturnValue) == 0x000020, "Member 'CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu::CallFunc_GetCommandMenuTutorialHelpID_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu, CallFunc_NotEqual_NameName_ReturnValue) == 0x000028, "Member 'CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");

// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.InitTutorialHelp_CommandMenu
// 0x0118 (0x0118 - 0x0000)
struct CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu final
{
public:
	class FName                                   InId;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InMustDisplayed;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_842D[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_wildcard_Variable;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_842E[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTutorialHelpData                    CallFunc_GetDataTableRowFromName_OutRow;           // 0x0028(0x0058)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_842F[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TutorialExtendData                 CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x0088(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8430[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8431[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventTermActive_ReturnValue;            // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8432[0x5];                                     // 0x00BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8433[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharactersLogComponent*              CallFunc_GetCharacterLogComponent_ReturnValue;     // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TutorialExtendDataMain             CallFunc_Array_Get_Item;                           // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidTutorialTerm_ReturnValue;            // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00E6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x00E7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8434[0x2];                                     // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8435[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8436[0x6];                                     // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCommandMenuTutorialHelpID_ReturnValue; // 0x0108(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUnlockTutorialHelp_ReturnValue;         // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu) == 0x000008, "Wrong alignment on CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu");
static_assert(sizeof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu) == 0x000118, "Wrong size on CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, InId) == 0x000000, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::InId' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, InMustDisplayed) == 0x000008, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::InMustDisplayed' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, __WorldContext) == 0x000010, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::__WorldContext' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, Temp_wildcard_Variable) == 0x000018, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::Temp_wildcard_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_GetClassType_ReturnValue) == 0x000020, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_GetDataTableRowFromName_OutRow) == 0x000028, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000080, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x000088, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000098, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_Array_Length_ReturnValue) == 0x00009C, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_EqualEqual_NameName_ReturnValue) == 0x0000A0, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_Conv_NameToString_ReturnValue) == 0x0000A8, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_BooleanOR_ReturnValue) == 0x0000B8, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_IsEventTermActive_ReturnValue) == 0x0000B9, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_IsEventTermActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_BooleanOR_ReturnValue_1) == 0x0000BA, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_GetSBPlayerController_ReturnValue) == 0x0000C0, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, Temp_int_Array_Index_Variable) == 0x0000C8, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_GetCharacterLogComponent_ReturnValue) == 0x0000D0, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_GetCharacterLogComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_ValidTutorialTerm_ReturnValue) == 0x0000E4, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_ValidTutorialTerm_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000E5, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000E6, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, Temp_bool_True_if_break_was_hit_Variable) == 0x0000E7, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_BooleanOR_ReturnValue_2) == 0x0000E8, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_Not_PreBool_ReturnValue) == 0x0000E9, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, Temp_int_Loop_Counter_Variable) == 0x0000EC, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_Less_IntInt_ReturnValue) == 0x0000F0, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_Add_IntInt_ReturnValue) == 0x0000F4, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_BooleanAND_ReturnValue) == 0x0000F8, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_GetUIManager_IsValid) == 0x0000F9, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_GetUIManager_ReturnValue) == 0x000100, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_GetCommandMenuTutorialHelpID_ReturnValue) == 0x000108, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_GetCommandMenuTutorialHelpID_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_IsUnlockTutorialHelp_ReturnValue) == 0x000110, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_IsUnlockTutorialHelp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_Not_PreBool_ReturnValue_1) == 0x000111, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu, CallFunc_BooleanOR_ReturnValue_3) == 0x000112, "Member 'CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");

// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.BookmarkTypeToRmShopMenuType
// 0x00C8 (0x00C8 - 0x0000)
struct CommandMenu_FunctionLibrary_C_BookmarkTypeToRmShopMenuType final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRmShopMenuType                             Value;                                             // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8437[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, ESBRmShopMenuType>        NewLocalVar_0;                                     // 0x0020(0x0050)(Edit, BlueprintVisible)
	TMap<class FString, ESBRmShopMenuType>        K2Node_MakeVariable_MakeVariableOutput;            // 0x0070(0x0050)()
	ESBRmShopMenuType                             CallFunc_Map_Find_Value;                           // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_FunctionLibrary_C_BookmarkTypeToRmShopMenuType) == 0x000008, "Wrong alignment on CommandMenu_FunctionLibrary_C_BookmarkTypeToRmShopMenuType");
static_assert(sizeof(CommandMenu_FunctionLibrary_C_BookmarkTypeToRmShopMenuType) == 0x0000C8, "Wrong size on CommandMenu_FunctionLibrary_C_BookmarkTypeToRmShopMenuType");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_BookmarkTypeToRmShopMenuType, Key) == 0x000000, "Member 'CommandMenu_FunctionLibrary_C_BookmarkTypeToRmShopMenuType::Key' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_BookmarkTypeToRmShopMenuType, __WorldContext) == 0x000010, "Member 'CommandMenu_FunctionLibrary_C_BookmarkTypeToRmShopMenuType::__WorldContext' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_BookmarkTypeToRmShopMenuType, Value) == 0x000018, "Member 'CommandMenu_FunctionLibrary_C_BookmarkTypeToRmShopMenuType::Value' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_BookmarkTypeToRmShopMenuType, NewLocalVar_0) == 0x000020, "Member 'CommandMenu_FunctionLibrary_C_BookmarkTypeToRmShopMenuType::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_BookmarkTypeToRmShopMenuType, K2Node_MakeVariable_MakeVariableOutput) == 0x000070, "Member 'CommandMenu_FunctionLibrary_C_BookmarkTypeToRmShopMenuType::K2Node_MakeVariable_MakeVariableOutput' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_BookmarkTypeToRmShopMenuType, CallFunc_Map_Find_Value) == 0x0000C0, "Member 'CommandMenu_FunctionLibrary_C_BookmarkTypeToRmShopMenuType::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_BookmarkTypeToRmShopMenuType, CallFunc_Map_Find_ReturnValue) == 0x0000C1, "Member 'CommandMenu_FunctionLibrary_C_BookmarkTypeToRmShopMenuType::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.GetGuildComp
// 0x0040 (0x0040 - 0x0000)
struct CommandMenu_FunctionLibrary_C_GetGuildComp final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8438[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8439[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_FunctionLibrary_C_GetGuildComp) == 0x000008, "Wrong alignment on CommandMenu_FunctionLibrary_C_GetGuildComp");
static_assert(sizeof(CommandMenu_FunctionLibrary_C_GetGuildComp) == 0x000040, "Wrong size on CommandMenu_FunctionLibrary_C_GetGuildComp");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_GetGuildComp, __WorldContext) == 0x000000, "Member 'CommandMenu_FunctionLibrary_C_GetGuildComp::__WorldContext' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_GetGuildComp, IsValid) == 0x000008, "Member 'CommandMenu_FunctionLibrary_C_GetGuildComp::IsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_GetGuildComp, ReturnValue) == 0x000010, "Member 'CommandMenu_FunctionLibrary_C_GetGuildComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_GetGuildComp, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'CommandMenu_FunctionLibrary_C_GetGuildComp::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_GetGuildComp, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000020, "Member 'CommandMenu_FunctionLibrary_C_GetGuildComp::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_GetGuildComp, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'CommandMenu_FunctionLibrary_C_GetGuildComp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000030, "Member 'CommandMenu_FunctionLibrary_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_GetGuildComp, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'CommandMenu_FunctionLibrary_C_GetGuildComp::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.KeyconfigActionToBookmark
// 0x00E8 (0x00E8 - 0x0000)
struct CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark final
{
public:
	ESBKeyConfigAction                            QuickAccessKey;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_843A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ReturnValue1;                                      // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	TMap<ESBKeyConfigAction, ESBBookMarkerSlot>   BookmarkMap;                                       // 0x0020(0x0050)(Edit, BlueprintVisible)
	TMap<ESBKeyConfigAction, ESBBookMarkerSlot>   K2Node_MakeVariable_MakeVariableOutput;            // 0x0070(0x0050)()
	ESBBookMarkerSlot                             CallFunc_Map_Find_Value;                           // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_843B[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetBookMarkTypeNone_ReturnValue;          // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetBookMark_ReturnValue;                  // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark) == 0x000008, "Wrong alignment on CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark");
static_assert(sizeof(CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark) == 0x0000E8, "Wrong size on CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark, QuickAccessKey) == 0x000000, "Member 'CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark::QuickAccessKey' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark, __WorldContext) == 0x000008, "Member 'CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark::__WorldContext' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark, ReturnValue1) == 0x000010, "Member 'CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark::ReturnValue1' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark, BookmarkMap) == 0x000020, "Member 'CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark::BookmarkMap' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark, K2Node_MakeVariable_MakeVariableOutput) == 0x000070, "Member 'CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark::K2Node_MakeVariable_MakeVariableOutput' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark, CallFunc_Map_Find_Value) == 0x0000C0, "Member 'CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark, CallFunc_Map_Find_ReturnValue) == 0x0000C1, "Member 'CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark, CallFunc_GetBookMarkTypeNone_ReturnValue) == 0x0000C8, "Member 'CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark::CallFunc_GetBookMarkTypeNone_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark, CallFunc_GetBookMark_ReturnValue) == 0x0000D8, "Member 'CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark::CallFunc_GetBookMark_ReturnValue' has a wrong offset!");

// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.GetTutorialHelpText
// 0x00B0 (0x00B0 - 0x0000)
struct CommandMenu_FunctionLibrary_C_GetTutorialHelpText final
{
public:
	const class USBTextTableAsset*                InTextTableAsset;                                  // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InTextID;                                          // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ReturnValue;                                       // 0x0018(0x0018)(ConstParm, Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_843C[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetDateChangeTime_Date_Change_Time;       // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_843D[0x5];                                     // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_843E[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_DateTimeToFormatText_ReturnValue;         // 0x0060(0x0018)()
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_843F[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0080(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0098(0x0018)(ConstParm)
};
static_assert(alignof(CommandMenu_FunctionLibrary_C_GetTutorialHelpText) == 0x000008, "Wrong alignment on CommandMenu_FunctionLibrary_C_GetTutorialHelpText");
static_assert(sizeof(CommandMenu_FunctionLibrary_C_GetTutorialHelpText) == 0x0000B0, "Wrong size on CommandMenu_FunctionLibrary_C_GetTutorialHelpText");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_GetTutorialHelpText, InTextTableAsset) == 0x000000, "Member 'CommandMenu_FunctionLibrary_C_GetTutorialHelpText::InTextTableAsset' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_GetTutorialHelpText, InTextID) == 0x000008, "Member 'CommandMenu_FunctionLibrary_C_GetTutorialHelpText::InTextID' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_GetTutorialHelpText, __WorldContext) == 0x000010, "Member 'CommandMenu_FunctionLibrary_C_GetTutorialHelpText::__WorldContext' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_GetTutorialHelpText, ReturnValue) == 0x000018, "Member 'CommandMenu_FunctionLibrary_C_GetTutorialHelpText::ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_GetTutorialHelpText, Temp_bool_Variable) == 0x000030, "Member 'CommandMenu_FunctionLibrary_C_GetTutorialHelpText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_GetTutorialHelpText, CallFunc_GetDateChangeTime_Date_Change_Time) == 0x000038, "Member 'CommandMenu_FunctionLibrary_C_GetTutorialHelpText::CallFunc_GetDateChangeTime_Date_Change_Time' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_GetTutorialHelpText, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000040, "Member 'CommandMenu_FunctionLibrary_C_GetTutorialHelpText::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_GetTutorialHelpText, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x000041, "Member 'CommandMenu_FunctionLibrary_C_GetTutorialHelpText::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_GetTutorialHelpText, CallFunc_EqualEqual_NameName_ReturnValue_2) == 0x000042, "Member 'CommandMenu_FunctionLibrary_C_GetTutorialHelpText::CallFunc_EqualEqual_NameName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_GetTutorialHelpText, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000048, "Member 'CommandMenu_FunctionLibrary_C_GetTutorialHelpText::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_GetTutorialHelpText, CallFunc_BooleanOR_ReturnValue) == 0x000058, "Member 'CommandMenu_FunctionLibrary_C_GetTutorialHelpText::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_GetTutorialHelpText, CallFunc_DateTimeToFormatText_ReturnValue) == 0x000060, "Member 'CommandMenu_FunctionLibrary_C_GetTutorialHelpText::CallFunc_DateTimeToFormatText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_GetTutorialHelpText, CallFunc_BooleanOR_ReturnValue_1) == 0x000078, "Member 'CommandMenu_FunctionLibrary_C_GetTutorialHelpText::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_GetTutorialHelpText, CallFunc_Conv_StringToText_ReturnValue) == 0x000080, "Member 'CommandMenu_FunctionLibrary_C_GetTutorialHelpText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_GetTutorialHelpText, K2Node_Select_Default) == 0x000098, "Member 'CommandMenu_FunctionLibrary_C_GetTutorialHelpText::K2Node_Select_Default' has a wrong offset!");

// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.OpenTutorialHelp_CommandMenu_By HelpId
// 0x0030 (0x0030 - 0x0000)
struct CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu_By_HelpId final
{
public:
	class FName                                   TutorialHelpId;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8440[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTutorialHelpDialogBox_C*               CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu_By_HelpId) == 0x000008, "Wrong alignment on CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu_By_HelpId");
static_assert(sizeof(CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu_By_HelpId) == 0x000030, "Wrong size on CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu_By_HelpId");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu_By_HelpId, TutorialHelpId) == 0x000000, "Member 'CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu_By_HelpId::TutorialHelpId' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu_By_HelpId, __WorldContext) == 0x000008, "Member 'CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu_By_HelpId::__WorldContext' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu_By_HelpId, CallFunc_GetUIManager_IsValid) == 0x000010, "Member 'CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu_By_HelpId::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu_By_HelpId, CallFunc_GetUIManager_ReturnValue) == 0x000018, "Member 'CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu_By_HelpId::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu_By_HelpId, CallFunc_Create_ReturnValue) == 0x000020, "Member 'CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu_By_HelpId::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu_By_HelpId, CallFunc_NotEqual_NameName_ReturnValue) == 0x000028, "Member 'CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu_By_HelpId::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");

// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.IsLoginBonusBtnEnable
// 0x0168 (0x0168 - 0x0000)
struct CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enable;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8441[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8442[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8443[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsExistActiveLoginBonus_ReturnValue;      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8444[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetQuestMasterDataByLongId_IsExists;      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8445[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_GetQuestMasterDataByLongId_ReturnValue;   // 0x0048(0x0118)()
	EQuestStatus                                  CallFunc_GetQuestStatus_ReturnValue;               // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable) == 0x000008, "Wrong alignment on CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable");
static_assert(sizeof(CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable) == 0x000168, "Wrong size on CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable, __WorldContext) == 0x000000, "Member 'CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable::__WorldContext' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable, Enable) == 0x000008, "Member 'CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable::Enable' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable, CallFunc_MakeLiteralName_ReturnValue) == 0x00000C, "Member 'CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable, CallFunc_GetNetworkDataCache_IsValid) == 0x000020, "Member 'CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000028, "Member 'CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable, CallFunc_IsExistActiveLoginBonus_ReturnValue) == 0x000030, "Member 'CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable::CallFunc_IsExistActiveLoginBonus_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable, CallFunc_GetMasterDataManager_IsValid) == 0x000031, "Member 'CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable, CallFunc_GetMasterDataManager_ReturnValue) == 0x000038, "Member 'CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable, CallFunc_GetQuestMasterDataByLongId_IsExists) == 0x000040, "Member 'CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable::CallFunc_GetQuestMasterDataByLongId_IsExists' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable, CallFunc_GetQuestMasterDataByLongId_ReturnValue) == 0x000048, "Member 'CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable::CallFunc_GetQuestMasterDataByLongId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable, CallFunc_GetQuestStatus_ReturnValue) == 0x000160, "Member 'CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable::CallFunc_GetQuestStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000161, "Member 'CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable, CallFunc_BooleanAND_ReturnValue) == 0x000162, "Member 'CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.Is Adventure Rank Board Enable
// 0x0018 (0x0018 - 0x0000)
struct CommandMenu_FunctionLibrary_C_Is_Adventure_Rank_Board_Enable final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enable;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8446[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActiveAdventureBoard_ReturnValue;       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_FunctionLibrary_C_Is_Adventure_Rank_Board_Enable) == 0x000008, "Wrong alignment on CommandMenu_FunctionLibrary_C_Is_Adventure_Rank_Board_Enable");
static_assert(sizeof(CommandMenu_FunctionLibrary_C_Is_Adventure_Rank_Board_Enable) == 0x000018, "Wrong size on CommandMenu_FunctionLibrary_C_Is_Adventure_Rank_Board_Enable");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_Is_Adventure_Rank_Board_Enable, __WorldContext) == 0x000000, "Member 'CommandMenu_FunctionLibrary_C_Is_Adventure_Rank_Board_Enable::__WorldContext' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_Is_Adventure_Rank_Board_Enable, Enable) == 0x000008, "Member 'CommandMenu_FunctionLibrary_C_Is_Adventure_Rank_Board_Enable::Enable' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_Is_Adventure_Rank_Board_Enable, CallFunc_GetAdventurerRank_ReturnValue) == 0x00000C, "Member 'CommandMenu_FunctionLibrary_C_Is_Adventure_Rank_Board_Enable::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_Is_Adventure_Rank_Board_Enable, CallFunc_IsActiveAdventureBoard_ReturnValue) == 0x000010, "Member 'CommandMenu_FunctionLibrary_C_Is_Adventure_Rank_Board_Enable::CallFunc_IsActiveAdventureBoard_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_Is_Adventure_Rank_Board_Enable, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000011, "Member 'CommandMenu_FunctionLibrary_C_Is_Adventure_Rank_Board_Enable::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_Is_Adventure_Rank_Board_Enable, CallFunc_BooleanAND_ReturnValue) == 0x000012, "Member 'CommandMenu_FunctionLibrary_C_Is_Adventure_Rank_Board_Enable::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.CheckBookmarkID
// 0x0058 (0x0058 - 0x0000)
struct CommandMenu_FunctionLibrary_C_CheckBookmarkID final
{
public:
	class FString                                 InBookmarkID;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8447[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReplacementID;                                     // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          NewLocalVar_0;                                     // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLoginBonusBtnEnable_Enable;             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Is_Adventure_Rank_Board_Enable_Enable;    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_2;          // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_3;          // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_4;          // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_5;          // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8448[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFeatureSettingEenabled_ReturnValue;     // 0x0050(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_FunctionLibrary_C_CheckBookmarkID) == 0x000008, "Wrong alignment on CommandMenu_FunctionLibrary_C_CheckBookmarkID");
static_assert(sizeof(CommandMenu_FunctionLibrary_C_CheckBookmarkID) == 0x000058, "Wrong size on CommandMenu_FunctionLibrary_C_CheckBookmarkID");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_CheckBookmarkID, InBookmarkID) == 0x000000, "Member 'CommandMenu_FunctionLibrary_C_CheckBookmarkID::InBookmarkID' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_CheckBookmarkID, __WorldContext) == 0x000010, "Member 'CommandMenu_FunctionLibrary_C_CheckBookmarkID::__WorldContext' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_CheckBookmarkID, IsActive) == 0x000018, "Member 'CommandMenu_FunctionLibrary_C_CheckBookmarkID::IsActive' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_CheckBookmarkID, ReplacementID) == 0x000020, "Member 'CommandMenu_FunctionLibrary_C_CheckBookmarkID::ReplacementID' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_CheckBookmarkID, NewLocalVar_0) == 0x000030, "Member 'CommandMenu_FunctionLibrary_C_CheckBookmarkID::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_CheckBookmarkID, CallFunc_IsLoginBonusBtnEnable_Enable) == 0x000031, "Member 'CommandMenu_FunctionLibrary_C_CheckBookmarkID::CallFunc_IsLoginBonusBtnEnable_Enable' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_CheckBookmarkID, CallFunc_Is_Adventure_Rank_Board_Enable_Enable) == 0x000032, "Member 'CommandMenu_FunctionLibrary_C_CheckBookmarkID::CallFunc_Is_Adventure_Rank_Board_Enable_Enable' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_CheckBookmarkID, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000033, "Member 'CommandMenu_FunctionLibrary_C_CheckBookmarkID::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_CheckBookmarkID, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000034, "Member 'CommandMenu_FunctionLibrary_C_CheckBookmarkID::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_CheckBookmarkID, CallFunc_EqualEqual_StrStr_ReturnValue_2) == 0x000035, "Member 'CommandMenu_FunctionLibrary_C_CheckBookmarkID::CallFunc_EqualEqual_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_CheckBookmarkID, CallFunc_EqualEqual_StrStr_ReturnValue_3) == 0x000036, "Member 'CommandMenu_FunctionLibrary_C_CheckBookmarkID::CallFunc_EqualEqual_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_CheckBookmarkID, CallFunc_EqualEqual_StrStr_ReturnValue_4) == 0x000037, "Member 'CommandMenu_FunctionLibrary_C_CheckBookmarkID::CallFunc_EqualEqual_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_CheckBookmarkID, CallFunc_BooleanOR_ReturnValue) == 0x000038, "Member 'CommandMenu_FunctionLibrary_C_CheckBookmarkID::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_CheckBookmarkID, CallFunc_BooleanOR_ReturnValue_1) == 0x000039, "Member 'CommandMenu_FunctionLibrary_C_CheckBookmarkID::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_CheckBookmarkID, CallFunc_EqualEqual_StrStr_ReturnValue_5) == 0x00003A, "Member 'CommandMenu_FunctionLibrary_C_CheckBookmarkID::CallFunc_EqualEqual_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_CheckBookmarkID, CallFunc_BooleanOR_ReturnValue_2) == 0x00003B, "Member 'CommandMenu_FunctionLibrary_C_CheckBookmarkID::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_CheckBookmarkID, CallFunc_MakeLiteralName_ReturnValue) == 0x00003C, "Member 'CommandMenu_FunctionLibrary_C_CheckBookmarkID::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_CheckBookmarkID, CallFunc_GetMasterDataManager_IsValid) == 0x000044, "Member 'CommandMenu_FunctionLibrary_C_CheckBookmarkID::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_CheckBookmarkID, CallFunc_GetMasterDataManager_ReturnValue) == 0x000048, "Member 'CommandMenu_FunctionLibrary_C_CheckBookmarkID::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_CheckBookmarkID, CallFunc_IsFeatureSettingEenabled_ReturnValue) == 0x000050, "Member 'CommandMenu_FunctionLibrary_C_CheckBookmarkID::CallFunc_IsFeatureSettingEenabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_CheckBookmarkID, CallFunc_BooleanAND_ReturnValue) == 0x000051, "Member 'CommandMenu_FunctionLibrary_C_CheckBookmarkID::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.IsWishItemCollectionCompleted
// 0x0048 (0x0048 - 0x0000)
struct CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted final
{
public:
	TArray<struct FRequiredMaterialInfo>          RequiredMaterialInfo;                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCompleted;                                        // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8449[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRequiredMaterialInfo                  CallFunc_Array_Get_Item;                           // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_844A[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAllStoragesAmount_ReturnValue;         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_844B[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted) == 0x000008, "Wrong alignment on CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted");
static_assert(sizeof(CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted) == 0x000048, "Wrong size on CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted, RequiredMaterialInfo) == 0x000000, "Member 'CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted::RequiredMaterialInfo' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted, __WorldContext) == 0x000010, "Member 'CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted::__WorldContext' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted, bCompleted) == 0x000018, "Member 'CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted::bCompleted' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted, Temp_int_Array_Index_Variable) == 0x000020, "Member 'CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted, CallFunc_Array_Get_Item) == 0x000028, "Member 'CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted, CallFunc_GetAllStoragesAmount_ReturnValue) == 0x000038, "Member 'CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted::CallFunc_GetAllStoragesAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted, CallFunc_Greater_IntInt_ReturnValue) == 0x00003C, "Member 'CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.IsWishListExclamation
// 0x01A8 (0x01A8 - 0x0000)
struct CommandMenu_FunctionLibrary_C_IsWishListExclamation final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bResult;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_844C[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRequiredMaterialInfo>          RequiredMaterialInfo;                              // 0x0010(0x0010)(Edit, BlueprintVisible)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_844D[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBWishListData>                CallFunc_GetAllWishlistData_ReturnValue;           // 0x0038(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_844E[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBWishListData                        CallFunc_Array_Get_Item;                           // 0x0064(0x000C)(NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsWishItemCollectionCompleted_bCompleted; // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsWishItemCollectionCompleted_bCompleted_1; // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_844F[0x1];                                     // 0x0077(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8450[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterImagineRecepi_InExists;         // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8451[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineRecepi                   CallFunc_FindMasterImagineRecepi_ReturnValue;      // 0x0098(0x0038)()
	bool                                          CallFunc_FindCraftMasterData_isExists;             // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8452[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMasterData_ReturnValue;          // 0x00D8(0x0088)(ConstParm)
	struct FMasterImagineMaterial                 CallFunc_Array_Get_Item_1;                         // 0x0160(0x000C)(NoDestructor)
	struct FCraftNeedItems                        CallFunc_Array_Get_Item_2;                         // 0x016C(0x0008)(NoDestructor)
	struct FRequiredMaterialInfo                  K2Node_MakeStruct_RequiredMaterialInfo;            // 0x0174(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRequiredMaterialInfo                  K2Node_MakeStruct_RequiredMaterialInfo_1;          // 0x0184(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8453[0x3];                                     // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_FunctionLibrary_C_IsWishListExclamation) == 0x000008, "Wrong alignment on CommandMenu_FunctionLibrary_C_IsWishListExclamation");
static_assert(sizeof(CommandMenu_FunctionLibrary_C_IsWishListExclamation) == 0x0001A8, "Wrong size on CommandMenu_FunctionLibrary_C_IsWishListExclamation");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, __WorldContext) == 0x000000, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::__WorldContext' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, bResult) == 0x000008, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::bResult' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, RequiredMaterialInfo) == 0x000010, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::RequiredMaterialInfo' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_GetCharacterId_ReturnValue) == 0x000020, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, Temp_int_Array_Index_Variable) == 0x000030, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_GetAllWishlistData_ReturnValue) == 0x000038, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_GetAllWishlistData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, Temp_int_Array_Index_Variable_1) == 0x00004C, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, Temp_int_Loop_Counter_Variable) == 0x000050, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, Temp_int_Array_Index_Variable_2) == 0x00005C, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, Temp_int_Loop_Counter_Variable_1) == 0x000060, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_Array_Get_Item) == 0x000064, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_Add_IntInt_ReturnValue_1) == 0x000070, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, K2Node_SwitchEnum_CmpSuccess) == 0x000074, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_IsWishItemCollectionCompleted_bCompleted) == 0x000075, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_IsWishItemCollectionCompleted_bCompleted' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_IsWishItemCollectionCompleted_bCompleted_1) == 0x000076, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_IsWishItemCollectionCompleted_bCompleted_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, Temp_int_Loop_Counter_Variable_2) == 0x000078, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_Add_IntInt_ReturnValue_2) == 0x00007C, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_GetMasterDataManager_IsValid) == 0x000080, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_GetMasterDataManager_ReturnValue) == 0x000088, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_FindMasterImagineRecepi_InExists) == 0x000090, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_FindMasterImagineRecepi_InExists' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_FindMasterImagineRecepi_ReturnValue) == 0x000098, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_FindMasterImagineRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_FindCraftMasterData_isExists) == 0x0000D0, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_FindCraftMasterData_isExists' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_FindCraftMasterData_ReturnValue) == 0x0000D8, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_FindCraftMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_Array_Get_Item_1) == 0x000160, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_Array_Get_Item_2) == 0x00016C, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, K2Node_MakeStruct_RequiredMaterialInfo) == 0x000174, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::K2Node_MakeStruct_RequiredMaterialInfo' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_Array_Add_ReturnValue) == 0x000180, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, K2Node_MakeStruct_RequiredMaterialInfo_1) == 0x000184, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::K2Node_MakeStruct_RequiredMaterialInfo_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_Array_Length_ReturnValue_1) == 0x000190, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_Array_Add_ReturnValue_1) == 0x000194, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_Less_IntInt_ReturnValue_1) == 0x000198, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_Array_Length_ReturnValue_2) == 0x00019C, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_FunctionLibrary_C_IsWishListExclamation, CallFunc_Less_IntInt_ReturnValue_2) == 0x0001A0, "Member 'CommandMenu_FunctionLibrary_C_IsWishListExclamation::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");

}

