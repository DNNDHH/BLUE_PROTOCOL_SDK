#pragma once

 

// Package: LoadingStatusDebug

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function LoadingStatusDebug.LoadingStatusDebug_C.ExecuteUbergraph_LoadingStatusDebug
// 0x0040 (0x0040 - 0x0000)
struct LoadingStatusDebug_C_ExecuteUbergraph_LoadingStatusDebug final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoadingStatusDebug_C_ExecuteUbergraph_LoadingStatusDebug) == 0x000004, "Wrong alignment on LoadingStatusDebug_C_ExecuteUbergraph_LoadingStatusDebug");
static_assert(sizeof(LoadingStatusDebug_C_ExecuteUbergraph_LoadingStatusDebug) == 0x000040, "Wrong size on LoadingStatusDebug_C_ExecuteUbergraph_LoadingStatusDebug");
static_assert(offsetof(LoadingStatusDebug_C_ExecuteUbergraph_LoadingStatusDebug, EntryPoint) == 0x000000, "Member 'LoadingStatusDebug_C_ExecuteUbergraph_LoadingStatusDebug::EntryPoint' has a wrong offset!");
static_assert(offsetof(LoadingStatusDebug_C_ExecuteUbergraph_LoadingStatusDebug, K2Node_Event_MyGeometry) == 0x000004, "Member 'LoadingStatusDebug_C_ExecuteUbergraph_LoadingStatusDebug::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(LoadingStatusDebug_C_ExecuteUbergraph_LoadingStatusDebug, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'LoadingStatusDebug_C_ExecuteUbergraph_LoadingStatusDebug::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function LoadingStatusDebug.LoadingStatusDebug_C.Tick
// 0x003C (0x003C - 0x0000)
struct LoadingStatusDebug_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoadingStatusDebug_C_Tick) == 0x000004, "Wrong alignment on LoadingStatusDebug_C_Tick");
static_assert(sizeof(LoadingStatusDebug_C_Tick) == 0x00003C, "Wrong size on LoadingStatusDebug_C_Tick");
static_assert(offsetof(LoadingStatusDebug_C_Tick, MyGeometry) == 0x000000, "Member 'LoadingStatusDebug_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(LoadingStatusDebug_C_Tick, InDeltaTime) == 0x000038, "Member 'LoadingStatusDebug_C_Tick::InDeltaTime' has a wrong offset!");

// Function LoadingStatusDebug.LoadingStatusDebug_C.UpdateStatus
// 0x0028 (0x0028 - 0x0000)
struct LoadingStatusDebug_C_UpdateStatus final
{
public:
	class FString                                 CallFunc_GetLoadingScreenStatus_ReturnValue;       // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(LoadingStatusDebug_C_UpdateStatus) == 0x000008, "Wrong alignment on LoadingStatusDebug_C_UpdateStatus");
static_assert(sizeof(LoadingStatusDebug_C_UpdateStatus) == 0x000028, "Wrong size on LoadingStatusDebug_C_UpdateStatus");
static_assert(offsetof(LoadingStatusDebug_C_UpdateStatus, CallFunc_GetLoadingScreenStatus_ReturnValue) == 0x000000, "Member 'LoadingStatusDebug_C_UpdateStatus::CallFunc_GetLoadingScreenStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingStatusDebug_C_UpdateStatus, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'LoadingStatusDebug_C_UpdateStatus::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function LoadingStatusDebug.LoadingStatusDebug_C.UpdateVisibility
// 0x0005 (0x0005 - 0x0000)
struct LoadingStatusDebug_C_UpdateVisibility final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLoadingScreenDebugEnable_ReturnValue;  // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoadingStatusDebug_C_UpdateVisibility) == 0x000001, "Wrong alignment on LoadingStatusDebug_C_UpdateVisibility");
static_assert(sizeof(LoadingStatusDebug_C_UpdateVisibility) == 0x000005, "Wrong size on LoadingStatusDebug_C_UpdateVisibility");
static_assert(offsetof(LoadingStatusDebug_C_UpdateVisibility, Temp_bool_Variable) == 0x000000, "Member 'LoadingStatusDebug_C_UpdateVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LoadingStatusDebug_C_UpdateVisibility, Temp_byte_Variable) == 0x000001, "Member 'LoadingStatusDebug_C_UpdateVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LoadingStatusDebug_C_UpdateVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'LoadingStatusDebug_C_UpdateVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LoadingStatusDebug_C_UpdateVisibility, CallFunc_GetLoadingScreenDebugEnable_ReturnValue) == 0x000003, "Member 'LoadingStatusDebug_C_UpdateVisibility::CallFunc_GetLoadingScreenDebugEnable_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingStatusDebug_C_UpdateVisibility, K2Node_Select_Default) == 0x000004, "Member 'LoadingStatusDebug_C_UpdateVisibility::K2Node_Select_Default' has a wrong offset!");

}

