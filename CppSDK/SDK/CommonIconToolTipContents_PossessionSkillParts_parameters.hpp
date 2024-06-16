#pragma once

 

// Package: CommonIconToolTipContents_PossessionSkillParts

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CommonIconToolTipContents_PossessionSkillParts.CommonIconToolTipContents_PossessionSkillParts_C.ExecuteUbergraph_CommonIconToolTipContents_PossessionSkillParts
// 0x0040 (0x0040 - 0x0000)
struct CommonIconToolTipContents_PossessionSkillParts_C_ExecuteUbergraph_CommonIconToolTipContents_PossessionSkillParts final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Event_Color;                                // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92CB[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0018(0x0028)()
};
static_assert(alignof(CommonIconToolTipContents_PossessionSkillParts_C_ExecuteUbergraph_CommonIconToolTipContents_PossessionSkillParts) == 0x000008, "Wrong alignment on CommonIconToolTipContents_PossessionSkillParts_C_ExecuteUbergraph_CommonIconToolTipContents_PossessionSkillParts");
static_assert(sizeof(CommonIconToolTipContents_PossessionSkillParts_C_ExecuteUbergraph_CommonIconToolTipContents_PossessionSkillParts) == 0x000040, "Wrong size on CommonIconToolTipContents_PossessionSkillParts_C_ExecuteUbergraph_CommonIconToolTipContents_PossessionSkillParts");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_ExecuteUbergraph_CommonIconToolTipContents_PossessionSkillParts, EntryPoint) == 0x000000, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_ExecuteUbergraph_CommonIconToolTipContents_PossessionSkillParts::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_ExecuteUbergraph_CommonIconToolTipContents_PossessionSkillParts, K2Node_Event_Color) == 0x000004, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_ExecuteUbergraph_CommonIconToolTipContents_PossessionSkillParts::K2Node_Event_Color' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_ExecuteUbergraph_CommonIconToolTipContents_PossessionSkillParts, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_ExecuteUbergraph_CommonIconToolTipContents_PossessionSkillParts::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function CommonIconToolTipContents_PossessionSkillParts.CommonIconToolTipContents_PossessionSkillParts_C.SetTextColor
// 0x0010 (0x0010 - 0x0000)
struct CommonIconToolTipContents_PossessionSkillParts_C_SetTextColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTipContents_PossessionSkillParts_C_SetTextColor) == 0x000004, "Wrong alignment on CommonIconToolTipContents_PossessionSkillParts_C_SetTextColor");
static_assert(sizeof(CommonIconToolTipContents_PossessionSkillParts_C_SetTextColor) == 0x000010, "Wrong size on CommonIconToolTipContents_PossessionSkillParts_C_SetTextColor");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetTextColor, Color) == 0x000000, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetTextColor::Color' has a wrong offset!");

// Function CommonIconToolTipContents_PossessionSkillParts.CommonIconToolTipContents_PossessionSkillParts_C.SetPossessionTypeName
// 0x00B0 (0x00B0 - 0x0000)
struct CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionTypeName final
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
static_assert(alignof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionTypeName) == 0x000008, "Wrong alignment on CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionTypeName");
static_assert(sizeof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionTypeName) == 0x0000B0, "Wrong size on CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionTypeName");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionTypeName, InTypeName) == 0x000000, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionTypeName::InTypeName' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionTypeName, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000018, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionTypeName::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionTypeName, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionTypeName::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionTypeName, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionTypeName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionTypeName, K2Node_MakeArray_Array) == 0x000080, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionTypeName::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionTypeName, CallFunc_Format_ReturnValue) == 0x000090, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionTypeName::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionTypeName, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionTypeName::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonIconToolTipContents_PossessionSkillParts.CommonIconToolTipContents_PossessionSkillParts_C.SetPossessionName
// 0x0020 (0x0020 - 0x0000)
struct CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionName final
{
public:
	class FText                                   InName;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionName) == 0x000008, "Wrong alignment on CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionName");
static_assert(sizeof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionName) == 0x000020, "Wrong size on CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionName");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionName, InName) == 0x000000, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionName::InName' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionName, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionName::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonIconToolTipContents_PossessionSkillParts.CommonIconToolTipContents_PossessionSkillParts_C.SetPossessionInfo
// 0x02C0 (0x02C0 - 0x0000)
struct CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo final
{
public:
	struct FSBMasterImagine                       InMasterImagineData;                               // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 LocalPossessionDesc;                               // 0x00B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalPossessionTypeName;                           // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalPossessionName;                               // 0x00D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FSBImagineInfo                         LocalPossessionInfo;                               // 0x00E0(0x0048)(Edit, BlueprintVisible)
	struct FSBMasterImagine                       LocalMasterImagineData;                            // 0x0128(0x00B0)(Edit, BlueprintVisible)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x01D8(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue_1;       // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBImagineInfo                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x0230(0x0048)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0279(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92CC[0x6];                                     // 0x027A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0280(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0298(0x0018)()
	class FString                                 CallFunc_GetImagineArtsTypeName_OutTypeName;       // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo) == 0x000008, "Wrong alignment on CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo");
static_assert(sizeof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo) == 0x0002C0, "Wrong size on CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo, InMasterImagineData) == 0x000000, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo::InMasterImagineData' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo, LocalPossessionDesc) == 0x0000B0, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo::LocalPossessionDesc' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo, LocalPossessionTypeName) == 0x0000C0, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo::LocalPossessionTypeName' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo, LocalPossessionName) == 0x0000D0, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo::LocalPossessionName' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo, LocalPossessionInfo) == 0x0000E0, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo::LocalPossessionInfo' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo, LocalMasterImagineData) == 0x000128, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo::LocalMasterImagineData' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo, K2Node_MakeArray_Array) == 0x0001D8, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo, CallFunc_Array_Get_Item) == 0x0001E8, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0001F0, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo, CallFunc_GetDisplayName_ReturnValue) == 0x0001F8, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo, CallFunc_GetMasterImagineText_ReturnValue) == 0x000208, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo, CallFunc_GetMasterImagineText_ReturnValue_1) == 0x000218, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo::CallFunc_GetMasterImagineText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo, CallFunc_Conv_StringToName_ReturnValue) == 0x000228, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo, CallFunc_GetDataTableRowFromName_OutRow) == 0x000230, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000278, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo, CallFunc_IsEmpty_ReturnValue) == 0x000279, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000280, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000298, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo, CallFunc_GetImagineArtsTypeName_OutTypeName) == 0x0002B0, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo::CallFunc_GetImagineArtsTypeName_OutTypeName' has a wrong offset!");

// Function CommonIconToolTipContents_PossessionSkillParts.CommonIconToolTipContents_PossessionSkillParts_C.SetMasterImagineData
// 0x00B0 (0x00B0 - 0x0000)
struct CommonIconToolTipContents_PossessionSkillParts_C_SetMasterImagineData final
{
public:
	struct FSBMasterImagine                       MasterImagine;                                     // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CommonIconToolTipContents_PossessionSkillParts_C_SetMasterImagineData) == 0x000008, "Wrong alignment on CommonIconToolTipContents_PossessionSkillParts_C_SetMasterImagineData");
static_assert(sizeof(CommonIconToolTipContents_PossessionSkillParts_C_SetMasterImagineData) == 0x0000B0, "Wrong size on CommonIconToolTipContents_PossessionSkillParts_C_SetMasterImagineData");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_SetMasterImagineData, MasterImagine) == 0x000000, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_SetMasterImagineData::MasterImagine' has a wrong offset!");

// Function CommonIconToolTipContents_PossessionSkillParts.CommonIconToolTipContents_PossessionSkillParts_C.ResetPossessionInfo
// 0x0002 (0x0002 - 0x0000)
struct CommonIconToolTipContents_PossessionSkillParts_C_ResetPossessionInfo final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonIconToolTipContents_PossessionSkillParts_C_ResetPossessionInfo) == 0x000001, "Wrong alignment on CommonIconToolTipContents_PossessionSkillParts_C_ResetPossessionInfo");
static_assert(sizeof(CommonIconToolTipContents_PossessionSkillParts_C_ResetPossessionInfo) == 0x000002, "Wrong size on CommonIconToolTipContents_PossessionSkillParts_C_ResetPossessionInfo");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_ResetPossessionInfo, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_ResetPossessionInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_PossessionSkillParts_C_ResetPossessionInfo, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'CommonIconToolTipContents_PossessionSkillParts_C_ResetPossessionInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

