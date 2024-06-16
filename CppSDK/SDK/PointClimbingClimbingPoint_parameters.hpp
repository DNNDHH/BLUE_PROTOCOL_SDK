#pragma once

 

// Package: PointClimbingClimbingPoint

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function PointClimbingClimbingPoint.PointClimbingClimbingPoint_C.ExecuteUbergraph_PointClimbingClimbingPoint
// 0x0018 (0x0018 - 0x0000)
struct PointClimbingClimbingPoint_C_ExecuteUbergraph_PointClimbingClimbingPoint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45BB[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PointClimbingClimbingPoint_C_ExecuteUbergraph_PointClimbingClimbingPoint) == 0x000008, "Wrong alignment on PointClimbingClimbingPoint_C_ExecuteUbergraph_PointClimbingClimbingPoint");
static_assert(sizeof(PointClimbingClimbingPoint_C_ExecuteUbergraph_PointClimbingClimbingPoint) == 0x000018, "Wrong size on PointClimbingClimbingPoint_C_ExecuteUbergraph_PointClimbingClimbingPoint");
static_assert(offsetof(PointClimbingClimbingPoint_C_ExecuteUbergraph_PointClimbingClimbingPoint, EntryPoint) == 0x000000, "Member 'PointClimbingClimbingPoint_C_ExecuteUbergraph_PointClimbingClimbingPoint::EntryPoint' has a wrong offset!");
static_assert(offsetof(PointClimbingClimbingPoint_C_ExecuteUbergraph_PointClimbingClimbingPoint, K2Node_Event_IsDesignTime) == 0x000004, "Member 'PointClimbingClimbingPoint_C_ExecuteUbergraph_PointClimbingClimbingPoint::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(PointClimbingClimbingPoint_C_ExecuteUbergraph_PointClimbingClimbingPoint, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'PointClimbingClimbingPoint_C_ExecuteUbergraph_PointClimbingClimbingPoint::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(PointClimbingClimbingPoint_C_ExecuteUbergraph_PointClimbingClimbingPoint, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'PointClimbingClimbingPoint_C_ExecuteUbergraph_PointClimbingClimbingPoint::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function PointClimbingClimbingPoint.PointClimbingClimbingPoint_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct PointClimbingClimbingPoint_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PointClimbingClimbingPoint_C_PreConstruct) == 0x000001, "Wrong alignment on PointClimbingClimbingPoint_C_PreConstruct");
static_assert(sizeof(PointClimbingClimbingPoint_C_PreConstruct) == 0x000001, "Wrong size on PointClimbingClimbingPoint_C_PreConstruct");
static_assert(offsetof(PointClimbingClimbingPoint_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'PointClimbingClimbingPoint_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function PointClimbingClimbingPoint.PointClimbingClimbingPoint_C.SetPointLocation
// 0x0048 (0x0048 - 0x0000)
struct PointClimbingClimbingPoint_C_SetPointLocation final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Condition;                                         // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45BC[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_ProjectWorldToScreen_ScreenPosition;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProjectWorldToScreen_ReturnValue;         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PointClimbingClimbingPoint_C_SetPointLocation) == 0x000008, "Wrong alignment on PointClimbingClimbingPoint_C_SetPointLocation");
static_assert(sizeof(PointClimbingClimbingPoint_C_SetPointLocation) == 0x000048, "Wrong size on PointClimbingClimbingPoint_C_SetPointLocation");
static_assert(offsetof(PointClimbingClimbingPoint_C_SetPointLocation, Location) == 0x000000, "Member 'PointClimbingClimbingPoint_C_SetPointLocation::Location' has a wrong offset!");
static_assert(offsetof(PointClimbingClimbingPoint_C_SetPointLocation, Condition) == 0x00000C, "Member 'PointClimbingClimbingPoint_C_SetPointLocation::Condition' has a wrong offset!");
static_assert(offsetof(PointClimbingClimbingPoint_C_SetPointLocation, CallFunc_Concat_StrStr_ReturnValue) == 0x000010, "Member 'PointClimbingClimbingPoint_C_SetPointLocation::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(PointClimbingClimbingPoint_C_SetPointLocation, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000020, "Member 'PointClimbingClimbingPoint_C_SetPointLocation::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PointClimbingClimbingPoint_C_SetPointLocation, CallFunc_GetPlayerController_ReturnValue) == 0x000030, "Member 'PointClimbingClimbingPoint_C_SetPointLocation::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PointClimbingClimbingPoint_C_SetPointLocation, CallFunc_ProjectWorldToScreen_ScreenPosition) == 0x000038, "Member 'PointClimbingClimbingPoint_C_SetPointLocation::CallFunc_ProjectWorldToScreen_ScreenPosition' has a wrong offset!");
static_assert(offsetof(PointClimbingClimbingPoint_C_SetPointLocation, CallFunc_ProjectWorldToScreen_ReturnValue) == 0x000040, "Member 'PointClimbingClimbingPoint_C_SetPointLocation::CallFunc_ProjectWorldToScreen_ReturnValue' has a wrong offset!");
static_assert(offsetof(PointClimbingClimbingPoint_C_SetPointLocation, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'PointClimbingClimbingPoint_C_SetPointLocation::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function PointClimbingClimbingPoint.PointClimbingClimbingPoint_C.SetPointLocation2D
// 0x0024 (0x0024 - 0x0000)
struct PointClimbingClimbingPoint_C_SetPointLocation2D final
{
public:
	struct FVector2D                              Location;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetViewportScale_ReturnValue;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PointClimbingClimbingPoint_C_SetPointLocation2D) == 0x000004, "Wrong alignment on PointClimbingClimbingPoint_C_SetPointLocation2D");
static_assert(sizeof(PointClimbingClimbingPoint_C_SetPointLocation2D) == 0x000024, "Wrong size on PointClimbingClimbingPoint_C_SetPointLocation2D");
static_assert(offsetof(PointClimbingClimbingPoint_C_SetPointLocation2D, Location) == 0x000000, "Member 'PointClimbingClimbingPoint_C_SetPointLocation2D::Location' has a wrong offset!");
static_assert(offsetof(PointClimbingClimbingPoint_C_SetPointLocation2D, CallFunc_GetViewportScale_ReturnValue) == 0x000008, "Member 'PointClimbingClimbingPoint_C_SetPointLocation2D::CallFunc_GetViewportScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(PointClimbingClimbingPoint_C_SetPointLocation2D, CallFunc_Divide_Vector2DFloat_ReturnValue) == 0x00000C, "Member 'PointClimbingClimbingPoint_C_SetPointLocation2D::CallFunc_Divide_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PointClimbingClimbingPoint_C_SetPointLocation2D, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000014, "Member 'PointClimbingClimbingPoint_C_SetPointLocation2D::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PointClimbingClimbingPoint_C_SetPointLocation2D, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x00001C, "Member 'PointClimbingClimbingPoint_C_SetPointLocation2D::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");

}

