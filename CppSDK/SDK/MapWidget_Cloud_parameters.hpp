#pragma once

 

// Package: MapWidget_Cloud

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function MapWidget_Cloud.MapWidget_Cloud_C.ExecuteUbergraph_MapWidget_Cloud
// 0x00A8 (0x00A8 - 0x0000)
struct MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_3;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetViewportScale_ReturnValue;             // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;               // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_4;         // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue_1;            // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetViewportScale_ReturnValue_1;           // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_5;         // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_6;         // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_3;               // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0084(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0094(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud) == 0x000004, "Wrong alignment on MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud");
static_assert(sizeof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud) == 0x0000A8, "Wrong size on MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, EntryPoint) == 0x000000, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_RandomFloatInRange_ReturnValue) == 0x000004, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000008, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_Add_FloatFloat_ReturnValue) == 0x00000C, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000010, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x000014, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_MakeVector2D_ReturnValue) == 0x000018, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_RandomFloatInRange_ReturnValue_3) == 0x000020, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_RandomFloatInRange_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_GetViewportSize_ReturnValue) == 0x000024, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_MakeVector2D_ReturnValue_1) == 0x00002C, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_BreakVector2D_X) == 0x000034, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_BreakVector2D_Y) == 0x000038, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_GetViewportScale_ReturnValue) == 0x00003C, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_GetViewportScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000040, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000044, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000048, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x00004C, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_MakeVector2D_ReturnValue_2) == 0x000050, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_MakeVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_RandomFloatInRange_ReturnValue_4) == 0x000058, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_RandomFloatInRange_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_GetViewportSize_ReturnValue_1) == 0x00005C, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_GetViewportSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_GetViewportScale_ReturnValue_1) == 0x000064, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_GetViewportScale_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_BreakVector2D_X_1) == 0x000068, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_BreakVector2D_Y_1) == 0x00006C, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000070, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_RandomFloatInRange_ReturnValue_5) == 0x000074, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_RandomFloatInRange_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_RandomFloatInRange_ReturnValue_6) == 0x000078, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_RandomFloatInRange_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, CallFunc_MakeVector2D_ReturnValue_3) == 0x00007C, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::CallFunc_MakeVector2D_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, K2Node_CreateDelegate_OutputDelegate) == 0x000084, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, K2Node_CreateDelegate_OutputDelegate_1) == 0x000094, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud, K2Node_Event_IsDesignTime) == 0x0000A4, "Member 'MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function MapWidget_Cloud.MapWidget_Cloud_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_Cloud_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_Cloud_C_PreConstruct) == 0x000001, "Wrong alignment on MapWidget_Cloud_C_PreConstruct");
static_assert(sizeof(MapWidget_Cloud_C_PreConstruct) == 0x000001, "Wrong size on MapWidget_Cloud_C_PreConstruct");
static_assert(offsetof(MapWidget_Cloud_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MapWidget_Cloud_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

