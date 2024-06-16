#pragma once

 

// Package: QuestDetailForMap

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "QuestDetail_FinishStatus_structs.hpp"


namespace SDK::Params
{

// Function QuestDetailForMap.QuestDetailForMap_C.OnFinish__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct QuestDetailForMap_C_OnFinish__DelegateSignature final
{
public:
	EQuestDetail_FinishStatus                     FinishStatus;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F66[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_QuestIndex;                                  // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetailForMap_C_OnFinish__DelegateSignature) == 0x000004, "Wrong alignment on QuestDetailForMap_C_OnFinish__DelegateSignature");
static_assert(sizeof(QuestDetailForMap_C_OnFinish__DelegateSignature) == 0x000008, "Wrong size on QuestDetailForMap_C_OnFinish__DelegateSignature");
static_assert(offsetof(QuestDetailForMap_C_OnFinish__DelegateSignature, FinishStatus) == 0x000000, "Member 'QuestDetailForMap_C_OnFinish__DelegateSignature::FinishStatus' has a wrong offset!");
static_assert(offsetof(QuestDetailForMap_C_OnFinish__DelegateSignature, Param_QuestIndex) == 0x000004, "Member 'QuestDetailForMap_C_OnFinish__DelegateSignature::Param_QuestIndex' has a wrong offset!");

// Function QuestDetailForMap.QuestDetailForMap_C.ExecuteUbergraph_QuestDetailForMap
// 0x0098 (0x0098 - 0x0000)
struct QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F67[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F68[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetParentWidget_Parent;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_Map_C*                       K2Node_DynamicCast_AsMap_Widget_Map;               // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F69[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7F6A[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetParentWidget_Parent_1;                 // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCommandMenuChildBase*                K2Node_DynamicCast_AsSBCommand_Menu_Child_Base;    // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F6B[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBCommandMenuInterface> K2Node_DynamicCast_AsSBCommand_Menu_Interface;     // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsShowMoveButton_OutParam;                // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F6C[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap) == 0x000008, "Wrong alignment on QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap");
static_assert(sizeof(QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap) == 0x000098, "Wrong size on QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap");
static_assert(offsetof(QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap, EntryPoint) == 0x000000, "Member 'QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap::EntryPoint' has a wrong offset!");
static_assert(offsetof(QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000010, "Member 'QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap, CallFunc_Not_PreBool_ReturnValue) == 0x000020, "Member 'QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap, CallFunc_GetParentWidget_Parent) == 0x000028, "Member 'QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap::CallFunc_GetParentWidget_Parent' has a wrong offset!");
static_assert(offsetof(QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap, K2Node_DynamicCast_AsMap_Widget_Map) == 0x000030, "Member 'QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap::K2Node_DynamicCast_AsMap_Widget_Map' has a wrong offset!");
static_assert(offsetof(QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap, K2Node_CreateDelegate_OutputDelegate) == 0x00003C, "Member 'QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap, CallFunc_GetParentWidget_Parent_1) == 0x000050, "Member 'QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap::CallFunc_GetParentWidget_Parent_1' has a wrong offset!");
static_assert(offsetof(QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap, K2Node_DynamicCast_AsSBCommand_Menu_Child_Base) == 0x000058, "Member 'QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap::K2Node_DynamicCast_AsSBCommand_Menu_Child_Base' has a wrong offset!");
static_assert(offsetof(QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap, K2Node_DynamicCast_AsSBCommand_Menu_Interface) == 0x000068, "Member 'QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap::K2Node_DynamicCast_AsSBCommand_Menu_Interface' has a wrong offset!");
static_assert(offsetof(QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap, K2Node_DynamicCast_bSuccess_2) == 0x000078, "Member 'QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap, CallFunc_IsShowMoveButton_OutParam) == 0x000079, "Member 'QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap::CallFunc_IsShowMoveButton_OutParam' has a wrong offset!");
static_assert(offsetof(QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap, CallFunc_Conv_IntToString_ReturnValue) == 0x000080, "Member 'QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap, CallFunc_Conv_StringToName_ReturnValue) == 0x000090, "Member 'QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");

// Function QuestDetailForMap.QuestDetailForMap_C.SetMoveButton
// 0x0001 (0x0001 - 0x0000)
struct QuestDetailForMap_C_SetMoveButton final
{
public:
	bool                                          InShowButton;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetailForMap_C_SetMoveButton) == 0x000001, "Wrong alignment on QuestDetailForMap_C_SetMoveButton");
static_assert(sizeof(QuestDetailForMap_C_SetMoveButton) == 0x000001, "Wrong size on QuestDetailForMap_C_SetMoveButton");
static_assert(offsetof(QuestDetailForMap_C_SetMoveButton, InShowButton) == 0x000000, "Member 'QuestDetailForMap_C_SetMoveButton::InShowButton' has a wrong offset!");

// Function QuestDetailForMap.QuestDetailForMap_C.IsShowMoveButton
// 0x0005 (0x0005 - 0x0000)
struct QuestDetailForMap_C_IsShowMoveButton final
{
public:
	bool                                          OutParam;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  CallFunc_GetQuestDisplayStatus_OutQuestStatus;     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetailForMap_C_IsShowMoveButton) == 0x000001, "Wrong alignment on QuestDetailForMap_C_IsShowMoveButton");
static_assert(sizeof(QuestDetailForMap_C_IsShowMoveButton) == 0x000005, "Wrong size on QuestDetailForMap_C_IsShowMoveButton");
static_assert(offsetof(QuestDetailForMap_C_IsShowMoveButton, OutParam) == 0x000000, "Member 'QuestDetailForMap_C_IsShowMoveButton::OutParam' has a wrong offset!");
static_assert(offsetof(QuestDetailForMap_C_IsShowMoveButton, CallFunc_GetQuestDisplayStatus_OutQuestStatus) == 0x000001, "Member 'QuestDetailForMap_C_IsShowMoveButton::CallFunc_GetQuestDisplayStatus_OutQuestStatus' has a wrong offset!");
static_assert(offsetof(QuestDetailForMap_C_IsShowMoveButton, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'QuestDetailForMap_C_IsShowMoveButton::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetailForMap_C_IsShowMoveButton, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000003, "Member 'QuestDetailForMap_C_IsShowMoveButton::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetailForMap_C_IsShowMoveButton, CallFunc_BooleanOR_ReturnValue) == 0x000004, "Member 'QuestDetailForMap_C_IsShowMoveButton::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

