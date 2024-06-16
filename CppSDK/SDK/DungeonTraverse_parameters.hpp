#pragma once

 

// Package: DungeonTraverse

#include "Basic.hpp"

#include "Slate_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function DungeonTraverse.DungeonTraverse_C.ExecuteUbergraph_DungeonTraverse
// 0x0004 (0x0004 - 0x0000)
struct DungeonTraverse_C_ExecuteUbergraph_DungeonTraverse final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DungeonTraverse_C_ExecuteUbergraph_DungeonTraverse) == 0x000004, "Wrong alignment on DungeonTraverse_C_ExecuteUbergraph_DungeonTraverse");
static_assert(sizeof(DungeonTraverse_C_ExecuteUbergraph_DungeonTraverse) == 0x000004, "Wrong size on DungeonTraverse_C_ExecuteUbergraph_DungeonTraverse");
static_assert(offsetof(DungeonTraverse_C_ExecuteUbergraph_DungeonTraverse, EntryPoint) == 0x000000, "Member 'DungeonTraverse_C_ExecuteUbergraph_DungeonTraverse::EntryPoint' has a wrong offset!");

// Function DungeonTraverse.DungeonTraverse_C.Setup
// 0x0038 (0x0038 - 0x0000)
struct DungeonTraverse_C_Setup final
{
public:
	struct FAnchors                               InAnchors;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FVector2D                              InPosition;                                        // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InSize;                                            // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DungeonTraverse_C_Setup) == 0x000008, "Wrong alignment on DungeonTraverse_C_Setup");
static_assert(sizeof(DungeonTraverse_C_Setup) == 0x000038, "Wrong size on DungeonTraverse_C_Setup");
static_assert(offsetof(DungeonTraverse_C_Setup, InAnchors) == 0x000000, "Member 'DungeonTraverse_C_Setup::InAnchors' has a wrong offset!");
static_assert(offsetof(DungeonTraverse_C_Setup, InPosition) == 0x000010, "Member 'DungeonTraverse_C_Setup::InPosition' has a wrong offset!");
static_assert(offsetof(DungeonTraverse_C_Setup, InSize) == 0x000018, "Member 'DungeonTraverse_C_Setup::InSize' has a wrong offset!");
static_assert(offsetof(DungeonTraverse_C_Setup, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000020, "Member 'DungeonTraverse_C_Setup::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(DungeonTraverse_C_Setup, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000028, "Member 'DungeonTraverse_C_Setup::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DungeonTraverse_C_Setup, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000030, "Member 'DungeonTraverse_C_Setup::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");

// Function DungeonTraverse.DungeonTraverse_C.SetName
// 0x0020 (0x0020 - 0x0000)
struct DungeonTraverse_C_SetName final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0008(0x0018)()
};
static_assert(alignof(DungeonTraverse_C_SetName) == 0x000008, "Wrong alignment on DungeonTraverse_C_SetName");
static_assert(sizeof(DungeonTraverse_C_SetName) == 0x000020, "Wrong size on DungeonTraverse_C_SetName");
static_assert(offsetof(DungeonTraverse_C_SetName, Param_Name) == 0x000000, "Member 'DungeonTraverse_C_SetName::Param_Name' has a wrong offset!");
static_assert(offsetof(DungeonTraverse_C_SetName, CallFunc_Conv_NameToText_ReturnValue) == 0x000008, "Member 'DungeonTraverse_C_SetName::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");

// Function DungeonTraverse.DungeonTraverse_C.SetVisibleDebugText
// 0x0005 (0x0005 - 0x0000)
struct DungeonTraverse_C_SetVisibleDebugText final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTraverseDebug_ReturnValue;              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DungeonTraverse_C_SetVisibleDebugText) == 0x000001, "Wrong alignment on DungeonTraverse_C_SetVisibleDebugText");
static_assert(sizeof(DungeonTraverse_C_SetVisibleDebugText) == 0x000005, "Wrong size on DungeonTraverse_C_SetVisibleDebugText");
static_assert(offsetof(DungeonTraverse_C_SetVisibleDebugText, Temp_bool_Variable) == 0x000000, "Member 'DungeonTraverse_C_SetVisibleDebugText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DungeonTraverse_C_SetVisibleDebugText, Temp_byte_Variable) == 0x000001, "Member 'DungeonTraverse_C_SetVisibleDebugText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(DungeonTraverse_C_SetVisibleDebugText, Temp_byte_Variable_1) == 0x000002, "Member 'DungeonTraverse_C_SetVisibleDebugText::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(DungeonTraverse_C_SetVisibleDebugText, CallFunc_IsTraverseDebug_ReturnValue) == 0x000003, "Member 'DungeonTraverse_C_SetVisibleDebugText::CallFunc_IsTraverseDebug_ReturnValue' has a wrong offset!");
static_assert(offsetof(DungeonTraverse_C_SetVisibleDebugText, K2Node_Select_Default) == 0x000004, "Member 'DungeonTraverse_C_SetVisibleDebugText::K2Node_Select_Default' has a wrong offset!");

// Function DungeonTraverse.DungeonTraverse_C.GetName
// 0x0008 (0x0008 - 0x0000)
struct DungeonTraverse_C_GetName final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DungeonTraverse_C_GetName) == 0x000004, "Wrong alignment on DungeonTraverse_C_GetName");
static_assert(sizeof(DungeonTraverse_C_GetName) == 0x000008, "Wrong size on DungeonTraverse_C_GetName");
static_assert(offsetof(DungeonTraverse_C_GetName, Param_Name) == 0x000000, "Member 'DungeonTraverse_C_GetName::Param_Name' has a wrong offset!");

}

