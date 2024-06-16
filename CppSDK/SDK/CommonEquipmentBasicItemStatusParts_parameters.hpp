#pragma once

 

// Package: CommonEquipmentBasicItemStatusParts

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.ExecuteUbergraph_CommonEquipmentBasicItemStatusParts
// 0x02D0 (0x02D0 - 0x0000)
struct CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_609A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_609B[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	struct FItemMasterData                        K2Node_CustomEvent_MasterItem;                     // 0x0038(0x00D0)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_609C[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0120(0x0018)()
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_609D[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0140(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01A0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x01B8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x01D0(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0220(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0230(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0248(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0260(0x0018)()
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0278(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0290(0x0018)()
	class FString                                 CallFunc_GetItemText_ReturnValue_1;                // 0x02A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x02B8(0x0018)()
};
static_assert(alignof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts) == 0x000008, "Wrong alignment on CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts");
static_assert(sizeof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts) == 0x0002D0, "Wrong size on CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, EntryPoint) == 0x000000, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000008, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, Temp_bool_Variable) == 0x000018, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, K2Node_CustomEvent_MasterItem) == 0x000038, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::K2Node_CustomEvent_MasterItem' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000108, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, CallFunc_GetClassNameText_ReturnValue) == 0x000110, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000120, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000138, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, K2Node_MakeStruct_FormatArgumentData) == 0x000140, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, CallFunc_GetTextFromAsset_ReturnValue) == 0x000180, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000190, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001A0, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0001B8, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, K2Node_MakeStruct_FormatArgumentData_1) == 0x0001D0, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, CallFunc_GetItemText_ReturnValue) == 0x000210, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, K2Node_MakeArray_Array) == 0x000220, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000230, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, CallFunc_Format_ReturnValue) == 0x000248, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, K2Node_Select_Default) == 0x000260, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, CallFunc_Conv_FloatToText_ReturnValue) == 0x000278, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, CallFunc_Conv_IntToText_ReturnValue) == 0x000290, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, CallFunc_GetItemText_ReturnValue_1) == 0x0002A8, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::CallFunc_GetItemText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0002B8, "Member 'CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");

// Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.Set ItemData
// 0x00D0 (0x00D0 - 0x0000)
struct CommonEquipmentBasicItemStatusParts_C_Set_ItemData final
{
public:
	struct FItemMasterData                        Param_MasterItem;                                  // 0x0000(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CommonEquipmentBasicItemStatusParts_C_Set_ItemData) == 0x000008, "Wrong alignment on CommonEquipmentBasicItemStatusParts_C_Set_ItemData");
static_assert(sizeof(CommonEquipmentBasicItemStatusParts_C_Set_ItemData) == 0x0000D0, "Wrong size on CommonEquipmentBasicItemStatusParts_C_Set_ItemData");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_Set_ItemData, Param_MasterItem) == 0x000000, "Member 'CommonEquipmentBasicItemStatusParts_C_Set_ItemData::Param_MasterItem' has a wrong offset!");

// Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.SetShowRateButton
// 0x0005 (0x0005 - 0x0000)
struct CommonEquipmentBasicItemStatusParts_C_SetShowRateButton final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonEquipmentBasicItemStatusParts_C_SetShowRateButton) == 0x000001, "Wrong alignment on CommonEquipmentBasicItemStatusParts_C_SetShowRateButton");
static_assert(sizeof(CommonEquipmentBasicItemStatusParts_C_SetShowRateButton) == 0x000005, "Wrong size on CommonEquipmentBasicItemStatusParts_C_SetShowRateButton");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetShowRateButton, bVisible) == 0x000000, "Member 'CommonEquipmentBasicItemStatusParts_C_SetShowRateButton::bVisible' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetShowRateButton, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'CommonEquipmentBasicItemStatusParts_C_SetShowRateButton::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetShowRateButton, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'CommonEquipmentBasicItemStatusParts_C_SetShowRateButton::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetShowRateButton, Temp_bool_Variable) == 0x000003, "Member 'CommonEquipmentBasicItemStatusParts_C_SetShowRateButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetShowRateButton, K2Node_Select_Default) == 0x000004, "Member 'CommonEquipmentBasicItemStatusParts_C_SetShowRateButton::K2Node_Select_Default' has a wrong offset!");

// Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.SetCraftNumVisible
// 0x0040 (0x0040 - 0x0000)
struct CommonEquipmentBasicItemStatusParts_C_SetCraftNumVisible final
{
public:
	bool                                          Param_Visibility;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_609E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CraftNumMin;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CraftNumMax;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_609F[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0028(0x0018)()
};
static_assert(alignof(CommonEquipmentBasicItemStatusParts_C_SetCraftNumVisible) == 0x000008, "Wrong alignment on CommonEquipmentBasicItemStatusParts_C_SetCraftNumVisible");
static_assert(sizeof(CommonEquipmentBasicItemStatusParts_C_SetCraftNumVisible) == 0x000040, "Wrong size on CommonEquipmentBasicItemStatusParts_C_SetCraftNumVisible");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetCraftNumVisible, Param_Visibility) == 0x000000, "Member 'CommonEquipmentBasicItemStatusParts_C_SetCraftNumVisible::Param_Visibility' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetCraftNumVisible, CraftNumMin) == 0x000004, "Member 'CommonEquipmentBasicItemStatusParts_C_SetCraftNumVisible::CraftNumMin' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetCraftNumVisible, CraftNumMax) == 0x000008, "Member 'CommonEquipmentBasicItemStatusParts_C_SetCraftNumVisible::CraftNumMax' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetCraftNumVisible, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'CommonEquipmentBasicItemStatusParts_C_SetCraftNumVisible::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetCraftNumVisible, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000028, "Member 'CommonEquipmentBasicItemStatusParts_C_SetCraftNumVisible::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

// Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.SetEventTermId
// 0x0098 (0x0098 - 0x0000)
struct CommonEquipmentBasicItemStatusParts_C_SetEventTermId final
{
public:
	class FString                                 Param_EventTermId;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0010(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0038(0x0028)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
	struct FDateTime                              CallFunc_GetEventTermEndTime_OutEndTime;           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermEndTime_ReturnValue;          // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEventTermActive_ReturnValue;            // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentBasicItemStatusParts_C_SetEventTermId) == 0x000008, "Wrong alignment on CommonEquipmentBasicItemStatusParts_C_SetEventTermId");
static_assert(sizeof(CommonEquipmentBasicItemStatusParts_C_SetEventTermId) == 0x000098, "Wrong size on CommonEquipmentBasicItemStatusParts_C_SetEventTermId");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetEventTermId, Param_EventTermId) == 0x000000, "Member 'CommonEquipmentBasicItemStatusParts_C_SetEventTermId::Param_EventTermId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetEventTermId, K2Node_MakeStruct_SlateColor) == 0x000010, "Member 'CommonEquipmentBasicItemStatusParts_C_SetEventTermId::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetEventTermId, K2Node_MakeStruct_SlateColor_1) == 0x000038, "Member 'CommonEquipmentBasicItemStatusParts_C_SetEventTermId::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetEventTermId, CallFunc_GetTextFromAsset_ReturnValue) == 0x000060, "Member 'CommonEquipmentBasicItemStatusParts_C_SetEventTermId::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetEventTermId, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'CommonEquipmentBasicItemStatusParts_C_SetEventTermId::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetEventTermId, CallFunc_GetEventTermEndTime_OutEndTime) == 0x000088, "Member 'CommonEquipmentBasicItemStatusParts_C_SetEventTermId::CallFunc_GetEventTermEndTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetEventTermId, CallFunc_GetEventTermEndTime_ReturnValue) == 0x000090, "Member 'CommonEquipmentBasicItemStatusParts_C_SetEventTermId::CallFunc_GetEventTermEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetEventTermId, CallFunc_SetDateTime_ReturnValue) == 0x000091, "Member 'CommonEquipmentBasicItemStatusParts_C_SetEventTermId::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetEventTermId, CallFunc_IsEventTermActive_ReturnValue) == 0x000092, "Member 'CommonEquipmentBasicItemStatusParts_C_SetEventTermId::CallFunc_IsEventTermActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetEventTermId, CallFunc_IsEmpty_ReturnValue) == 0x000093, "Member 'CommonEquipmentBasicItemStatusParts_C_SetEventTermId::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");

// Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.SetRecepiId
// 0x02F8 (0x02F8 - 0x0000)
struct CommonEquipmentBasicItemStatusParts_C_SetRecepiId final
{
public:
	int32                                         Param_RecepiId;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60A0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        ItemMasterData;                                    // 0x0008(0x00D0)(Edit, BlueprintVisible)
	bool                                          IsItemCraft;                                       // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60A1[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CraftMasterData;                                   // 0x00E0(0x0088)(Edit, BlueprintVisible)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0178(0x0018)()
	bool                                          CallFunc_FindCraftMaster_bIsValid;                 // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60A2[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMaster_CraftMaster;              // 0x0198(0x0088)()
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventTermActive_ReturnValue;            // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ContainsTimeoutRecepiMaterial_ReturnValue; // 0x0222(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanNOR_ReturnValue;                   // 0x0223(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x0224(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60A3[0x3];                                     // 0x0225(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0228(0x00D0)()
};
static_assert(alignof(CommonEquipmentBasicItemStatusParts_C_SetRecepiId) == 0x000008, "Wrong alignment on CommonEquipmentBasicItemStatusParts_C_SetRecepiId");
static_assert(sizeof(CommonEquipmentBasicItemStatusParts_C_SetRecepiId) == 0x0002F8, "Wrong size on CommonEquipmentBasicItemStatusParts_C_SetRecepiId");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetRecepiId, Param_RecepiId) == 0x000000, "Member 'CommonEquipmentBasicItemStatusParts_C_SetRecepiId::Param_RecepiId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetRecepiId, ItemMasterData) == 0x000008, "Member 'CommonEquipmentBasicItemStatusParts_C_SetRecepiId::ItemMasterData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetRecepiId, IsItemCraft) == 0x0000D8, "Member 'CommonEquipmentBasicItemStatusParts_C_SetRecepiId::IsItemCraft' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetRecepiId, CraftMasterData) == 0x0000E0, "Member 'CommonEquipmentBasicItemStatusParts_C_SetRecepiId::CraftMasterData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetRecepiId, CallFunc_GetTextFromAsset_ReturnValue) == 0x000168, "Member 'CommonEquipmentBasicItemStatusParts_C_SetRecepiId::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetRecepiId, CallFunc_Conv_StringToText_ReturnValue) == 0x000178, "Member 'CommonEquipmentBasicItemStatusParts_C_SetRecepiId::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetRecepiId, CallFunc_FindCraftMaster_bIsValid) == 0x000190, "Member 'CommonEquipmentBasicItemStatusParts_C_SetRecepiId::CallFunc_FindCraftMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetRecepiId, CallFunc_FindCraftMaster_CraftMaster) == 0x000198, "Member 'CommonEquipmentBasicItemStatusParts_C_SetRecepiId::CallFunc_FindCraftMaster_CraftMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetRecepiId, CallFunc_IsEmpty_ReturnValue) == 0x000220, "Member 'CommonEquipmentBasicItemStatusParts_C_SetRecepiId::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetRecepiId, CallFunc_IsEventTermActive_ReturnValue) == 0x000221, "Member 'CommonEquipmentBasicItemStatusParts_C_SetRecepiId::CallFunc_IsEventTermActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetRecepiId, CallFunc_ContainsTimeoutRecepiMaterial_ReturnValue) == 0x000222, "Member 'CommonEquipmentBasicItemStatusParts_C_SetRecepiId::CallFunc_ContainsTimeoutRecepiMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetRecepiId, CallFunc_BooleanNOR_ReturnValue) == 0x000223, "Member 'CommonEquipmentBasicItemStatusParts_C_SetRecepiId::CallFunc_BooleanNOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetRecepiId, CallFunc_FindItemMaster_bIsValid) == 0x000224, "Member 'CommonEquipmentBasicItemStatusParts_C_SetRecepiId::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicItemStatusParts_C_SetRecepiId, CallFunc_FindItemMaster_ItemMaster) == 0x000228, "Member 'CommonEquipmentBasicItemStatusParts_C_SetRecepiId::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");

}

