#pragma once

 

// Package: CommonToolTipContents_SummonedSkillParts

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.ExecuteUbergraph_CommonToolTipContents_SummonedSkillParts
// 0x0040 (0x0040 - 0x0000)
struct CommonToolTipContents_SummonedSkillParts_C_ExecuteUbergraph_CommonToolTipContents_SummonedSkillParts final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Event_Color;                                // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_693D[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0018(0x0028)()
};
static_assert(alignof(CommonToolTipContents_SummonedSkillParts_C_ExecuteUbergraph_CommonToolTipContents_SummonedSkillParts) == 0x000008, "Wrong alignment on CommonToolTipContents_SummonedSkillParts_C_ExecuteUbergraph_CommonToolTipContents_SummonedSkillParts");
static_assert(sizeof(CommonToolTipContents_SummonedSkillParts_C_ExecuteUbergraph_CommonToolTipContents_SummonedSkillParts) == 0x000040, "Wrong size on CommonToolTipContents_SummonedSkillParts_C_ExecuteUbergraph_CommonToolTipContents_SummonedSkillParts");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_ExecuteUbergraph_CommonToolTipContents_SummonedSkillParts, EntryPoint) == 0x000000, "Member 'CommonToolTipContents_SummonedSkillParts_C_ExecuteUbergraph_CommonToolTipContents_SummonedSkillParts::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_ExecuteUbergraph_CommonToolTipContents_SummonedSkillParts, K2Node_Event_Color) == 0x000004, "Member 'CommonToolTipContents_SummonedSkillParts_C_ExecuteUbergraph_CommonToolTipContents_SummonedSkillParts::K2Node_Event_Color' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_ExecuteUbergraph_CommonToolTipContents_SummonedSkillParts, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'CommonToolTipContents_SummonedSkillParts_C_ExecuteUbergraph_CommonToolTipContents_SummonedSkillParts::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetTextColor
// 0x0010 (0x0010 - 0x0000)
struct CommonToolTipContents_SummonedSkillParts_C_SetTextColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonToolTipContents_SummonedSkillParts_C_SetTextColor) == 0x000004, "Wrong alignment on CommonToolTipContents_SummonedSkillParts_C_SetTextColor");
static_assert(sizeof(CommonToolTipContents_SummonedSkillParts_C_SetTextColor) == 0x000010, "Wrong size on CommonToolTipContents_SummonedSkillParts_C_SetTextColor");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetTextColor, Color) == 0x000000, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetTextColor::Color' has a wrong offset!");

// Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetSummonedTypeName
// 0x00B0 (0x00B0 - 0x0000)
struct CommonToolTipContents_SummonedSkillParts_C_SetSummonedTypeName final
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
static_assert(alignof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedTypeName) == 0x000008, "Wrong alignment on CommonToolTipContents_SummonedSkillParts_C_SetSummonedTypeName");
static_assert(sizeof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedTypeName) == 0x0000B0, "Wrong size on CommonToolTipContents_SummonedSkillParts_C_SetSummonedTypeName");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedTypeName, InTypeName) == 0x000000, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedTypeName::InTypeName' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedTypeName, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000018, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedTypeName::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedTypeName, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedTypeName::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedTypeName, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedTypeName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedTypeName, K2Node_MakeArray_Array) == 0x000080, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedTypeName::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedTypeName, CallFunc_Format_ReturnValue) == 0x000090, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedTypeName::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedTypeName, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedTypeName::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetSummonedName
// 0x0020 (0x0020 - 0x0000)
struct CommonToolTipContents_SummonedSkillParts_C_SetSummonedName final
{
public:
	class FText                                   InName;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedName) == 0x000008, "Wrong alignment on CommonToolTipContents_SummonedSkillParts_C_SetSummonedName");
static_assert(sizeof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedName) == 0x000020, "Wrong size on CommonToolTipContents_SummonedSkillParts_C_SetSummonedName");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedName, InName) == 0x000000, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedName::InName' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedName, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedName::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetSummonedInfo
// 0x02B0 (0x02B0 - 0x0000)
struct CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo final
{
public:
	struct FSBMasterImagine                       InImagineMasterData;                               // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 LocalSummonedTypeName;                             // 0x00B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalSummonedName;                                 // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FSBImagineInfo                         LocalSummonedInfo;                                 // 0x00D0(0x0048)(Edit, BlueprintVisible)
	struct FSBMasterImagine                       LocalMasterImagineData;                            // 0x0118(0x00B0)(Edit, BlueprintVisible)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_693E[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x01D0(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBImagineInfo                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x0208(0x0048)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_693F[0x7];                                     // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0258(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0270(0x0018)()
	class FString                                 CallFunc_GetImagineArtsTypeName_OutTypeName;       // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetImagineArtsName_OutArtsName;           // 0x0298(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo) == 0x000008, "Wrong alignment on CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo");
static_assert(sizeof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo) == 0x0002B0, "Wrong size on CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo, InImagineMasterData) == 0x000000, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo::InImagineMasterData' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo, LocalSummonedTypeName) == 0x0000B0, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo::LocalSummonedTypeName' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo, LocalSummonedName) == 0x0000C0, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo::LocalSummonedName' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo, LocalSummonedInfo) == 0x0000D0, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo::LocalSummonedInfo' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo, LocalMasterImagineData) == 0x000118, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo::LocalMasterImagineData' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo, CallFunc_IsEmpty_ReturnValue) == 0x0001C8, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo, K2Node_MakeArray_Array) == 0x0001D0, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo, CallFunc_Array_Get_Item) == 0x0001E0, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0001E8, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo, CallFunc_Conv_StringToName_ReturnValue) == 0x0001F0, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo, CallFunc_GetDisplayName_ReturnValue) == 0x0001F8, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo, CallFunc_GetDataTableRowFromName_OutRow) == 0x000208, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000250, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000258, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000270, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo, CallFunc_GetImagineArtsTypeName_OutTypeName) == 0x000288, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo::CallFunc_GetImagineArtsTypeName_OutTypeName' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo, CallFunc_GetImagineArtsName_OutArtsName) == 0x000298, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo::CallFunc_GetImagineArtsName_OutArtsName' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo, CallFunc_IsValid_ReturnValue) == 0x0002A8, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetMasterImagineData
// 0x00B0 (0x00B0 - 0x0000)
struct CommonToolTipContents_SummonedSkillParts_C_SetMasterImagineData final
{
public:
	struct FSBMasterImagine                       MasterImagine;                                     // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CommonToolTipContents_SummonedSkillParts_C_SetMasterImagineData) == 0x000008, "Wrong alignment on CommonToolTipContents_SummonedSkillParts_C_SetMasterImagineData");
static_assert(sizeof(CommonToolTipContents_SummonedSkillParts_C_SetMasterImagineData) == 0x0000B0, "Wrong size on CommonToolTipContents_SummonedSkillParts_C_SetMasterImagineData");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_SetMasterImagineData, MasterImagine) == 0x000000, "Member 'CommonToolTipContents_SummonedSkillParts_C_SetMasterImagineData::MasterImagine' has a wrong offset!");

// Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.ResetSummonedInfo
// 0x0003 (0x0003 - 0x0000)
struct CommonToolTipContents_SummonedSkillParts_C_ResetSummonedInfo final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonToolTipContents_SummonedSkillParts_C_ResetSummonedInfo) == 0x000001, "Wrong alignment on CommonToolTipContents_SummonedSkillParts_C_ResetSummonedInfo");
static_assert(sizeof(CommonToolTipContents_SummonedSkillParts_C_ResetSummonedInfo) == 0x000003, "Wrong size on CommonToolTipContents_SummonedSkillParts_C_ResetSummonedInfo");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_ResetSummonedInfo, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'CommonToolTipContents_SummonedSkillParts_C_ResetSummonedInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_ResetSummonedInfo, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'CommonToolTipContents_SummonedSkillParts_C_ResetSummonedInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonToolTipContents_SummonedSkillParts_C_ResetSummonedInfo, CallFunc_IsValid_ReturnValue_2) == 0x000002, "Member 'CommonToolTipContents_SummonedSkillParts_C_ResetSummonedInfo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

}

