#pragma once

 

// Package: CommonAimModeUI

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Slate_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CommonAimModeUI.CommonAimModeUI_C.ExecuteUbergraph_CommonAimModeUI
// 0x0058 (0x0058 - 0x0000)
struct CommonAimModeUI_C_ExecuteUbergraph_CommonAimModeUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetReticleLocation_ReturnValue;           // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x000C(0x0010)(NoDestructor)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x001C(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonAimModeUI_C_ExecuteUbergraph_CommonAimModeUI) == 0x000004, "Wrong alignment on CommonAimModeUI_C_ExecuteUbergraph_CommonAimModeUI");
static_assert(sizeof(CommonAimModeUI_C_ExecuteUbergraph_CommonAimModeUI) == 0x000058, "Wrong size on CommonAimModeUI_C_ExecuteUbergraph_CommonAimModeUI");
static_assert(offsetof(CommonAimModeUI_C_ExecuteUbergraph_CommonAimModeUI, EntryPoint) == 0x000000, "Member 'CommonAimModeUI_C_ExecuteUbergraph_CommonAimModeUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonAimModeUI_C_ExecuteUbergraph_CommonAimModeUI, CallFunc_GetReticleLocation_ReturnValue) == 0x000004, "Member 'CommonAimModeUI_C_ExecuteUbergraph_CommonAimModeUI::CallFunc_GetReticleLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonAimModeUI_C_ExecuteUbergraph_CommonAimModeUI, K2Node_MakeStruct_Anchors) == 0x00000C, "Member 'CommonAimModeUI_C_ExecuteUbergraph_CommonAimModeUI::K2Node_MakeStruct_Anchors' has a wrong offset!");
static_assert(offsetof(CommonAimModeUI_C_ExecuteUbergraph_CommonAimModeUI, K2Node_Event_MyGeometry) == 0x00001C, "Member 'CommonAimModeUI_C_ExecuteUbergraph_CommonAimModeUI::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(CommonAimModeUI_C_ExecuteUbergraph_CommonAimModeUI, K2Node_Event_InDeltaTime) == 0x000054, "Member 'CommonAimModeUI_C_ExecuteUbergraph_CommonAimModeUI::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function CommonAimModeUI.CommonAimModeUI_C.Tick
// 0x003C (0x003C - 0x0000)
struct CommonAimModeUI_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonAimModeUI_C_Tick) == 0x000004, "Wrong alignment on CommonAimModeUI_C_Tick");
static_assert(sizeof(CommonAimModeUI_C_Tick) == 0x00003C, "Wrong size on CommonAimModeUI_C_Tick");
static_assert(offsetof(CommonAimModeUI_C_Tick, MyGeometry) == 0x000000, "Member 'CommonAimModeUI_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(CommonAimModeUI_C_Tick, InDeltaTime) == 0x000038, "Member 'CommonAimModeUI_C_Tick::InDeltaTime' has a wrong offset!");

// Function CommonAimModeUI.CommonAimModeUI_C.Set Ray Hit
// 0x0009 (0x0009 - 0x0000)
struct CommonAimModeUI_C_Set_Ray_Hit final
{
public:
	bool                                          bReyHit;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonAimModeUI_C_Set_Ray_Hit) == 0x000001, "Wrong alignment on CommonAimModeUI_C_Set_Ray_Hit");
static_assert(sizeof(CommonAimModeUI_C_Set_Ray_Hit) == 0x000009, "Wrong size on CommonAimModeUI_C_Set_Ray_Hit");
static_assert(offsetof(CommonAimModeUI_C_Set_Ray_Hit, bReyHit) == 0x000000, "Member 'CommonAimModeUI_C_Set_Ray_Hit::bReyHit' has a wrong offset!");
static_assert(offsetof(CommonAimModeUI_C_Set_Ray_Hit, Temp_byte_Variable) == 0x000001, "Member 'CommonAimModeUI_C_Set_Ray_Hit::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonAimModeUI_C_Set_Ray_Hit, Temp_byte_Variable_1) == 0x000002, "Member 'CommonAimModeUI_C_Set_Ray_Hit::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonAimModeUI_C_Set_Ray_Hit, Temp_bool_Variable) == 0x000003, "Member 'CommonAimModeUI_C_Set_Ray_Hit::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonAimModeUI_C_Set_Ray_Hit, Temp_byte_Variable_2) == 0x000004, "Member 'CommonAimModeUI_C_Set_Ray_Hit::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonAimModeUI_C_Set_Ray_Hit, Temp_byte_Variable_3) == 0x000005, "Member 'CommonAimModeUI_C_Set_Ray_Hit::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CommonAimModeUI_C_Set_Ray_Hit, K2Node_Select_Default) == 0x000006, "Member 'CommonAimModeUI_C_Set_Ray_Hit::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonAimModeUI_C_Set_Ray_Hit, Temp_bool_Variable_1) == 0x000007, "Member 'CommonAimModeUI_C_Set_Ray_Hit::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonAimModeUI_C_Set_Ray_Hit, K2Node_Select_Default_1) == 0x000008, "Member 'CommonAimModeUI_C_Set_Ray_Hit::K2Node_Select_Default_1' has a wrong offset!");

// Function CommonAimModeUI.CommonAimModeUI_C.SetClassType
// 0x0002 (0x0002 - 0x0000)
struct CommonAimModeUI_C_SetClassType final
{
public:
	ESBClassType                                  Param_ClassType;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_isTargetMarkerShooterType_ReturnValue;    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonAimModeUI_C_SetClassType) == 0x000001, "Wrong alignment on CommonAimModeUI_C_SetClassType");
static_assert(sizeof(CommonAimModeUI_C_SetClassType) == 0x000002, "Wrong size on CommonAimModeUI_C_SetClassType");
static_assert(offsetof(CommonAimModeUI_C_SetClassType, Param_ClassType) == 0x000000, "Member 'CommonAimModeUI_C_SetClassType::Param_ClassType' has a wrong offset!");
static_assert(offsetof(CommonAimModeUI_C_SetClassType, CallFunc_isTargetMarkerShooterType_ReturnValue) == 0x000001, "Member 'CommonAimModeUI_C_SetClassType::CallFunc_isTargetMarkerShooterType_ReturnValue' has a wrong offset!");

}

