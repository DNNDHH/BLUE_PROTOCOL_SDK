#pragma once

 

// Package: CommonSummonedInfoItem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.ExecuteUbergraph_CommonSummonedInfoItem
// 0x0048 (0x0048 - 0x0000)
struct CommonSummonedInfoItem_C_ExecuteUbergraph_CommonSummonedInfoItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91ED[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Event_Color;                                // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0018(0x0028)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonSummonedInfoItem_C_ExecuteUbergraph_CommonSummonedInfoItem) == 0x000008, "Wrong alignment on CommonSummonedInfoItem_C_ExecuteUbergraph_CommonSummonedInfoItem");
static_assert(sizeof(CommonSummonedInfoItem_C_ExecuteUbergraph_CommonSummonedInfoItem) == 0x000048, "Wrong size on CommonSummonedInfoItem_C_ExecuteUbergraph_CommonSummonedInfoItem");
static_assert(offsetof(CommonSummonedInfoItem_C_ExecuteUbergraph_CommonSummonedInfoItem, EntryPoint) == 0x000000, "Member 'CommonSummonedInfoItem_C_ExecuteUbergraph_CommonSummonedInfoItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_ExecuteUbergraph_CommonSummonedInfoItem, K2Node_Event_IsDesignTime) == 0x000004, "Member 'CommonSummonedInfoItem_C_ExecuteUbergraph_CommonSummonedInfoItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_ExecuteUbergraph_CommonSummonedInfoItem, K2Node_Event_Color) == 0x000008, "Member 'CommonSummonedInfoItem_C_ExecuteUbergraph_CommonSummonedInfoItem::K2Node_Event_Color' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_ExecuteUbergraph_CommonSummonedInfoItem, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'CommonSummonedInfoItem_C_ExecuteUbergraph_CommonSummonedInfoItem::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_ExecuteUbergraph_CommonSummonedInfoItem, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'CommonSummonedInfoItem_C_ExecuteUbergraph_CommonSummonedInfoItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetTextColor
// 0x0010 (0x0010 - 0x0000)
struct CommonSummonedInfoItem_C_SetTextColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonSummonedInfoItem_C_SetTextColor) == 0x000004, "Wrong alignment on CommonSummonedInfoItem_C_SetTextColor");
static_assert(sizeof(CommonSummonedInfoItem_C_SetTextColor) == 0x000010, "Wrong size on CommonSummonedInfoItem_C_SetTextColor");
static_assert(offsetof(CommonSummonedInfoItem_C_SetTextColor, Color) == 0x000000, "Member 'CommonSummonedInfoItem_C_SetTextColor::Color' has a wrong offset!");

// Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommonSummonedInfoItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonSummonedInfoItem_C_PreConstruct) == 0x000001, "Wrong alignment on CommonSummonedInfoItem_C_PreConstruct");
static_assert(sizeof(CommonSummonedInfoItem_C_PreConstruct) == 0x000001, "Wrong size on CommonSummonedInfoItem_C_PreConstruct");
static_assert(offsetof(CommonSummonedInfoItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommonSummonedInfoItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetSummonedTypeName
// 0x00B0 (0x00B0 - 0x0000)
struct CommonSummonedInfoItem_C_SetSummonedTypeName final
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
static_assert(alignof(CommonSummonedInfoItem_C_SetSummonedTypeName) == 0x000008, "Wrong alignment on CommonSummonedInfoItem_C_SetSummonedTypeName");
static_assert(sizeof(CommonSummonedInfoItem_C_SetSummonedTypeName) == 0x0000B0, "Wrong size on CommonSummonedInfoItem_C_SetSummonedTypeName");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedTypeName, InTypeName) == 0x000000, "Member 'CommonSummonedInfoItem_C_SetSummonedTypeName::InTypeName' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedTypeName, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000018, "Member 'CommonSummonedInfoItem_C_SetSummonedTypeName::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedTypeName, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'CommonSummonedInfoItem_C_SetSummonedTypeName::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedTypeName, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'CommonSummonedInfoItem_C_SetSummonedTypeName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedTypeName, K2Node_MakeArray_Array) == 0x000080, "Member 'CommonSummonedInfoItem_C_SetSummonedTypeName::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedTypeName, CallFunc_Format_ReturnValue) == 0x000090, "Member 'CommonSummonedInfoItem_C_SetSummonedTypeName::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedTypeName, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'CommonSummonedInfoItem_C_SetSummonedTypeName::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetSummonedName
// 0x0020 (0x0020 - 0x0000)
struct CommonSummonedInfoItem_C_SetSummonedName final
{
public:
	class FText                                   InName;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonSummonedInfoItem_C_SetSummonedName) == 0x000008, "Wrong alignment on CommonSummonedInfoItem_C_SetSummonedName");
static_assert(sizeof(CommonSummonedInfoItem_C_SetSummonedName) == 0x000020, "Wrong size on CommonSummonedInfoItem_C_SetSummonedName");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedName, InName) == 0x000000, "Member 'CommonSummonedInfoItem_C_SetSummonedName::InName' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedName, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'CommonSummonedInfoItem_C_SetSummonedName::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetSummonedInfo
// 0x0538 (0x0538 - 0x0000)
struct CommonSummonedInfoItem_C_SetSummonedInfo final
{
public:
	struct FSBMasterImagine                       InImagineMasterData;                               // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 UniqueId;                                          // 0x00B0(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           LocalInfo;                                         // 0x00C0(0x0118)(Edit, BlueprintVisible)
	class FString                                 LocalPossessionDesc2;                              // 0x01D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LocalStackNum;                                     // 0x01E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91EE[0x4];                                     // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalUniqueId;                                     // 0x01F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalSummonedDesc;                                 // 0x0200(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalSummonedTypeName;                             // 0x0210(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalSummonedName;                                 // 0x0220(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FSBImagineInfo                         LocalSummonedInfo;                                 // 0x0230(0x0048)(Edit, BlueprintVisible)
	struct FSBMasterImagine                       LocalMasterImagineData;                            // 0x0278(0x00B0)(Edit, BlueprintVisible)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0328(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91EF[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_FindItemByAllStorage_OutResult;           // 0x0340(0x0118)()
	bool                                          CallFunc_FindItemByAllStorage_ReturnValue;         // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91F0[0x7];                                     // 0x0459(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetImagineArtsTypeName_OutTypeName;       // 0x0460(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetImagineArtsName_OutArtsName;           // 0x0470(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0480(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0498(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91F1[0x7];                                     // 0x04B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetStackBImagineDescText_ReturnValue;     // 0x04B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x04C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBImagineInfo                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x04D0(0x0048)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91F2[0x7];                                     // 0x0519(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x0520(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x0530(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0534(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonSummonedInfoItem_C_SetSummonedInfo) == 0x000008, "Wrong alignment on CommonSummonedInfoItem_C_SetSummonedInfo");
static_assert(sizeof(CommonSummonedInfoItem_C_SetSummonedInfo) == 0x000538, "Wrong size on CommonSummonedInfoItem_C_SetSummonedInfo");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, InImagineMasterData) == 0x000000, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::InImagineMasterData' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, UniqueId) == 0x0000B0, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::UniqueId' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, LocalInfo) == 0x0000C0, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::LocalInfo' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, LocalPossessionDesc2) == 0x0001D8, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::LocalPossessionDesc2' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, LocalStackNum) == 0x0001E8, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::LocalStackNum' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, LocalUniqueId) == 0x0001F0, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::LocalUniqueId' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, LocalSummonedDesc) == 0x000200, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::LocalSummonedDesc' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, LocalSummonedTypeName) == 0x000210, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::LocalSummonedTypeName' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, LocalSummonedName) == 0x000220, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::LocalSummonedName' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, LocalSummonedInfo) == 0x000230, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::LocalSummonedInfo' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, LocalMasterImagineData) == 0x000278, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::LocalMasterImagineData' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000328, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x000338, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, CallFunc_FindItemByAllStorage_OutResult) == 0x000340, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::CallFunc_FindItemByAllStorage_OutResult' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, CallFunc_FindItemByAllStorage_ReturnValue) == 0x000458, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::CallFunc_FindItemByAllStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, CallFunc_GetImagineArtsTypeName_OutTypeName) == 0x000460, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::CallFunc_GetImagineArtsTypeName_OutTypeName' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, CallFunc_GetImagineArtsName_OutArtsName) == 0x000470, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::CallFunc_GetImagineArtsName_OutArtsName' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000480, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000498, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, CallFunc_IsValid_ReturnValue) == 0x0004B0, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, CallFunc_GetStackBImagineDescText_ReturnValue) == 0x0004B8, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::CallFunc_GetStackBImagineDescText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, CallFunc_Conv_StringToName_ReturnValue) == 0x0004C8, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, CallFunc_GetDataTableRowFromName_OutRow) == 0x0004D0, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000518, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, CallFunc_GetMasterImagineText_ReturnValue) == 0x000520, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, CallFunc_GetStackBNum_ReturnValue) == 0x000530, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetSummonedInfo, CallFunc_IsValid_ReturnValue_1) == 0x000534, "Member 'CommonSummonedInfoItem_C_SetSummonedInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetMasterImagineData
// 0x00C0 (0x00C0 - 0x0000)
struct CommonSummonedInfoItem_C_SetMasterImagineData final
{
public:
	struct FSBMasterImagine                       MasterImagine;                                     // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 UniqueId;                                          // 0x00B0(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonSummonedInfoItem_C_SetMasterImagineData) == 0x000008, "Wrong alignment on CommonSummonedInfoItem_C_SetMasterImagineData");
static_assert(sizeof(CommonSummonedInfoItem_C_SetMasterImagineData) == 0x0000C0, "Wrong size on CommonSummonedInfoItem_C_SetMasterImagineData");
static_assert(offsetof(CommonSummonedInfoItem_C_SetMasterImagineData, MasterImagine) == 0x000000, "Member 'CommonSummonedInfoItem_C_SetMasterImagineData::MasterImagine' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetMasterImagineData, UniqueId) == 0x0000B0, "Member 'CommonSummonedInfoItem_C_SetMasterImagineData::UniqueId' has a wrong offset!");

// Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.ResetSummonedInfo
// 0x0003 (0x0003 - 0x0000)
struct CommonSummonedInfoItem_C_ResetSummonedInfo final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonSummonedInfoItem_C_ResetSummonedInfo) == 0x000001, "Wrong alignment on CommonSummonedInfoItem_C_ResetSummonedInfo");
static_assert(sizeof(CommonSummonedInfoItem_C_ResetSummonedInfo) == 0x000003, "Wrong size on CommonSummonedInfoItem_C_ResetSummonedInfo");
static_assert(offsetof(CommonSummonedInfoItem_C_ResetSummonedInfo, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'CommonSummonedInfoItem_C_ResetSummonedInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_ResetSummonedInfo, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'CommonSummonedInfoItem_C_ResetSummonedInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_ResetSummonedInfo, CallFunc_IsValid_ReturnValue_2) == 0x000002, "Member 'CommonSummonedInfoItem_C_ResetSummonedInfo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetInfoIconActive
// 0x0005 (0x0005 - 0x0000)
struct CommonSummonedInfoItem_C_SetInfoIconActive final
{
public:
	bool                                          InIsActive;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonSummonedInfoItem_C_SetInfoIconActive) == 0x000001, "Wrong alignment on CommonSummonedInfoItem_C_SetInfoIconActive");
static_assert(sizeof(CommonSummonedInfoItem_C_SetInfoIconActive) == 0x000005, "Wrong size on CommonSummonedInfoItem_C_SetInfoIconActive");
static_assert(offsetof(CommonSummonedInfoItem_C_SetInfoIconActive, InIsActive) == 0x000000, "Member 'CommonSummonedInfoItem_C_SetInfoIconActive::InIsActive' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetInfoIconActive, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'CommonSummonedInfoItem_C_SetInfoIconActive::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetInfoIconActive, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'CommonSummonedInfoItem_C_SetInfoIconActive::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetInfoIconActive, Temp_bool_Variable) == 0x000003, "Member 'CommonSummonedInfoItem_C_SetInfoIconActive::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetInfoIconActive, K2Node_Select_Default) == 0x000004, "Member 'CommonSummonedInfoItem_C_SetInfoIconActive::K2Node_Select_Default' has a wrong offset!");

// Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetInfoMark
// 0x0005 (0x0005 - 0x0000)
struct CommonSummonedInfoItem_C_SetInfoMark final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonSummonedInfoItem_C_SetInfoMark) == 0x000001, "Wrong alignment on CommonSummonedInfoItem_C_SetInfoMark");
static_assert(sizeof(CommonSummonedInfoItem_C_SetInfoMark) == 0x000005, "Wrong size on CommonSummonedInfoItem_C_SetInfoMark");
static_assert(offsetof(CommonSummonedInfoItem_C_SetInfoMark, Visible) == 0x000000, "Member 'CommonSummonedInfoItem_C_SetInfoMark::Visible' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetInfoMark, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'CommonSummonedInfoItem_C_SetInfoMark::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetInfoMark, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'CommonSummonedInfoItem_C_SetInfoMark::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetInfoMark, Temp_bool_Variable) == 0x000003, "Member 'CommonSummonedInfoItem_C_SetInfoMark::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonSummonedInfoItem_C_SetInfoMark, K2Node_Select_Default) == 0x000004, "Member 'CommonSummonedInfoItem_C_SetInfoMark::K2Node_Select_Default' has a wrong offset!");

}

