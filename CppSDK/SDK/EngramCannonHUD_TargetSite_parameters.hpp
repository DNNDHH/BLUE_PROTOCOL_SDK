#pragma once

 

// Package: EngramCannonHUD_TargetSite

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.ExecuteUbergraph_EngramCannonHUD_TargetSite
// 0x0048 (0x0048 - 0x0000)
struct EngramCannonHUD_TargetSite_C_ExecuteUbergraph_EngramCannonHUD_TargetSite final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EngramCannonHUD_TargetSite_C_ExecuteUbergraph_EngramCannonHUD_TargetSite) == 0x000004, "Wrong alignment on EngramCannonHUD_TargetSite_C_ExecuteUbergraph_EngramCannonHUD_TargetSite");
static_assert(sizeof(EngramCannonHUD_TargetSite_C_ExecuteUbergraph_EngramCannonHUD_TargetSite) == 0x000048, "Wrong size on EngramCannonHUD_TargetSite_C_ExecuteUbergraph_EngramCannonHUD_TargetSite");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_ExecuteUbergraph_EngramCannonHUD_TargetSite, EntryPoint) == 0x000000, "Member 'EngramCannonHUD_TargetSite_C_ExecuteUbergraph_EngramCannonHUD_TargetSite::EntryPoint' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_ExecuteUbergraph_EngramCannonHUD_TargetSite, K2Node_Event_MyGeometry) == 0x000004, "Member 'EngramCannonHUD_TargetSite_C_ExecuteUbergraph_EngramCannonHUD_TargetSite::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_ExecuteUbergraph_EngramCannonHUD_TargetSite, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'EngramCannonHUD_TargetSite_C_ExecuteUbergraph_EngramCannonHUD_TargetSite::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_ExecuteUbergraph_EngramCannonHUD_TargetSite, CallFunc_Add_FloatFloat_ReturnValue) == 0x000040, "Member 'EngramCannonHUD_TargetSite_C_ExecuteUbergraph_EngramCannonHUD_TargetSite::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_ExecuteUbergraph_EngramCannonHUD_TargetSite, CallFunc_Less_FloatFloat_ReturnValue) == 0x000044, "Member 'EngramCannonHUD_TargetSite_C_ExecuteUbergraph_EngramCannonHUD_TargetSite::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

// Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.Tick
// 0x003C (0x003C - 0x0000)
struct EngramCannonHUD_TargetSite_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EngramCannonHUD_TargetSite_C_Tick) == 0x000004, "Wrong alignment on EngramCannonHUD_TargetSite_C_Tick");
static_assert(sizeof(EngramCannonHUD_TargetSite_C_Tick) == 0x00003C, "Wrong size on EngramCannonHUD_TargetSite_C_Tick");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_Tick, MyGeometry) == 0x000000, "Member 'EngramCannonHUD_TargetSite_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_Tick, InDeltaTime) == 0x000038, "Member 'EngramCannonHUD_TargetSite_C_Tick::InDeltaTime' has a wrong offset!");

// Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.Get Camera Foward Point
// 0x0058 (0x0058 - 0x0000)
struct EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point final
{
public:
	float                                         Distance;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ReturnValue;                                       // 0x0004(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4581[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetCameraLocation_ReturnValue;            // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point) == 0x000008, "Wrong alignment on EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point");
static_assert(sizeof(EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point) == 0x000058, "Wrong size on EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point, Distance) == 0x000000, "Member 'EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point::Distance' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point, ReturnValue) == 0x000004, "Member 'EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point::ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000018, "Member 'EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point, CallFunc_GetActorForwardVector_ReturnValue) == 0x000024, "Member 'EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point, CallFunc_GetCameraLocation_ReturnValue) == 0x000030, "Member 'EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point::CallFunc_GetCameraLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x00003C, "Member 'EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point, CallFunc_Add_VectorVector_ReturnValue) == 0x000048, "Member 'EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

// Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.InitPoint
// 0x000C (0x000C - 0x0000)
struct EngramCannonHUD_TargetSite_C_InitPoint final
{
public:
	struct FVector                                CallFunc_Get_Camera_Foward_Point_ReturnValue;      // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EngramCannonHUD_TargetSite_C_InitPoint) == 0x000004, "Wrong alignment on EngramCannonHUD_TargetSite_C_InitPoint");
static_assert(sizeof(EngramCannonHUD_TargetSite_C_InitPoint) == 0x00000C, "Wrong size on EngramCannonHUD_TargetSite_C_InitPoint");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_InitPoint, CallFunc_Get_Camera_Foward_Point_ReturnValue) == 0x000000, "Member 'EngramCannonHUD_TargetSite_C_InitPoint::CallFunc_Get_Camera_Foward_Point_ReturnValue' has a wrong offset!");

// Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.UpdatePoint
// 0x000C (0x000C - 0x0000)
struct EngramCannonHUD_TargetSite_C_UpdatePoint final
{
public:
	struct FVector                                CallFunc_Get_Camera_Foward_Point_ReturnValue;      // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EngramCannonHUD_TargetSite_C_UpdatePoint) == 0x000004, "Wrong alignment on EngramCannonHUD_TargetSite_C_UpdatePoint");
static_assert(sizeof(EngramCannonHUD_TargetSite_C_UpdatePoint) == 0x00000C, "Wrong size on EngramCannonHUD_TargetSite_C_UpdatePoint");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdatePoint, CallFunc_Get_Camera_Foward_Point_ReturnValue) == 0x000000, "Member 'EngramCannonHUD_TargetSite_C_UpdatePoint::CallFunc_Get_Camera_Foward_Point_ReturnValue' has a wrong offset!");

// Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.UpdateWidgetLocation
// 0x0078 (0x0078 - 0x0000)
struct EngramCannonHUD_TargetSite_C_UpdateWidgetLocation final
{
public:
	class UWidget*                                WidgetObject;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Delta_Time;                                        // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Move_Speed;                                        // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4582[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_ProjectWorldToScreen_OutScreenPosition;   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ProjectWorldToScreen_OutDepth;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ProjectWorldToScreen_OutRHW;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProjectWorldToScreen_ReturnValue;         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4583[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Vector2DInterpTo_ReturnValue;             // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EngramCannonHUD_TargetSite_C_UpdateWidgetLocation) == 0x000008, "Wrong alignment on EngramCannonHUD_TargetSite_C_UpdateWidgetLocation");
static_assert(sizeof(EngramCannonHUD_TargetSite_C_UpdateWidgetLocation) == 0x000078, "Wrong size on EngramCannonHUD_TargetSite_C_UpdateWidgetLocation");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateWidgetLocation, WidgetObject) == 0x000000, "Member 'EngramCannonHUD_TargetSite_C_UpdateWidgetLocation::WidgetObject' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateWidgetLocation, Location) == 0x000008, "Member 'EngramCannonHUD_TargetSite_C_UpdateWidgetLocation::Location' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateWidgetLocation, Delta_Time) == 0x000014, "Member 'EngramCannonHUD_TargetSite_C_UpdateWidgetLocation::Delta_Time' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateWidgetLocation, Move_Speed) == 0x000018, "Member 'EngramCannonHUD_TargetSite_C_UpdateWidgetLocation::Move_Speed' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateWidgetLocation, CallFunc_GetViewportSize_ReturnValue) == 0x00001C, "Member 'EngramCannonHUD_TargetSite_C_UpdateWidgetLocation::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateWidgetLocation, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000024, "Member 'EngramCannonHUD_TargetSite_C_UpdateWidgetLocation::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateWidgetLocation, CallFunc_GetPlayerController_ReturnValue) == 0x000030, "Member 'EngramCannonHUD_TargetSite_C_UpdateWidgetLocation::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateWidgetLocation, CallFunc_ProjectWorldToScreen_OutScreenPosition) == 0x000038, "Member 'EngramCannonHUD_TargetSite_C_UpdateWidgetLocation::CallFunc_ProjectWorldToScreen_OutScreenPosition' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateWidgetLocation, CallFunc_ProjectWorldToScreen_OutDepth) == 0x000040, "Member 'EngramCannonHUD_TargetSite_C_UpdateWidgetLocation::CallFunc_ProjectWorldToScreen_OutDepth' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateWidgetLocation, CallFunc_ProjectWorldToScreen_OutRHW) == 0x000044, "Member 'EngramCannonHUD_TargetSite_C_UpdateWidgetLocation::CallFunc_ProjectWorldToScreen_OutRHW' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateWidgetLocation, CallFunc_ProjectWorldToScreen_ReturnValue) == 0x000048, "Member 'EngramCannonHUD_TargetSite_C_UpdateWidgetLocation::CallFunc_ProjectWorldToScreen_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateWidgetLocation, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x00004C, "Member 'EngramCannonHUD_TargetSite_C_UpdateWidgetLocation::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateWidgetLocation, CallFunc_Vector2DInterpTo_ReturnValue) == 0x000054, "Member 'EngramCannonHUD_TargetSite_C_UpdateWidgetLocation::CallFunc_Vector2DInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateWidgetLocation, CallFunc_BreakVector2D_X) == 0x00005C, "Member 'EngramCannonHUD_TargetSite_C_UpdateWidgetLocation::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateWidgetLocation, CallFunc_BreakVector2D_Y) == 0x000060, "Member 'EngramCannonHUD_TargetSite_C_UpdateWidgetLocation::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateWidgetLocation, CallFunc_FClamp_ReturnValue) == 0x000064, "Member 'EngramCannonHUD_TargetSite_C_UpdateWidgetLocation::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateWidgetLocation, CallFunc_FClamp_ReturnValue_1) == 0x000068, "Member 'EngramCannonHUD_TargetSite_C_UpdateWidgetLocation::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateWidgetLocation, CallFunc_MakeVector2D_ReturnValue) == 0x00006C, "Member 'EngramCannonHUD_TargetSite_C_UpdateWidgetLocation::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.UpdateArrowVisible
// 0x0098 (0x0098 - 0x0000)
struct EngramCannonHUD_TargetSite_C_UpdateArrowVisible final
{
public:
	TArray<class UImage*>                         ArrowAssetList;                                    // 0x0000(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<bool>                                  IsLimitList;                                       // 0x0010(0x0010)(Edit, BlueprintVisible)
	float                                         Tolerance;                                         // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4584[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4585[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4586[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4587[0x5];                                     // 0x004B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4588[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerEngramCannonComponent*         CallFunc_GetPlayerEngramCannonComponent_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Get_Item_1;                         // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4589[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UImage*>                         K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_IsRotateLimit_ReturnValue;                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRotateLimit_ReturnValue_1;              // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRotateLimit_ReturnValue_2;              // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRotateLimit_ReturnValue_3;              // 0x0083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_458A[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  K2Node_MakeArray_Array_1;                          // 0x0088(0x0010)(ReferenceParm)
};
static_assert(alignof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible) == 0x000008, "Wrong alignment on EngramCannonHUD_TargetSite_C_UpdateArrowVisible");
static_assert(sizeof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible) == 0x000098, "Wrong size on EngramCannonHUD_TargetSite_C_UpdateArrowVisible");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, ArrowAssetList) == 0x000000, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::ArrowAssetList' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, IsLimitList) == 0x000010, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::IsLimitList' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, Tolerance) == 0x000020, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::Tolerance' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, CallFunc_MakeLiteralByte_ReturnValue) == 0x000028, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, Temp_int_Array_Index_Variable) == 0x000038, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, Temp_bool_Variable) == 0x00003C, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, CallFunc_Array_Get_Item) == 0x000040, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, CallFunc_IsVisible_ReturnValue) == 0x000048, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, CallFunc_Not_PreBool_ReturnValue) == 0x000049, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00004A, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000050, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, CallFunc_GetPlayerEngramCannonComponent_ReturnValue) == 0x000060, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::CallFunc_GetPlayerEngramCannonComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, CallFunc_IsValid_ReturnValue_1) == 0x000068, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, CallFunc_Array_Get_Item_1) == 0x000069, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, CallFunc_Not_PreBool_ReturnValue_1) == 0x00006A, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x00006B, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, K2Node_Select_Default) == 0x00006C, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, K2Node_MakeArray_Array) == 0x000070, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, CallFunc_IsRotateLimit_ReturnValue) == 0x000080, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::CallFunc_IsRotateLimit_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, CallFunc_IsRotateLimit_ReturnValue_1) == 0x000081, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::CallFunc_IsRotateLimit_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, CallFunc_IsRotateLimit_ReturnValue_2) == 0x000082, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::CallFunc_IsRotateLimit_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, CallFunc_IsRotateLimit_ReturnValue_3) == 0x000083, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::CallFunc_IsRotateLimit_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_TargetSite_C_UpdateArrowVisible, K2Node_MakeArray_Array_1) == 0x000088, "Member 'EngramCannonHUD_TargetSite_C_UpdateArrowVisible::K2Node_MakeArray_Array_1' has a wrong offset!");

}

