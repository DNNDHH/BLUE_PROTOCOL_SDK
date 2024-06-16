#pragma once

 

// Package: MapWidget_TraverseCloud

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function MapWidget_TraverseCloud.MapWidget_TraverseCloud_C.ExecuteUbergraph_MapWidget_TraverseCloud
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_TraverseCloud_C_ExecuteUbergraph_MapWidget_TraverseCloud final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_TraverseCloud_C_ExecuteUbergraph_MapWidget_TraverseCloud) == 0x000004, "Wrong alignment on MapWidget_TraverseCloud_C_ExecuteUbergraph_MapWidget_TraverseCloud");
static_assert(sizeof(MapWidget_TraverseCloud_C_ExecuteUbergraph_MapWidget_TraverseCloud) == 0x000004, "Wrong size on MapWidget_TraverseCloud_C_ExecuteUbergraph_MapWidget_TraverseCloud");
static_assert(offsetof(MapWidget_TraverseCloud_C_ExecuteUbergraph_MapWidget_TraverseCloud, EntryPoint) == 0x000000, "Member 'MapWidget_TraverseCloud_C_ExecuteUbergraph_MapWidget_TraverseCloud::EntryPoint' has a wrong offset!");

// Function MapWidget_TraverseCloud.MapWidget_TraverseCloud_C.Update
// 0x0020 (0x0020 - 0x0000)
struct MapWidget_TraverseCloud_C_Update final
{
public:
	class FString                                 InMapId;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Floor;                                             // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InMapSizeScale;                                    // 0x0014(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_TraverseCloud_C_Update) == 0x000008, "Wrong alignment on MapWidget_TraverseCloud_C_Update");
static_assert(sizeof(MapWidget_TraverseCloud_C_Update) == 0x000020, "Wrong size on MapWidget_TraverseCloud_C_Update");
static_assert(offsetof(MapWidget_TraverseCloud_C_Update, InMapId) == 0x000000, "Member 'MapWidget_TraverseCloud_C_Update::InMapId' has a wrong offset!");
static_assert(offsetof(MapWidget_TraverseCloud_C_Update, Floor) == 0x000010, "Member 'MapWidget_TraverseCloud_C_Update::Floor' has a wrong offset!");
static_assert(offsetof(MapWidget_TraverseCloud_C_Update, InMapSizeScale) == 0x000014, "Member 'MapWidget_TraverseCloud_C_Update::InMapSizeScale' has a wrong offset!");

// Function MapWidget_TraverseCloud.MapWidget_TraverseCloud_C.GetZOrder
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_TraverseCloud_C_GetZOrder final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_TraverseCloud_C_GetZOrder) == 0x000004, "Wrong alignment on MapWidget_TraverseCloud_C_GetZOrder");
static_assert(sizeof(MapWidget_TraverseCloud_C_GetZOrder) == 0x000008, "Wrong size on MapWidget_TraverseCloud_C_GetZOrder");
static_assert(offsetof(MapWidget_TraverseCloud_C_GetZOrder, ReturnValue) == 0x000000, "Member 'MapWidget_TraverseCloud_C_GetZOrder::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_TraverseCloud_C_GetZOrder, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000004, "Member 'MapWidget_TraverseCloud_C_GetZOrder::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");

// Function MapWidget_TraverseCloud.MapWidget_TraverseCloud_C.OnCreateDungeonTraverse
// 0x0040 (0x0040 - 0x0000)
struct MapWidget_TraverseCloud_C_OnCreateDungeonTraverse final
{
public:
	class UCanvasPanel*                           CloudCanvas;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Param_Name;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Position;                                          // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Size;                                              // 0x0018(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            ReturnValue;                                       // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDungeonTraverse_C*                     DungeonTraverse;                                   // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDungeonTraverse_C*                     CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_TraverseCloud_C_OnCreateDungeonTraverse) == 0x000008, "Wrong alignment on MapWidget_TraverseCloud_C_OnCreateDungeonTraverse");
static_assert(sizeof(MapWidget_TraverseCloud_C_OnCreateDungeonTraverse) == 0x000040, "Wrong size on MapWidget_TraverseCloud_C_OnCreateDungeonTraverse");
static_assert(offsetof(MapWidget_TraverseCloud_C_OnCreateDungeonTraverse, CloudCanvas) == 0x000000, "Member 'MapWidget_TraverseCloud_C_OnCreateDungeonTraverse::CloudCanvas' has a wrong offset!");
static_assert(offsetof(MapWidget_TraverseCloud_C_OnCreateDungeonTraverse, Param_Name) == 0x000008, "Member 'MapWidget_TraverseCloud_C_OnCreateDungeonTraverse::Param_Name' has a wrong offset!");
static_assert(offsetof(MapWidget_TraverseCloud_C_OnCreateDungeonTraverse, Position) == 0x000010, "Member 'MapWidget_TraverseCloud_C_OnCreateDungeonTraverse::Position' has a wrong offset!");
static_assert(offsetof(MapWidget_TraverseCloud_C_OnCreateDungeonTraverse, Size) == 0x000018, "Member 'MapWidget_TraverseCloud_C_OnCreateDungeonTraverse::Size' has a wrong offset!");
static_assert(offsetof(MapWidget_TraverseCloud_C_OnCreateDungeonTraverse, ReturnValue) == 0x000020, "Member 'MapWidget_TraverseCloud_C_OnCreateDungeonTraverse::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_TraverseCloud_C_OnCreateDungeonTraverse, DungeonTraverse) == 0x000028, "Member 'MapWidget_TraverseCloud_C_OnCreateDungeonTraverse::DungeonTraverse' has a wrong offset!");
static_assert(offsetof(MapWidget_TraverseCloud_C_OnCreateDungeonTraverse, CallFunc_AddChild_ReturnValue) == 0x000030, "Member 'MapWidget_TraverseCloud_C_OnCreateDungeonTraverse::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_TraverseCloud_C_OnCreateDungeonTraverse, CallFunc_Create_ReturnValue) == 0x000038, "Member 'MapWidget_TraverseCloud_C_OnCreateDungeonTraverse::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function MapWidget_TraverseCloud.MapWidget_TraverseCloud_C.OnCreateCloudTraverse
// 0x0050 (0x0050 - 0x0000)
struct MapWidget_TraverseCloud_C_OnCreateCloudTraverse final
{
public:
	class UCanvasPanel*                           CloudCanvas;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Param_Name;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Position;                                          // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Size;                                              // 0x0018(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Texture;                                           // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_CloudImage_C*                CloudTraverse;                                     // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_CloudImage_C*                CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_TraverseCloud_C_OnCreateCloudTraverse) == 0x000008, "Wrong alignment on MapWidget_TraverseCloud_C_OnCreateCloudTraverse");
static_assert(sizeof(MapWidget_TraverseCloud_C_OnCreateCloudTraverse) == 0x000050, "Wrong size on MapWidget_TraverseCloud_C_OnCreateCloudTraverse");
static_assert(offsetof(MapWidget_TraverseCloud_C_OnCreateCloudTraverse, CloudCanvas) == 0x000000, "Member 'MapWidget_TraverseCloud_C_OnCreateCloudTraverse::CloudCanvas' has a wrong offset!");
static_assert(offsetof(MapWidget_TraverseCloud_C_OnCreateCloudTraverse, Param_Name) == 0x000008, "Member 'MapWidget_TraverseCloud_C_OnCreateCloudTraverse::Param_Name' has a wrong offset!");
static_assert(offsetof(MapWidget_TraverseCloud_C_OnCreateCloudTraverse, Position) == 0x000010, "Member 'MapWidget_TraverseCloud_C_OnCreateCloudTraverse::Position' has a wrong offset!");
static_assert(offsetof(MapWidget_TraverseCloud_C_OnCreateCloudTraverse, Size) == 0x000018, "Member 'MapWidget_TraverseCloud_C_OnCreateCloudTraverse::Size' has a wrong offset!");
static_assert(offsetof(MapWidget_TraverseCloud_C_OnCreateCloudTraverse, Texture) == 0x000020, "Member 'MapWidget_TraverseCloud_C_OnCreateCloudTraverse::Texture' has a wrong offset!");
static_assert(offsetof(MapWidget_TraverseCloud_C_OnCreateCloudTraverse, ReturnValue) == 0x000028, "Member 'MapWidget_TraverseCloud_C_OnCreateCloudTraverse::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_TraverseCloud_C_OnCreateCloudTraverse, CloudTraverse) == 0x000030, "Member 'MapWidget_TraverseCloud_C_OnCreateCloudTraverse::CloudTraverse' has a wrong offset!");
static_assert(offsetof(MapWidget_TraverseCloud_C_OnCreateCloudTraverse, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000038, "Member 'MapWidget_TraverseCloud_C_OnCreateCloudTraverse::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_TraverseCloud_C_OnCreateCloudTraverse, CallFunc_AddChild_ReturnValue) == 0x000040, "Member 'MapWidget_TraverseCloud_C_OnCreateCloudTraverse::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_TraverseCloud_C_OnCreateCloudTraverse, CallFunc_Create_ReturnValue) == 0x000048, "Member 'MapWidget_TraverseCloud_C_OnCreateCloudTraverse::CallFunc_Create_ReturnValue' has a wrong offset!");

}

