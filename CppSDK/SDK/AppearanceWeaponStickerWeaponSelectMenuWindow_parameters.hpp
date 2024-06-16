#pragma once

 

// Package: AppearanceWeaponStickerWeaponSelectMenuWindow

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "InventoryData_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnDecide__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnDecide__DelegateSignature final
{
public:
	class FString                                 InSelectedWeaponUniqueItemId;                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnDecide__DelegateSignature) == 0x000008, "Wrong alignment on AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnDecide__DelegateSignature");
static_assert(sizeof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnDecide__DelegateSignature) == 0x000010, "Wrong size on AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnDecide__DelegateSignature");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnDecide__DelegateSignature, InSelectedWeaponUniqueItemId) == 0x000000, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnDecide__DelegateSignature::InSelectedWeaponUniqueItemId' has a wrong offset!");

// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnHideWindowEnd__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnHideWindowEnd__DelegateSignature final
{
public:
	bool                                          InIsHideWindowCalledByDecide;                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnHideWindowEnd__DelegateSignature) == 0x000001, "Wrong alignment on AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnHideWindowEnd__DelegateSignature");
static_assert(sizeof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnHideWindowEnd__DelegateSignature) == 0x000001, "Wrong size on AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnHideWindowEnd__DelegateSignature");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnHideWindowEnd__DelegateSignature, InIsHideWindowCalledByDecide) == 0x000000, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnHideWindowEnd__DelegateSignature::InIsHideWindowCalledByDecide' has a wrong offset!");

// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow
// 0x0198 (0x0198 - 0x0000)
struct AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues K2Node_CustomEvent_InUnchangeableRetValue;         // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BA9[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0050(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0068(0x0040)(HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x00A8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BAA[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_CustomEvent_InSelectedIcon;                 // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x00C0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_InIsBlock;                      // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00C7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x00C8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BAB[0x2];                                     // 0x00CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   K2Node_ComponentBoundEvent_Filters;                // 0x00D0(0x0010)(ReferenceParm)
	ESBItemSortType                               K2Node_ComponentBoundEvent_SortType;               // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BAC[0x6];                                     // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_CustomEvent_InSelectedItemIconBtn;          // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues Temp_byte_Variable_4;                              // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BAD[0x1];                                     // 0x00F3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x00F4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0108(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0120(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0160(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0170(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BAE[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SortList_OutCandidateItemCount;           // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SortList_OutCandidateItemCount_1;         // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow) == 0x000008, "Wrong alignment on AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow");
static_assert(sizeof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow) == 0x000198, "Wrong size on AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, EntryPoint) == 0x000000, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, Temp_int_Variable) == 0x000004, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, Temp_int_Variable_1) == 0x000008, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, Temp_bool_Variable) == 0x00000C, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, Temp_byte_Variable) == 0x00000D, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, Temp_byte_Variable_1) == 0x00000E, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, Temp_bool_Variable_1) == 0x00000F, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, Temp_byte_Variable_2) == 0x000010, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, Temp_byte_Variable_3) == 0x000011, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, K2Node_CustomEvent_InUnchangeableRetValue) == 0x000012, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::K2Node_CustomEvent_InUnchangeableRetValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000028, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000050, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, K2Node_MakeStruct_FormatArgumentData) == 0x000068, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, K2Node_Event_Animation) == 0x0000A8, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000B0, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, K2Node_CustomEvent_InSelectedIcon) == 0x0000B8, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::K2Node_CustomEvent_InSelectedIcon' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, Temp_int_Variable_2) == 0x0000C0, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, CallFunc_IsValid_ReturnValue) == 0x0000C4, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, K2Node_CustomEvent_InIsBlock) == 0x0000C5, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::K2Node_CustomEvent_InIsBlock' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, K2Node_Select_Default) == 0x0000C6, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, K2Node_Select_Default_1) == 0x0000C7, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, Temp_int_Variable_3) == 0x0000C8, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, CallFunc_IsAnimationPlaying_ReturnValue) == 0x0000CC, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, CallFunc_Not_PreBool_ReturnValue) == 0x0000CD, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, K2Node_ComponentBoundEvent_Filters) == 0x0000D0, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::K2Node_ComponentBoundEvent_Filters' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, K2Node_ComponentBoundEvent_SortType) == 0x0000E0, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::K2Node_ComponentBoundEvent_SortType' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, CallFunc_IsValid_ReturnValue_1) == 0x0000E1, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, K2Node_CustomEvent_InSelectedItemIconBtn) == 0x0000E8, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::K2Node_CustomEvent_InSelectedItemIconBtn' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, CallFunc_IsValid_ReturnValue_2) == 0x0000F0, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, Temp_byte_Variable_4) == 0x0000F1, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000F2, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, K2Node_Select_Default_2) == 0x0000F4, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0000F8, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000108, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, K2Node_MakeStruct_FormatArgumentData_1) == 0x000120, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, K2Node_MakeArray_Array) == 0x000160, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, CallFunc_Format_ReturnValue) == 0x000170, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, CallFunc_IsValid_ReturnValue_3) == 0x000188, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, CallFunc_SortList_OutCandidateItemCount) == 0x00018C, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::CallFunc_SortList_OutCandidateItemCount' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow, CallFunc_SortList_OutCandidateItemCount_1) == 0x000190, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow::CallFunc_SortList_OutCandidateItemCount_1' has a wrong offset!");

// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnWeaponIconSelected_����
// 0x0008 (0x0008 - 0x0000)
struct AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnWeaponIconSelected_____ final
{
public:
	class UItemIconBtn_C*                         InSelectedItemIconBtn;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnWeaponIconSelected_____) == 0x000008, "Wrong alignment on AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnWeaponIconSelected_____");
static_assert(sizeof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnWeaponIconSelected_____) == 0x000008, "Wrong size on AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnWeaponIconSelected_____");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnWeaponIconSelected_____, InSelectedItemIconBtn) == 0x000000, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnWeaponIconSelected_____::InSelectedItemIconBtn' has a wrong offset!");

// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct AppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature final
{
public:
	ESBItemSortType                               Param_SortType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature) == 0x000001, "Wrong alignment on AppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature");
static_assert(sizeof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature) == 0x000001, "Wrong size on AppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature, Param_SortType) == 0x000000, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature::Param_SortType' has a wrong offset!");

// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__FilterSelector_K2Node_ComponentBoundEvent_20_OnFilterApply__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct AppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_20_OnFilterApply__DelegateSignature final
{
public:
	TArray<struct FFilterGroup>                   Filters;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_20_OnFilterApply__DelegateSignature) == 0x000008, "Wrong alignment on AppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_20_OnFilterApply__DelegateSignature");
static_assert(sizeof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_20_OnFilterApply__DelegateSignature) == 0x000010, "Wrong size on AppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_20_OnFilterApply__DelegateSignature");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_20_OnFilterApply__DelegateSignature, Filters) == 0x000000, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_20_OnFilterApply__DelegateSignature::Filters' has a wrong offset!");

// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.UiInputBlock
// 0x0001 (0x0001 - 0x0000)
struct AppearanceWeaponStickerWeaponSelectMenuWindow_C_UiInputBlock final
{
public:
	bool                                          InIsBlock;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_UiInputBlock) == 0x000001, "Wrong alignment on AppearanceWeaponStickerWeaponSelectMenuWindow_C_UiInputBlock");
static_assert(sizeof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_UiInputBlock) == 0x000001, "Wrong size on AppearanceWeaponStickerWeaponSelectMenuWindow_C_UiInputBlock");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_UiInputBlock, InIsBlock) == 0x000000, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_UiInputBlock::InIsBlock' has a wrong offset!");

// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnSelect_ItemIcon
// 0x0008 (0x0008 - 0x0000)
struct AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnSelect_ItemIcon final
{
public:
	class UItemIconBtn_C*                         InSelectedIcon;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnSelect_ItemIcon) == 0x000008, "Wrong alignment on AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnSelect_ItemIcon");
static_assert(sizeof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnSelect_ItemIcon) == 0x000008, "Wrong size on AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnSelect_ItemIcon");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnSelect_ItemIcon, InSelectedIcon) == 0x000000, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnSelect_ItemIcon::InSelectedIcon' has a wrong offset!");

// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnAnimationFinished) == 0x000008, "Wrong alignment on AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnAnimationFinished");
static_assert(sizeof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnAnimationFinished) == 0x000008, "Wrong size on AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnAnimationFinished");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnAnimationFinished, Animation) == 0x000000, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.ShowWeaponUnchangeableMessageDialog
// 0x0001 (0x0001 - 0x0000)
struct AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWeaponUnchangeableMessageDialog final
{
public:
	ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWeaponUnchangeableMessageDialog) == 0x000001, "Wrong alignment on AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWeaponUnchangeableMessageDialog");
static_assert(sizeof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWeaponUnchangeableMessageDialog) == 0x000001, "Wrong size on AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWeaponUnchangeableMessageDialog");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWeaponUnchangeableMessageDialog, InUnchangeableRetValue) == 0x000000, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWeaponUnchangeableMessageDialog::InUnchangeableRetValue' has a wrong offset!");

// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.ShowWindow
// 0x0050 (0x0050 - 0x0000)
struct AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow final
{
public:
	ESBWeaponType                                 InWeaponType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BAF[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       TmpAnimOut;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_GetSortType_OutSortType;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_GetSortType_OutSortType_1;                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BB0[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   CallFunc_GetFilters_Filter1;                       // 0x0018(0x0010)(ReferenceParm)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BB1[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SortList_OutCandidateItemCount;           // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BB2[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow) == 0x000008, "Wrong alignment on AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow");
static_assert(sizeof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow) == 0x000050, "Wrong size on AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow, InWeaponType) == 0x000000, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow::InWeaponType' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow, TmpAnimOut) == 0x000008, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow::TmpAnimOut' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow, CallFunc_GetSortType_OutSortType) == 0x000010, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow::CallFunc_GetSortType_OutSortType' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow, CallFunc_GetSortType_OutSortType_1) == 0x000011, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow::CallFunc_GetSortType_OutSortType_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000012, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow, CallFunc_GetFilters_Filter1) == 0x000018, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow::CallFunc_GetFilters_Filter1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow, CallFunc_GetEquipmentBag_ReturnValue) == 0x000028, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow, CallFunc_SortList_OutCandidateItemCount) == 0x000034, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow::CallFunc_SortList_OutCandidateItemCount' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow, CallFunc_PlayAnimationForward_ReturnValue) == 0x000038, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow, CallFunc_PlaySE_ReturnValue) == 0x000040, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000044, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000048, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.HideWindow
// 0x0018 (0x0018 - 0x0000)
struct AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideWindow final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BB3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideWindow) == 0x000008, "Wrong alignment on AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideWindow");
static_assert(sizeof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideWindow) == 0x000018, "Wrong size on AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideWindow");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideWindow, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideWindow::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideWindow, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000010, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideWindow::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.CreateEmptySlotList
// 0x0098 (0x0098 - 0x0000)
struct AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList final
{
public:
	int32                                         TmpColumnMax;                                      // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpRowMax;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpLoopCnt;                                        // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpColumn;                                         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpRow;                                            // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BB4[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         TmpItemIconBtn;                                    // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpCapacity;                                       // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MarginTop;                                         // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MarginLeft;                                        // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BB5[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BB6[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BB7[0x2];                                     // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BB8[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UItemIconBtn_C* SelectItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0074(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BB9[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         CallFunc_Create_ReturnValue;                       // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList) == 0x000008, "Wrong alignment on AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList");
static_assert(sizeof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList) == 0x000098, "Wrong size on AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, TmpColumnMax) == 0x000000, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::TmpColumnMax' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, TmpRowMax) == 0x000004, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::TmpRowMax' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, TmpLoopCnt) == 0x000008, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::TmpLoopCnt' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, TmpColumn) == 0x00000C, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::TmpColumn' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, TmpRow) == 0x000010, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::TmpRow' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, TmpItemIconBtn) == 0x000018, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::TmpItemIconBtn' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, TmpCapacity) == 0x000020, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::TmpCapacity' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, MarginTop) == 0x000024, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::MarginTop' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, MarginLeft) == 0x000028, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::MarginLeft' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, Temp_int_Variable) == 0x00002C, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, Temp_int_Variable_1) == 0x000030, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, CallFunc_GetChildrenCount_ReturnValue) == 0x000034, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000038, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000039, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, CallFunc_Greater_IntInt_ReturnValue) == 0x000040, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, CallFunc_Percent_IntInt_ReturnValue) == 0x000044, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, CallFunc_Divide_IntInt_ReturnValue) == 0x000048, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00004C, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x00004D, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, CallFunc_GetEquipmentBag_ReturnValue) == 0x000050, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, CallFunc_Subtract_IntInt_ReturnValue) == 0x00005C, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, CallFunc_GetCapacity_ReturnValue) == 0x000060, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, K2Node_CreateDelegate_OutputDelegate) == 0x000064, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, K2Node_MakeStruct_Margin) == 0x000074, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, CallFunc_Create_ReturnValue) == 0x000088, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList, CallFunc_AddChildToGrid_ReturnValue) == 0x000090, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");

// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.SelectAll
// 0x0038 (0x0038 - 0x0000)
struct AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll final
{
public:
	bool                                          InIsSelected;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BBA[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BBB[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BBC[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BBD[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll) == 0x000008, "Wrong alignment on AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll");
static_assert(sizeof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll) == 0x000038, "Wrong size on AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll, InIsSelected) == 0x000000, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll::InIsSelected' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll, Temp_int_Variable) == 0x000004, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll, Temp_int_Variable_1) == 0x000008, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00000C, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll, CallFunc_GetChildAt_ReturnValue) == 0x000020, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x000028, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.ChangeActiveWindow
// 0x0018 (0x0018 - 0x0000)
struct AppearanceWeaponStickerWeaponSelectMenuWindow_C_ChangeActiveWindow final
{
public:
	bool                                          bInActivateListWindow;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInUseAnimation;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TmpActivateListWindow;                             // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BBE[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ChangeActiveWindow) == 0x000008, "Wrong alignment on AppearanceWeaponStickerWeaponSelectMenuWindow_C_ChangeActiveWindow");
static_assert(sizeof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ChangeActiveWindow) == 0x000018, "Wrong size on AppearanceWeaponStickerWeaponSelectMenuWindow_C_ChangeActiveWindow");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ChangeActiveWindow, bInActivateListWindow) == 0x000000, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ChangeActiveWindow::bInActivateListWindow' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ChangeActiveWindow, bInUseAnimation) == 0x000001, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ChangeActiveWindow::bInUseAnimation' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ChangeActiveWindow, TmpActivateListWindow) == 0x000002, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ChangeActiveWindow::TmpActivateListWindow' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ChangeActiveWindow, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ChangeActiveWindow::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_ChangeActiveWindow, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_ChangeActiveWindow::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.SortList
// 0x0688 (0x0688 - 0x0000)
struct AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList final
{
public:
	class USBOwnItemListContainer*                InOwnItemListContainer;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               InSortType;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BBF[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   InSortFilterGroup;                                 // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBWeaponType                                 InWeaponType;                                      // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BC0[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OutCandidateItemCount;                             // 0x0024(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         TmpItemIconBtn;                                    // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TmpIsLimitedTimeWeapon;                            // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BC1[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TmpWeaponUniqueItemId;                             // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class USBMasterDataManager*                   TmpMasterDataManager;                              // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpSortedIndexNum;                                 // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BC2[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           TmpOwnItemInfo;                                    // 0x0058(0x0118)(Edit, BlueprintVisible)
	int32                                         TmpLoopCnt;                                        // 0x0170(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BC3[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                TmpGridWeaponChild;                                // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItemData                     TmpInventoryItemData;                              // 0x0180(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FInventoryData                         TmpInventoryData;                                  // 0x01E0(0x0098)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         TmpCandidateItemCount;                             // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWeaponType                                 TmpWeaponType;                                     // 0x027C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BC4[0x3];                                     // 0x027D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   TmpSortFilter;                                     // 0x0280(0x0010)(Edit, BlueprintVisible)
	ESBItemSortType                               TmpSortType;                                       // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BC5[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                TmpContainer;                                      // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BC6[0x3];                                     // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x02B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BC7[0x6];                                     // 0x02B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x02B8(0x0118)(ConstParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BC8[0x7];                                     // 0x03D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x03D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x03E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x03E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x03E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BC9[0x2];                                     // 0x03E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         CallFunc_CreateInventoryData_InventoryData;        // 0x03E8(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_CreateInventoryData_IsSuccess;            // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BCA[0x3];                                     // 0x0481(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0484(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0488(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BCB[0x4];                                     // 0x048C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x0490(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0498(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue;     // 0x0499(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BCC[0x2];                                     // 0x049A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x049C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x04A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x04A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x04A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x04A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x04A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BCD[0x3];                                     // 0x04A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x04A8(0x00B0)()
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0558(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0559(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x055A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x055B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x055C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BCE[0x3];                                     // 0x055D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0560(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_BP_GetSortedItemAt_ReturnValue;           // 0x0568(0x0118)(ConstParm)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0680(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BCF[0x3];                                     // 0x0681(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSotedIndexNum_ReturnValue;             // 0x0684(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList) == 0x000008, "Wrong alignment on AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList");
static_assert(sizeof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList) == 0x000688, "Wrong size on AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, InOwnItemListContainer) == 0x000000, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::InOwnItemListContainer' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, InSortType) == 0x000008, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::InSortType' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, InSortFilterGroup) == 0x000010, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::InSortFilterGroup' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, InWeaponType) == 0x000020, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::InWeaponType' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, OutCandidateItemCount) == 0x000024, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::OutCandidateItemCount' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, TmpItemIconBtn) == 0x000028, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::TmpItemIconBtn' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, TmpIsLimitedTimeWeapon) == 0x000030, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::TmpIsLimitedTimeWeapon' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, TmpWeaponUniqueItemId) == 0x000038, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::TmpWeaponUniqueItemId' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, TmpMasterDataManager) == 0x000048, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::TmpMasterDataManager' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, TmpSortedIndexNum) == 0x000050, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::TmpSortedIndexNum' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, TmpOwnItemInfo) == 0x000058, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::TmpOwnItemInfo' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, TmpLoopCnt) == 0x000170, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::TmpLoopCnt' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, TmpGridWeaponChild) == 0x000178, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::TmpGridWeaponChild' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, TmpInventoryItemData) == 0x000180, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::TmpInventoryItemData' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, TmpInventoryData) == 0x0001E0, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::TmpInventoryData' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, TmpCandidateItemCount) == 0x000278, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::TmpCandidateItemCount' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, TmpWeaponType) == 0x00027C, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::TmpWeaponType' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, TmpSortFilter) == 0x000280, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::TmpSortFilter' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, TmpSortType) == 0x000290, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::TmpSortType' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, TmpContainer) == 0x000298, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::TmpContainer' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_IsValid_ReturnValue) == 0x0002A0, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, Temp_int_Variable) == 0x0002A4, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_Add_IntInt_ReturnValue) == 0x0002A8, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, Temp_int_Variable_1) == 0x0002AC, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0002B0, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0002B1, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0002B8, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_GetMasterDataManager_IsValid) == 0x0003D0, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_GetMasterDataManager_ReturnValue) == 0x0003D8, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_Subtract_IntInt_ReturnValue) == 0x0003E0, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_IsValid_ReturnValue_1) == 0x0003E4, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_BooleanAND_ReturnValue) == 0x0003E5, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_CreateInventoryData_InventoryData) == 0x0003E8, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_CreateInventoryData_InventoryData' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_CreateInventoryData_IsSuccess) == 0x000480, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_CreateInventoryData_IsSuccess' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, Temp_int_Variable_2) == 0x000484, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000488, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x000490, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, K2Node_DynamicCast_bSuccess) == 0x000498, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_IsInventoryStorageNumber_ReturnValue) == 0x000499, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_IsInventoryStorageNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_GetChildrenCount_ReturnValue) == 0x00049C, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_Greater_IntInt_ReturnValue) == 0x0004A0, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_Less_IntInt_ReturnValue) == 0x0004A1, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0004A2, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_BooleanAND_ReturnValue_1) == 0x0004A3, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_GetWeaponMasterData_IsExists) == 0x0004A4, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_GetWeaponMasterData_ReturnValue) == 0x0004A8, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_BooleanAND_ReturnValue_2) == 0x000558, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000559, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00055A, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00055B, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_BooleanOR_ReturnValue) == 0x00055C, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_GetChildAt_ReturnValue) == 0x000560, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_BP_GetSortedItemAt_ReturnValue) == 0x000568, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_BP_GetSortedItemAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_IsValid_ReturnValue_2) == 0x000680, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList, CallFunc_GetSotedIndexNum_ReturnValue) == 0x000684, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList::CallFunc_GetSotedIndexNum_ReturnValue' has a wrong offset!");

// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.HideAllSlotListItem
// 0x0020 (0x0020 - 0x0000)
struct AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideAllSlotListItem final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BD0[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideAllSlotListItem) == 0x000008, "Wrong alignment on AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideAllSlotListItem");
static_assert(sizeof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideAllSlotListItem) == 0x000020, "Wrong size on AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideAllSlotListItem");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideAllSlotListItem, Temp_int_Variable) == 0x000000, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideAllSlotListItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideAllSlotListItem, CallFunc_GetChildrenCount_ReturnValue) == 0x000004, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideAllSlotListItem::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideAllSlotListItem, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideAllSlotListItem::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideAllSlotListItem, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideAllSlotListItem::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideAllSlotListItem, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideAllSlotListItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideAllSlotListItem, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000015, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideAllSlotListItem::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideAllSlotListItem, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideAllSlotListItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideAllSlotListItem, CallFunc_IsValid_ReturnValue_1) == 0x00001C, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_HideAllSlotListItem::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.SetWndPos
// 0x0010 (0x0010 - 0x0000)
struct AppearanceWeaponStickerWeaponSelectMenuWindow_C_SetWndPos final
{
public:
	struct FVector2D                              WndPos;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SetWndPos) == 0x000008, "Wrong alignment on AppearanceWeaponStickerWeaponSelectMenuWindow_C_SetWndPos");
static_assert(sizeof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SetWndPos) == 0x000010, "Wrong size on AppearanceWeaponStickerWeaponSelectMenuWindow_C_SetWndPos");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SetWndPos, WndPos) == 0x000000, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SetWndPos::WndPos' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerWeaponSelectMenuWindow_C_SetWndPos, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'AppearanceWeaponStickerWeaponSelectMenuWindow_C_SetWndPos::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

}

