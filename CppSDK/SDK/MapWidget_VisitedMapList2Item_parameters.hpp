#pragma once

 

// Package: MapWidget_VisitedMapList2Item

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.OnClicked__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_VisitedMapList2Item_C_OnClicked__DelegateSignature final
{
public:
	class FString                                 InMapId;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_VisitedMapList2Item_C_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on MapWidget_VisitedMapList2Item_C_OnClicked__DelegateSignature");
static_assert(sizeof(MapWidget_VisitedMapList2Item_C_OnClicked__DelegateSignature) == 0x000010, "Wrong size on MapWidget_VisitedMapList2Item_C_OnClicked__DelegateSignature");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_OnClicked__DelegateSignature, InMapId) == 0x000000, "Member 'MapWidget_VisitedMapList2Item_C_OnClicked__DelegateSignature::InMapId' has a wrong offset!");

// Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.ExecuteUbergraph_MapWidget_VisitedMapList2Item
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_VisitedMapList2Item_C_ExecuteUbergraph_MapWidget_VisitedMapList2Item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_VisitedMapList2Item_C_ExecuteUbergraph_MapWidget_VisitedMapList2Item) == 0x000004, "Wrong alignment on MapWidget_VisitedMapList2Item_C_ExecuteUbergraph_MapWidget_VisitedMapList2Item");
static_assert(sizeof(MapWidget_VisitedMapList2Item_C_ExecuteUbergraph_MapWidget_VisitedMapList2Item) == 0x000004, "Wrong size on MapWidget_VisitedMapList2Item_C_ExecuteUbergraph_MapWidget_VisitedMapList2Item");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_ExecuteUbergraph_MapWidget_VisitedMapList2Item, EntryPoint) == 0x000000, "Member 'MapWidget_VisitedMapList2Item_C_ExecuteUbergraph_MapWidget_VisitedMapList2Item::EntryPoint' has a wrong offset!");

// Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.Setup
// 0x00D8 (0x00D8 - 0x0000)
struct MapWidget_VisitedMapList2Item_C_Setup final
{
public:
	class FString                                 InMapId;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          InCurrentMap;                                      // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FBA[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMapAreaIconTableRow                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x0020(0x0038)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FBB[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FBC[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapAreaIconTableRow                 CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x0068(0x0038)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FBD[0x2];                                     // 0x00A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x00A4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FBE[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetZoneShortNameByZoneId_ReturnValue;     // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C0(0x0018)()
};
static_assert(alignof(MapWidget_VisitedMapList2Item_C_Setup) == 0x000008, "Wrong alignment on MapWidget_VisitedMapList2Item_C_Setup");
static_assert(sizeof(MapWidget_VisitedMapList2Item_C_Setup) == 0x0000D8, "Wrong size on MapWidget_VisitedMapList2Item_C_Setup");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Setup, InMapId) == 0x000000, "Member 'MapWidget_VisitedMapList2Item_C_Setup::InMapId' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Setup, InCurrentMap) == 0x000010, "Member 'MapWidget_VisitedMapList2Item_C_Setup::InCurrentMap' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Setup, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'MapWidget_VisitedMapList2Item_C_Setup::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Setup, CallFunc_GetDataTableRowFromName_OutRow) == 0x000020, "Member 'MapWidget_VisitedMapList2Item_C_Setup::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Setup, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000058, "Member 'MapWidget_VisitedMapList2Item_C_Setup::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Setup, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000059, "Member 'MapWidget_VisitedMapList2Item_C_Setup::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Setup, CallFunc_Conv_StringToName_ReturnValue) == 0x00005C, "Member 'MapWidget_VisitedMapList2Item_C_Setup::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Setup, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x000068, "Member 'MapWidget_VisitedMapList2Item_C_Setup::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Setup, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x0000A0, "Member 'MapWidget_VisitedMapList2Item_C_Setup::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Setup, CallFunc_IsValidSoftObjectReference_ReturnValue_1) == 0x0000A1, "Member 'MapWidget_VisitedMapList2Item_C_Setup::CallFunc_IsValidSoftObjectReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Setup, CallFunc_Conv_StringToName_ReturnValue_1) == 0x0000A4, "Member 'MapWidget_VisitedMapList2Item_C_Setup::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Setup, CallFunc_GetZoneShortNameByZoneId_ReturnValue) == 0x0000B0, "Member 'MapWidget_VisitedMapList2Item_C_Setup::CallFunc_GetZoneShortNameByZoneId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Setup, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C0, "Member 'MapWidget_VisitedMapList2Item_C_Setup::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.ChangeFaceIconTexture
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_VisitedMapList2Item_C_ChangeFaceIconTexture final
{
public:
	class UTexture2DDynamic*                      Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_VisitedMapList2Item_C_ChangeFaceIconTexture) == 0x000008, "Wrong alignment on MapWidget_VisitedMapList2Item_C_ChangeFaceIconTexture");
static_assert(sizeof(MapWidget_VisitedMapList2Item_C_ChangeFaceIconTexture) == 0x000010, "Wrong size on MapWidget_VisitedMapList2Item_C_ChangeFaceIconTexture");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_ChangeFaceIconTexture, Texture) == 0x000000, "Member 'MapWidget_VisitedMapList2Item_C_ChangeFaceIconTexture::Texture' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_ChangeFaceIconTexture, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'MapWidget_VisitedMapList2Item_C_ChangeFaceIconTexture::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.Get Map Zone String
// 0x0138 (0x0138 - 0x0000)
struct MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FBF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutString;                                         // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 MapZoneString;                                     // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          bIsAddReturn;                                      // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FC0[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TmpString;                                         // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FName>                           LocalRowName;                                      // 0x0040(0x0010)(Edit, BlueprintVisible)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FC1[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMapPlaceNamePlateConfig             CallFunc_GetDataTableRowFromName_OutRow;           // 0x0068(0x0020)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FC2[0x2];                                     // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetZoneShortNameByZoneId_ReturnValue;     // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FC3[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0100(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0128(0x0010)(ReferenceParm)
};
static_assert(alignof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String) == 0x000008, "Wrong alignment on MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String");
static_assert(sizeof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String) == 0x000138, "Wrong size on MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, Param_Index) == 0x000000, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::Param_Index' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, OutString) == 0x000008, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::OutString' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, MapZoneString) == 0x000018, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::MapZoneString' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, bIsAddReturn) == 0x000028, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::bIsAddReturn' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, TmpString) == 0x000030, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::TmpString' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, LocalRowName) == 0x000040, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::LocalRowName' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, K2Node_SwitchInteger_CmpSuccess) == 0x000050, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, Temp_int_Array_Index_Variable) == 0x000058, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, Temp_int_Loop_Counter_Variable) == 0x00005C, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, CallFunc_Array_Get_Item) == 0x000060, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, CallFunc_GetDataTableRowFromName_OutRow) == 0x000068, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000088, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, CallFunc_Less_IntInt_ReturnValue) == 0x000089, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, CallFunc_Add_IntInt_ReturnValue) == 0x00008C, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000090, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, CallFunc_Conv_NameToString_ReturnValue) == 0x0000A0, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, CallFunc_Concat_StrStr_ReturnValue) == 0x0000B0, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000C0, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000D0, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, CallFunc_Conv_StringToName_ReturnValue) == 0x0000E0, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, CallFunc_GetZoneShortNameByZoneId_ReturnValue) == 0x0000E8, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::CallFunc_GetZoneShortNameByZoneId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, CallFunc_Contains_ReturnValue) == 0x0000F8, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, CallFunc_Conv_StringToText_ReturnValue) == 0x000100, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, CallFunc_Conv_TextToString_ReturnValue) == 0x000118, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000128, "Member 'MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");

// Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.Get_ListButton_ToolTipWidget_0
// 0x0070 (0x0070 - 0x0000)
struct MapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Get_Map_Zone_String_OutString;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Get_Map_Zone_String_OutString_1;          // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FC4[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0048(0x0018)()
	class UWBP_CommonToolTipDetail_Variable_C*    CallFunc_Create_ReturnValue;                       // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_0) == 0x000008, "Wrong alignment on MapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_0");
static_assert(sizeof(MapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_0) == 0x000070, "Wrong size on MapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_0");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_0, ReturnValue) == 0x000000, "Member 'MapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_0, CallFunc_Get_Map_Zone_String_OutString) == 0x000008, "Member 'MapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_0::CallFunc_Get_Map_Zone_String_OutString' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_0, CallFunc_Get_Map_Zone_String_OutString_1) == 0x000018, "Member 'MapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_0::CallFunc_Get_Map_Zone_String_OutString_1' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_0, CallFunc_IsEmpty_ReturnValue) == 0x000028, "Member 'MapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_0::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'MapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_0, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000048, "Member 'MapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_0::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_0, CallFunc_Create_ReturnValue) == 0x000060, "Member 'MapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_0, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'MapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_0::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

