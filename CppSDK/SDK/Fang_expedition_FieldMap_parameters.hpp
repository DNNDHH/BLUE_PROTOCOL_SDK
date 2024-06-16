#pragma once

 

// Package: Fang_expedition_FieldMap

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.OnTextureLoadComplete__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Fang_expedition_FieldMap_C_OnTextureLoadComplete__DelegateSignature final
{
public:
	bool                                          IsSuccesed;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_FieldMap_C_OnTextureLoadComplete__DelegateSignature) == 0x000001, "Wrong alignment on Fang_expedition_FieldMap_C_OnTextureLoadComplete__DelegateSignature");
static_assert(sizeof(Fang_expedition_FieldMap_C_OnTextureLoadComplete__DelegateSignature) == 0x000001, "Wrong size on Fang_expedition_FieldMap_C_OnTextureLoadComplete__DelegateSignature");
static_assert(offsetof(Fang_expedition_FieldMap_C_OnTextureLoadComplete__DelegateSignature, IsSuccesed) == 0x000000, "Member 'Fang_expedition_FieldMap_C_OnTextureLoadComplete__DelegateSignature::IsSuccesed' has a wrong offset!");

// Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.ExecuteUbergraph_Fang_expedition_FieldMap
// 0x0088 (0x0088 - 0x0000)
struct Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1686[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1687[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_MapId;                          // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBGConfigData_Find;                     // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1688[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1689[0x2];                                     // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               K2Node_DynamicCast_AsTexture;                      // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_168A[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap) == 0x000008, "Wrong alignment on Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap");
static_assert(sizeof(Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap) == 0x000088, "Wrong size on Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap");
static_assert(offsetof(Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap, EntryPoint) == 0x000000, "Member 'Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap, CallFunc_Create_ReturnValue) == 0x000010, "Member 'Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap, CallFunc_MakeLiteralByte_ReturnValue) == 0x000019, "Member 'Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap, CallFunc_IsValid_ReturnValue_1) == 0x00001A, "Member 'Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap, K2Node_CustomEvent_MapId) == 0x000020, "Member 'Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap::K2Node_CustomEvent_MapId' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap, CallFunc_MakeVector2D_ReturnValue) == 0x000030, "Member 'Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000038, "Member 'Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap, CallFunc_GetBGConfigData_Find) == 0x000039, "Member 'Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap::CallFunc_GetBGConfigData_Find' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap, K2Node_CreateDelegate_OutputDelegate) == 0x00003C, "Member 'Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap, CallFunc_IsValid_ReturnValue_2) == 0x00004C, "Member 'Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap, CallFunc_NotEqual_StrStr_ReturnValue) == 0x00004D, "Member 'Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap, K2Node_DynamicCast_AsTexture) == 0x000050, "Member 'Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap::K2Node_DynamicCast_AsTexture' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000060, "Member 'Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000068, "Member 'Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap, Temp_object_Variable) == 0x000070, "Member 'Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap, K2Node_DynamicCast_AsTexture_2D) == 0x000078, "Member 'Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'Fang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.SetMapImage
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_FieldMap_C_SetMapImage final
{
public:
	class FString                                 MapId;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_FieldMap_C_SetMapImage) == 0x000008, "Wrong alignment on Fang_expedition_FieldMap_C_SetMapImage");
static_assert(sizeof(Fang_expedition_FieldMap_C_SetMapImage) == 0x000010, "Wrong size on Fang_expedition_FieldMap_C_SetMapImage");
static_assert(offsetof(Fang_expedition_FieldMap_C_SetMapImage, MapId) == 0x000000, "Member 'Fang_expedition_FieldMap_C_SetMapImage::MapId' has a wrong offset!");

// Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.OnLoaded_BCD4E12747AB56897A61B2A7D808B801
// 0x0008 (0x0008 - 0x0000)
struct Fang_expedition_FieldMap_C_OnLoaded_BCD4E12747AB56897A61B2A7D808B801 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_FieldMap_C_OnLoaded_BCD4E12747AB56897A61B2A7D808B801) == 0x000008, "Wrong alignment on Fang_expedition_FieldMap_C_OnLoaded_BCD4E12747AB56897A61B2A7D808B801");
static_assert(sizeof(Fang_expedition_FieldMap_C_OnLoaded_BCD4E12747AB56897A61B2A7D808B801) == 0x000008, "Wrong size on Fang_expedition_FieldMap_C_OnLoaded_BCD4E12747AB56897A61B2A7D808B801");
static_assert(offsetof(Fang_expedition_FieldMap_C_OnLoaded_BCD4E12747AB56897A61B2A7D808B801, Loaded) == 0x000000, "Member 'Fang_expedition_FieldMap_C_OnLoaded_BCD4E12747AB56897A61B2A7D808B801::Loaded' has a wrong offset!");

// Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.OnCreateCloudTraverse
// 0x0050 (0x0050 - 0x0000)
struct Fang_expedition_FieldMap_C_OnCreateCloudTraverse final
{
public:
	class UCanvasPanel*                           Param_CloudCanvas;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Param_Name;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Position;                                          // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Size;                                              // 0x0018(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Texture;                                           // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_CloudImage_C*                CloudImage;                                        // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_CloudImage_C*                CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_FieldMap_C_OnCreateCloudTraverse) == 0x000008, "Wrong alignment on Fang_expedition_FieldMap_C_OnCreateCloudTraverse");
static_assert(sizeof(Fang_expedition_FieldMap_C_OnCreateCloudTraverse) == 0x000050, "Wrong size on Fang_expedition_FieldMap_C_OnCreateCloudTraverse");
static_assert(offsetof(Fang_expedition_FieldMap_C_OnCreateCloudTraverse, Param_CloudCanvas) == 0x000000, "Member 'Fang_expedition_FieldMap_C_OnCreateCloudTraverse::Param_CloudCanvas' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_OnCreateCloudTraverse, Param_Name) == 0x000008, "Member 'Fang_expedition_FieldMap_C_OnCreateCloudTraverse::Param_Name' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_OnCreateCloudTraverse, Position) == 0x000010, "Member 'Fang_expedition_FieldMap_C_OnCreateCloudTraverse::Position' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_OnCreateCloudTraverse, Size) == 0x000018, "Member 'Fang_expedition_FieldMap_C_OnCreateCloudTraverse::Size' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_OnCreateCloudTraverse, Texture) == 0x000020, "Member 'Fang_expedition_FieldMap_C_OnCreateCloudTraverse::Texture' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_OnCreateCloudTraverse, ReturnValue) == 0x000028, "Member 'Fang_expedition_FieldMap_C_OnCreateCloudTraverse::ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_OnCreateCloudTraverse, CloudImage) == 0x000030, "Member 'Fang_expedition_FieldMap_C_OnCreateCloudTraverse::CloudImage' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_OnCreateCloudTraverse, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000038, "Member 'Fang_expedition_FieldMap_C_OnCreateCloudTraverse::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_OnCreateCloudTraverse, CallFunc_AddChild_ReturnValue) == 0x000040, "Member 'Fang_expedition_FieldMap_C_OnCreateCloudTraverse::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_OnCreateCloudTraverse, CallFunc_Create_ReturnValue) == 0x000048, "Member 'Fang_expedition_FieldMap_C_OnCreateCloudTraverse::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.Update
// 0x0020 (0x0020 - 0x0000)
struct Fang_expedition_FieldMap_C_Update final
{
public:
	class FString                                 MapId;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Floor;                                             // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              SizeScale;                                         // 0x0014(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_FieldMap_C_Update) == 0x000008, "Wrong alignment on Fang_expedition_FieldMap_C_Update");
static_assert(sizeof(Fang_expedition_FieldMap_C_Update) == 0x000020, "Wrong size on Fang_expedition_FieldMap_C_Update");
static_assert(offsetof(Fang_expedition_FieldMap_C_Update, MapId) == 0x000000, "Member 'Fang_expedition_FieldMap_C_Update::MapId' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_Update, Floor) == 0x000010, "Member 'Fang_expedition_FieldMap_C_Update::Floor' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_Update, SizeScale) == 0x000014, "Member 'Fang_expedition_FieldMap_C_Update::SizeScale' has a wrong offset!");

// Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.GetBGConfigData
// 0x00E0 (0x00E0 - 0x0000)
struct Fang_expedition_FieldMap_C_GetBGConfigData final
{
public:
	class FString                                 MapId;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Find;                                              // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          RetValue;                                          // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_168B[0x1];                                     // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_168C[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_168D[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetMapBGConfigRowNames_ReturnValue;       // 0x0028(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_168E[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapBGConfigTableRow                 CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow; // 0x0048(0x0078)()
	bool                                          CallFunc_FindMapBGConfigDB_ReturnValue;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_168F[0x5];                                     // 0x00C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_FieldMap_C_GetBGConfigData) == 0x000008, "Wrong alignment on Fang_expedition_FieldMap_C_GetBGConfigData");
static_assert(sizeof(Fang_expedition_FieldMap_C_GetBGConfigData) == 0x0000E0, "Wrong size on Fang_expedition_FieldMap_C_GetBGConfigData");
static_assert(offsetof(Fang_expedition_FieldMap_C_GetBGConfigData, MapId) == 0x000000, "Member 'Fang_expedition_FieldMap_C_GetBGConfigData::MapId' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_GetBGConfigData, Find) == 0x000010, "Member 'Fang_expedition_FieldMap_C_GetBGConfigData::Find' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_GetBGConfigData, RetValue) == 0x000011, "Member 'Fang_expedition_FieldMap_C_GetBGConfigData::RetValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_GetBGConfigData, Temp_bool_True_if_break_was_hit_Variable) == 0x000012, "Member 'Fang_expedition_FieldMap_C_GetBGConfigData::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_GetBGConfigData, Temp_int_Array_Index_Variable) == 0x000014, "Member 'Fang_expedition_FieldMap_C_GetBGConfigData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_GetBGConfigData, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'Fang_expedition_FieldMap_C_GetBGConfigData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_GetBGConfigData, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'Fang_expedition_FieldMap_C_GetBGConfigData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_GetBGConfigData, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'Fang_expedition_FieldMap_C_GetBGConfigData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_GetBGConfigData, CallFunc_GetMapBGConfigRowNames_ReturnValue) == 0x000028, "Member 'Fang_expedition_FieldMap_C_GetBGConfigData::CallFunc_GetMapBGConfigRowNames_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_GetBGConfigData, CallFunc_Array_Get_Item) == 0x000038, "Member 'Fang_expedition_FieldMap_C_GetBGConfigData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_GetBGConfigData, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'Fang_expedition_FieldMap_C_GetBGConfigData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_GetBGConfigData, CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow) == 0x000048, "Member 'Fang_expedition_FieldMap_C_GetBGConfigData::CallFunc_FindMapBGConfigDB_OutMapBGConfigTableRow' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_GetBGConfigData, CallFunc_FindMapBGConfigDB_ReturnValue) == 0x0000C0, "Member 'Fang_expedition_FieldMap_C_GetBGConfigData::CallFunc_FindMapBGConfigDB_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_GetBGConfigData, CallFunc_Less_IntInt_ReturnValue) == 0x0000C1, "Member 'Fang_expedition_FieldMap_C_GetBGConfigData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_GetBGConfigData, CallFunc_BooleanAND_ReturnValue) == 0x0000C2, "Member 'Fang_expedition_FieldMap_C_GetBGConfigData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_GetBGConfigData, CallFunc_Conv_NameToString_ReturnValue) == 0x0000C8, "Member 'Fang_expedition_FieldMap_C_GetBGConfigData::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_FieldMap_C_GetBGConfigData, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000D8, "Member 'Fang_expedition_FieldMap_C_GetBGConfigData::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

}

