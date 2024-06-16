#pragma once

 

// Package: CommonPossessionInfoItem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.ExecuteUbergraph_CommonPossessionInfoItem
// 0x0040 (0x0040 - 0x0000)
struct CommonPossessionInfoItem_C_ExecuteUbergraph_CommonPossessionInfoItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91F5[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Event_Color;                                // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0018(0x0028)()
};
static_assert(alignof(CommonPossessionInfoItem_C_ExecuteUbergraph_CommonPossessionInfoItem) == 0x000008, "Wrong alignment on CommonPossessionInfoItem_C_ExecuteUbergraph_CommonPossessionInfoItem");
static_assert(sizeof(CommonPossessionInfoItem_C_ExecuteUbergraph_CommonPossessionInfoItem) == 0x000040, "Wrong size on CommonPossessionInfoItem_C_ExecuteUbergraph_CommonPossessionInfoItem");
static_assert(offsetof(CommonPossessionInfoItem_C_ExecuteUbergraph_CommonPossessionInfoItem, EntryPoint) == 0x000000, "Member 'CommonPossessionInfoItem_C_ExecuteUbergraph_CommonPossessionInfoItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_ExecuteUbergraph_CommonPossessionInfoItem, K2Node_Event_IsDesignTime) == 0x000004, "Member 'CommonPossessionInfoItem_C_ExecuteUbergraph_CommonPossessionInfoItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_ExecuteUbergraph_CommonPossessionInfoItem, K2Node_Event_Color) == 0x000008, "Member 'CommonPossessionInfoItem_C_ExecuteUbergraph_CommonPossessionInfoItem::K2Node_Event_Color' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_ExecuteUbergraph_CommonPossessionInfoItem, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'CommonPossessionInfoItem_C_ExecuteUbergraph_CommonPossessionInfoItem::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetTextColor
// 0x0010 (0x0010 - 0x0000)
struct CommonPossessionInfoItem_C_SetTextColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPossessionInfoItem_C_SetTextColor) == 0x000004, "Wrong alignment on CommonPossessionInfoItem_C_SetTextColor");
static_assert(sizeof(CommonPossessionInfoItem_C_SetTextColor) == 0x000010, "Wrong size on CommonPossessionInfoItem_C_SetTextColor");
static_assert(offsetof(CommonPossessionInfoItem_C_SetTextColor, Color) == 0x000000, "Member 'CommonPossessionInfoItem_C_SetTextColor::Color' has a wrong offset!");

// Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommonPossessionInfoItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPossessionInfoItem_C_PreConstruct) == 0x000001, "Wrong alignment on CommonPossessionInfoItem_C_PreConstruct");
static_assert(sizeof(CommonPossessionInfoItem_C_PreConstruct) == 0x000001, "Wrong size on CommonPossessionInfoItem_C_PreConstruct");
static_assert(offsetof(CommonPossessionInfoItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommonPossessionInfoItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetPossessionTypeName
// 0x00B0 (0x00B0 - 0x0000)
struct CommonPossessionInfoItem_C_SetPossessionTypeName final
{
public:
	class FText                                   InTypeName;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0090(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPossessionInfoItem_C_SetPossessionTypeName) == 0x000008, "Wrong alignment on CommonPossessionInfoItem_C_SetPossessionTypeName");
static_assert(sizeof(CommonPossessionInfoItem_C_SetPossessionTypeName) == 0x0000B0, "Wrong size on CommonPossessionInfoItem_C_SetPossessionTypeName");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionTypeName, InTypeName) == 0x000000, "Member 'CommonPossessionInfoItem_C_SetPossessionTypeName::InTypeName' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionTypeName, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000018, "Member 'CommonPossessionInfoItem_C_SetPossessionTypeName::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionTypeName, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'CommonPossessionInfoItem_C_SetPossessionTypeName::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionTypeName, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'CommonPossessionInfoItem_C_SetPossessionTypeName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionTypeName, K2Node_MakeArray_Array) == 0x000080, "Member 'CommonPossessionInfoItem_C_SetPossessionTypeName::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionTypeName, CallFunc_Format_ReturnValue) == 0x000090, "Member 'CommonPossessionInfoItem_C_SetPossessionTypeName::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionTypeName, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'CommonPossessionInfoItem_C_SetPossessionTypeName::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetPossessionName
// 0x0020 (0x0020 - 0x0000)
struct CommonPossessionInfoItem_C_SetPossessionName final
{
public:
	class FText                                   InName;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPossessionInfoItem_C_SetPossessionName) == 0x000008, "Wrong alignment on CommonPossessionInfoItem_C_SetPossessionName");
static_assert(sizeof(CommonPossessionInfoItem_C_SetPossessionName) == 0x000020, "Wrong size on CommonPossessionInfoItem_C_SetPossessionName");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionName, InName) == 0x000000, "Member 'CommonPossessionInfoItem_C_SetPossessionName::InName' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionName, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'CommonPossessionInfoItem_C_SetPossessionName::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetPossessionInfo
// 0x0410 (0x0410 - 0x0000)
struct CommonPossessionInfoItem_C_SetPossessionInfo final
{
public:
	struct FSBMasterImagine                       InMasterImagineData;                               // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 UniqueId;                                          // 0x00B0(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalPossessionDesc2;                              // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           LocalInfo;                                         // 0x00D0(0x0118)(Edit, BlueprintVisible)
	int32                                         LocalStackNum;                                     // 0x01E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91F6[0x4];                                     // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalUniqueId;                                     // 0x01F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalPossessionDesc;                               // 0x0200(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalPossessionTypeName;                           // 0x0210(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalPossessionName;                               // 0x0220(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FSBImagineInfo                         LocalPossessionInfo;                               // 0x0230(0x0048)(Edit, BlueprintVisible)
	struct FSBMasterImagine                       LocalMasterImagineData;                            // 0x0278(0x00B0)(Edit, BlueprintVisible)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0328(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0340(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x0348(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0358(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue_1;       // 0x0368(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBImagineInfo                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x0380(0x0048)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x03C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91F7[0x6];                                     // 0x03CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x03D0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x03E8(0x0018)()
	class FString                                 CallFunc_GetImagineArtsTypeName_OutTypeName;       // 0x0400(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPossessionInfoItem_C_SetPossessionInfo) == 0x000008, "Wrong alignment on CommonPossessionInfoItem_C_SetPossessionInfo");
static_assert(sizeof(CommonPossessionInfoItem_C_SetPossessionInfo) == 0x000410, "Wrong size on CommonPossessionInfoItem_C_SetPossessionInfo");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, InMasterImagineData) == 0x000000, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::InMasterImagineData' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, UniqueId) == 0x0000B0, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::UniqueId' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, LocalPossessionDesc2) == 0x0000C0, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::LocalPossessionDesc2' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, LocalInfo) == 0x0000D0, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::LocalInfo' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, LocalStackNum) == 0x0001E8, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::LocalStackNum' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, LocalUniqueId) == 0x0001F0, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::LocalUniqueId' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, LocalPossessionDesc) == 0x000200, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::LocalPossessionDesc' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, LocalPossessionTypeName) == 0x000210, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::LocalPossessionTypeName' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, LocalPossessionName) == 0x000220, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::LocalPossessionName' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, LocalPossessionInfo) == 0x000230, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::LocalPossessionInfo' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, LocalMasterImagineData) == 0x000278, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::LocalMasterImagineData' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, K2Node_MakeArray_Array) == 0x000328, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, CallFunc_Array_Get_Item) == 0x000338, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000340, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, CallFunc_GetMasterImagineText_ReturnValue) == 0x000348, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, CallFunc_GetDisplayName_ReturnValue) == 0x000358, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, CallFunc_GetMasterImagineText_ReturnValue_1) == 0x000368, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::CallFunc_GetMasterImagineText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, CallFunc_Conv_StringToName_ReturnValue) == 0x000378, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, CallFunc_GetDataTableRowFromName_OutRow) == 0x000380, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0003C8, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, CallFunc_IsEmpty_ReturnValue) == 0x0003C9, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x0003D0, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0003E8, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetPossessionInfo, CallFunc_GetImagineArtsTypeName_OutTypeName) == 0x000400, "Member 'CommonPossessionInfoItem_C_SetPossessionInfo::CallFunc_GetImagineArtsTypeName_OutTypeName' has a wrong offset!");

// Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetMasterImagineData
// 0x00C0 (0x00C0 - 0x0000)
struct CommonPossessionInfoItem_C_SetMasterImagineData final
{
public:
	struct FSBMasterImagine                       MasterImagine;                                     // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 UniqueId;                                          // 0x00B0(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPossessionInfoItem_C_SetMasterImagineData) == 0x000008, "Wrong alignment on CommonPossessionInfoItem_C_SetMasterImagineData");
static_assert(sizeof(CommonPossessionInfoItem_C_SetMasterImagineData) == 0x0000C0, "Wrong size on CommonPossessionInfoItem_C_SetMasterImagineData");
static_assert(offsetof(CommonPossessionInfoItem_C_SetMasterImagineData, MasterImagine) == 0x000000, "Member 'CommonPossessionInfoItem_C_SetMasterImagineData::MasterImagine' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetMasterImagineData, UniqueId) == 0x0000B0, "Member 'CommonPossessionInfoItem_C_SetMasterImagineData::UniqueId' has a wrong offset!");

// Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.ResetPossessionInfo
// 0x0003 (0x0003 - 0x0000)
struct CommonPossessionInfoItem_C_ResetPossessionInfo final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPossessionInfoItem_C_ResetPossessionInfo) == 0x000001, "Wrong alignment on CommonPossessionInfoItem_C_ResetPossessionInfo");
static_assert(sizeof(CommonPossessionInfoItem_C_ResetPossessionInfo) == 0x000003, "Wrong size on CommonPossessionInfoItem_C_ResetPossessionInfo");
static_assert(offsetof(CommonPossessionInfoItem_C_ResetPossessionInfo, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'CommonPossessionInfoItem_C_ResetPossessionInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_ResetPossessionInfo, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'CommonPossessionInfoItem_C_ResetPossessionInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_ResetPossessionInfo, CallFunc_IsValid_ReturnValue_2) == 0x000002, "Member 'CommonPossessionInfoItem_C_ResetPossessionInfo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetInfoIconActive
// 0x0005 (0x0005 - 0x0000)
struct CommonPossessionInfoItem_C_SetInfoIconActive final
{
public:
	bool                                          InIsActive;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPossessionInfoItem_C_SetInfoIconActive) == 0x000001, "Wrong alignment on CommonPossessionInfoItem_C_SetInfoIconActive");
static_assert(sizeof(CommonPossessionInfoItem_C_SetInfoIconActive) == 0x000005, "Wrong size on CommonPossessionInfoItem_C_SetInfoIconActive");
static_assert(offsetof(CommonPossessionInfoItem_C_SetInfoIconActive, InIsActive) == 0x000000, "Member 'CommonPossessionInfoItem_C_SetInfoIconActive::InIsActive' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetInfoIconActive, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'CommonPossessionInfoItem_C_SetInfoIconActive::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetInfoIconActive, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'CommonPossessionInfoItem_C_SetInfoIconActive::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetInfoIconActive, Temp_bool_Variable) == 0x000003, "Member 'CommonPossessionInfoItem_C_SetInfoIconActive::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetInfoIconActive, K2Node_Select_Default) == 0x000004, "Member 'CommonPossessionInfoItem_C_SetInfoIconActive::K2Node_Select_Default' has a wrong offset!");

// Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetInfoMark
// 0x0005 (0x0005 - 0x0000)
struct CommonPossessionInfoItem_C_SetInfoMark final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPossessionInfoItem_C_SetInfoMark) == 0x000001, "Wrong alignment on CommonPossessionInfoItem_C_SetInfoMark");
static_assert(sizeof(CommonPossessionInfoItem_C_SetInfoMark) == 0x000005, "Wrong size on CommonPossessionInfoItem_C_SetInfoMark");
static_assert(offsetof(CommonPossessionInfoItem_C_SetInfoMark, Visible) == 0x000000, "Member 'CommonPossessionInfoItem_C_SetInfoMark::Visible' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetInfoMark, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'CommonPossessionInfoItem_C_SetInfoMark::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetInfoMark, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'CommonPossessionInfoItem_C_SetInfoMark::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetInfoMark, Temp_bool_Variable) == 0x000003, "Member 'CommonPossessionInfoItem_C_SetInfoMark::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonPossessionInfoItem_C_SetInfoMark, K2Node_Select_Default) == 0x000004, "Member 'CommonPossessionInfoItem_C_SetInfoMark::K2Node_Select_Default' has a wrong offset!");

}

