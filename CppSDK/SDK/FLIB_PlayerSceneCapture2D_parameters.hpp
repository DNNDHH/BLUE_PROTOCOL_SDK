#pragma once

 

// Package: FLIB_PlayerSceneCapture2D

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "PlayerSceneCapture2D_MapSpawnConfig_structs.hpp"


namespace SDK::Params
{

// Function FLIB_PlayerSceneCapture2D.FLIB_PlayerSceneCapture2D_C.SpawnPlayerCaptureStudio
// 0x0070 (0x0070 - 0x0000)
struct FLIB_PlayerSceneCapture2D_C_SpawnPlayerCaptureStudio final
{
public:
	int32                                         Priority;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7242[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerSceneCapture2D_Studio_C*      ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue;          // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         Pad_7243[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_Find_Curr_Map_Player_Avatar_Transform_OutTransform; // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerSceneCapture2D_Studio_C*      CallFunc_FinishSpawningActor_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_PlayerSceneCapture2D_C_SpawnPlayerCaptureStudio) == 0x000010, "Wrong alignment on FLIB_PlayerSceneCapture2D_C_SpawnPlayerCaptureStudio");
static_assert(sizeof(FLIB_PlayerSceneCapture2D_C_SpawnPlayerCaptureStudio) == 0x000070, "Wrong size on FLIB_PlayerSceneCapture2D_C_SpawnPlayerCaptureStudio");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_SpawnPlayerCaptureStudio, Priority) == 0x000000, "Member 'FLIB_PlayerSceneCapture2D_C_SpawnPlayerCaptureStudio::Priority' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_SpawnPlayerCaptureStudio, __WorldContext) == 0x000008, "Member 'FLIB_PlayerSceneCapture2D_C_SpawnPlayerCaptureStudio::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_SpawnPlayerCaptureStudio, ReturnValue) == 0x000010, "Member 'FLIB_PlayerSceneCapture2D_C_SpawnPlayerCaptureStudio::ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_SpawnPlayerCaptureStudio, CallFunc_GetCurrentLevelName_ReturnValue) == 0x000018, "Member 'FLIB_PlayerSceneCapture2D_C_SpawnPlayerCaptureStudio::CallFunc_GetCurrentLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_SpawnPlayerCaptureStudio, CallFunc_Find_Curr_Map_Player_Avatar_Transform_OutTransform) == 0x000030, "Member 'FLIB_PlayerSceneCapture2D_C_SpawnPlayerCaptureStudio::CallFunc_Find_Curr_Map_Player_Avatar_Transform_OutTransform' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_SpawnPlayerCaptureStudio, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000060, "Member 'FLIB_PlayerSceneCapture2D_C_SpawnPlayerCaptureStudio::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_SpawnPlayerCaptureStudio, CallFunc_FinishSpawningActor_ReturnValue) == 0x000068, "Member 'FLIB_PlayerSceneCapture2D_C_SpawnPlayerCaptureStudio::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function FLIB_PlayerSceneCapture2D.FLIB_PlayerSceneCapture2D_C.Find Curr Map Player Avatar Transform
// 0x0110 (0x0110 - 0x0000)
struct FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform final
{
public:
	class FString                                 InCurrMapName;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7244[0x8];                                     // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             OutTransform;                                      // 0x0020(0x0030)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FTransform                             AvatarTransform;                                   // 0x0050(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7245[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0090(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x00A4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7246[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerSceneCapture2D_MapSpawnConfig   CallFunc_GetDataTableRowFromName_OutRow;           // 0x00B0(0x0020)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7247[0xE];                                     // 0x00D2(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00E0(0x0030)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform) == 0x000010, "Wrong alignment on FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform");
static_assert(sizeof(FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform) == 0x000110, "Wrong size on FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform, InCurrMapName) == 0x000000, "Member 'FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform::InCurrMapName' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform, __WorldContext) == 0x000010, "Member 'FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform, OutTransform) == 0x000020, "Member 'FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform::OutTransform' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform, AvatarTransform) == 0x000050, "Member 'FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform::AvatarTransform' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform, Temp_int_Array_Index_Variable) == 0x000080, "Member 'FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform, Temp_int_Loop_Counter_Variable) == 0x000084, "Member 'FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform, CallFunc_Add_IntInt_ReturnValue) == 0x000088, "Member 'FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000090, "Member 'FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform, CallFunc_Array_Length_ReturnValue) == 0x0000A0, "Member 'FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform, CallFunc_Array_Get_Item) == 0x0000A4, "Member 'FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform, CallFunc_Less_IntInt_ReturnValue) == 0x0000AC, "Member 'FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000B0, "Member 'FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000D0, "Member 'FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000D1, "Member 'FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform, CallFunc_MakeTransform_ReturnValue) == 0x0000E0, "Member 'FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");

// Function FLIB_PlayerSceneCapture2D.FLIB_PlayerSceneCapture2D_C.GetAnalogStickRotate
// 0x0038 (0x0038 - 0x0000)
struct FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bValid;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7248[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RotateValue;                                       // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7249[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInputAnalogStickState_StickX;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInputAnalogStickState_StickY;          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_724A[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_1;                             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate) == 0x000008, "Wrong alignment on FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate");
static_assert(sizeof(FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate) == 0x000038, "Wrong size on FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate, __WorldContext) == 0x000000, "Member 'FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate, bValid) == 0x000008, "Member 'FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate::bValid' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate, RotateValue) == 0x00000C, "Member 'FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate::RotateValue' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate, Temp_bool_Variable) == 0x000010, "Member 'FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate, Temp_float_Variable) == 0x000020, "Member 'FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate, CallFunc_GetInputAnalogStickState_StickX) == 0x000024, "Member 'FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate::CallFunc_GetInputAnalogStickState_StickX' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate, CallFunc_GetInputAnalogStickState_StickY) == 0x000028, "Member 'FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate::CallFunc_GetInputAnalogStickState_StickY' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00002C, "Member 'FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x00002D, "Member 'FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate, Temp_float_Variable_1) == 0x000030, "Member 'FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate, K2Node_Select_Default) == 0x000034, "Member 'FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate::K2Node_Select_Default' has a wrong offset!");

// Function FLIB_PlayerSceneCapture2D.FLIB_PlayerSceneCapture2D_C.GetMouseRotate
// 0x0038 (0x0038 - 0x0000)
struct FLIB_PlayerSceneCapture2D_C_GetMouseRotate final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bValid;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_724B[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RotateValue;                                       // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_724C[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetInputMouseDelta_DeltaX;                // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInputMouseDelta_DeltaY;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFOVAngle_ReturnValue;                  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_PlayerSceneCapture2D_C_GetMouseRotate) == 0x000008, "Wrong alignment on FLIB_PlayerSceneCapture2D_C_GetMouseRotate");
static_assert(sizeof(FLIB_PlayerSceneCapture2D_C_GetMouseRotate) == 0x000038, "Wrong size on FLIB_PlayerSceneCapture2D_C_GetMouseRotate");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_GetMouseRotate, __WorldContext) == 0x000000, "Member 'FLIB_PlayerSceneCapture2D_C_GetMouseRotate::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_GetMouseRotate, bValid) == 0x000008, "Member 'FLIB_PlayerSceneCapture2D_C_GetMouseRotate::bValid' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_GetMouseRotate, RotateValue) == 0x00000C, "Member 'FLIB_PlayerSceneCapture2D_C_GetMouseRotate::RotateValue' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_GetMouseRotate, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'FLIB_PlayerSceneCapture2D_C_GetMouseRotate::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_GetMouseRotate, CallFunc_IsInputKeyDown_ReturnValue) == 0x000018, "Member 'FLIB_PlayerSceneCapture2D_C_GetMouseRotate::CallFunc_IsInputKeyDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_GetMouseRotate, CallFunc_GetInputMouseDelta_DeltaX) == 0x00001C, "Member 'FLIB_PlayerSceneCapture2D_C_GetMouseRotate::CallFunc_GetInputMouseDelta_DeltaX' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_GetMouseRotate, CallFunc_GetInputMouseDelta_DeltaY) == 0x000020, "Member 'FLIB_PlayerSceneCapture2D_C_GetMouseRotate::CallFunc_GetInputMouseDelta_DeltaY' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_GetMouseRotate, CallFunc_GetFOVAngle_ReturnValue) == 0x000024, "Member 'FLIB_PlayerSceneCapture2D_C_GetMouseRotate::CallFunc_GetFOVAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_GetMouseRotate, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000028, "Member 'FLIB_PlayerSceneCapture2D_C_GetMouseRotate::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_GetMouseRotate, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00002C, "Member 'FLIB_PlayerSceneCapture2D_C_GetMouseRotate::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_PlayerSceneCapture2D_C_GetMouseRotate, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000030, "Member 'FLIB_PlayerSceneCapture2D_C_GetMouseRotate::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");

}

