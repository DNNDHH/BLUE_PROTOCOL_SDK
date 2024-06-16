#pragma once

 

// Package: DroppingTextRare

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function DroppingTextRare.DroppingTextRare_C.ExecuteUbergraph_DroppingTextRare
// 0x0228 (0x0228 - 0x0000)
struct DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9FA3[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0010(0x0018)()
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9FA4[0x5];                                     // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0040(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     K2Node_Event_ItemType;                             // 0x0051(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9FA5[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_ItemId;                               // 0x0054(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_Amount_1;                             // 0x0058(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDroppingTextOption                         K2Node_Event_Option_2;                             // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bUnidentified;                        // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bIsBonusAdd;                          // 0x005E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9FA6[0x1];                                     // 0x005F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetItemIdToText_ReturnValue;              // 0x0060(0x0018)()
	bool                                          CallFunc_GetItemIdToText_IsValid;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9FA7[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeLiteralFloat_ReturnValue;             // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetVisibleSetting_ReturnValue;            // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9FA8[0x2];                                     // 0x00AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Event_ItemName;                             // 0x00B8(0x0018)(ConstParm)
	int32                                         K2Node_Event_Amount;                               // 0x00D0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDroppingTextOption                         K2Node_Event_Option_1;                             // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9FA9[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00D8(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9FAA[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0120(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0130(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0148(0x0040)(HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default_1;                           // 0x0188(0x0018)()
	class FText                                   K2Node_Event_InText;                               // 0x01A0(0x0018)(ConstParm)
	ESBDroppingTextOption                         K2Node_Event_Option;                               // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9FAB[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x01C0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0200(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0210(0x0018)()
};
static_assert(alignof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare) == 0x000008, "Wrong alignment on DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare");
static_assert(sizeof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare) == 0x000228, "Wrong size on DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, EntryPoint) == 0x000000, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::EntryPoint' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, Temp_bool_Variable) == 0x000008, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, Temp_text_Variable) == 0x000010, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, Temp_bool_Variable_1) == 0x000038, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, Temp_byte_Variable) == 0x000039, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, Temp_byte_Variable_1) == 0x00003A, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, K2Node_Event_Animation) == 0x000040, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, CallFunc_PlayAnimation_ReturnValue) == 0x000048, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000050, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, K2Node_Event_ItemType) == 0x000051, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::K2Node_Event_ItemType' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, K2Node_Event_ItemId) == 0x000054, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::K2Node_Event_ItemId' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, K2Node_Event_Amount_1) == 0x000058, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::K2Node_Event_Amount_1' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, K2Node_Event_Option_2) == 0x00005C, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::K2Node_Event_Option_2' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, K2Node_Event_bUnidentified) == 0x00005D, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::K2Node_Event_bUnidentified' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, K2Node_Event_bIsBonusAdd) == 0x00005E, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::K2Node_Event_bIsBonusAdd' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, CallFunc_GetItemIdToText_ReturnValue) == 0x000060, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::CallFunc_GetItemIdToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, CallFunc_GetItemIdToText_IsValid) == 0x000078, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::CallFunc_GetItemIdToText_IsValid' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000080, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, CallFunc_MakeLiteralFloat_ReturnValue) == 0x000088, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::CallFunc_MakeLiteralFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00008C, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, CallFunc_RandomFloatInRange_ReturnValue) == 0x000090, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000094, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, CallFunc_MakeVector2D_ReturnValue) == 0x000098, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x0000A0, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, K2Node_CustomEvent_InUIType) == 0x0000A8, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, K2Node_CustomEvent_bInVisibility) == 0x0000A9, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, K2Node_CustomEvent_bInInstantly) == 0x0000AA, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, CallFunc_GetVisibleSetting_ReturnValue) == 0x0000AB, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::CallFunc_GetVisibleSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, K2Node_Select_Default) == 0x0000AC, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000AD, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x0000B0, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, K2Node_Event_ItemName) == 0x0000B8, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::K2Node_Event_ItemName' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, K2Node_Event_Amount) == 0x0000D0, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::K2Node_Event_Amount' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, K2Node_Event_Option_1) == 0x0000D4, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::K2Node_Event_Option_1' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, K2Node_MakeStruct_FormatArgumentData) == 0x0000D8, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, CallFunc_Greater_IntInt_ReturnValue) == 0x000118, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, K2Node_MakeArray_Array) == 0x000120, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, CallFunc_Format_ReturnValue) == 0x000130, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, K2Node_MakeStruct_FormatArgumentData_1) == 0x000148, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, K2Node_Select_Default_1) == 0x000188, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, K2Node_Event_InText) == 0x0001A0, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::K2Node_Event_InText' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, K2Node_Event_Option) == 0x0001B8, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::K2Node_Event_Option' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, K2Node_MakeStruct_FormatArgumentData_2) == 0x0001C0, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, K2Node_MakeArray_Array_1) == 0x000200, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare, CallFunc_Format_ReturnValue_1) == 0x000210, "Member 'DroppingTextRare_C_ExecuteUbergraph_DroppingTextRare::CallFunc_Format_ReturnValue_1' has a wrong offset!");

// Function DroppingTextRare.DroppingTextRare_C.SetMessageTextInFree
// 0x0020 (0x0020 - 0x0000)
struct DroppingTextRare_C_SetMessageTextInFree final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBDroppingTextOption                         Option;                                            // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DroppingTextRare_C_SetMessageTextInFree) == 0x000008, "Wrong alignment on DroppingTextRare_C_SetMessageTextInFree");
static_assert(sizeof(DroppingTextRare_C_SetMessageTextInFree) == 0x000020, "Wrong size on DroppingTextRare_C_SetMessageTextInFree");
static_assert(offsetof(DroppingTextRare_C_SetMessageTextInFree, InText) == 0x000000, "Member 'DroppingTextRare_C_SetMessageTextInFree::InText' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetMessageTextInFree, Option) == 0x000018, "Member 'DroppingTextRare_C_SetMessageTextInFree::Option' has a wrong offset!");

// Function DroppingTextRare.DroppingTextRare_C.SetMessageTextInItemName
// 0x0020 (0x0020 - 0x0000)
struct DroppingTextRare_C_SetMessageTextInItemName final
{
public:
	class FText                                   ItemName;                                          // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Amount;                                            // 0x0018(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDroppingTextOption                         Option;                                            // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DroppingTextRare_C_SetMessageTextInItemName) == 0x000008, "Wrong alignment on DroppingTextRare_C_SetMessageTextInItemName");
static_assert(sizeof(DroppingTextRare_C_SetMessageTextInItemName) == 0x000020, "Wrong size on DroppingTextRare_C_SetMessageTextInItemName");
static_assert(offsetof(DroppingTextRare_C_SetMessageTextInItemName, ItemName) == 0x000000, "Member 'DroppingTextRare_C_SetMessageTextInItemName::ItemName' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetMessageTextInItemName, Amount) == 0x000018, "Member 'DroppingTextRare_C_SetMessageTextInItemName::Amount' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetMessageTextInItemName, Option) == 0x00001C, "Member 'DroppingTextRare_C_SetMessageTextInItemName::Option' has a wrong offset!");

// Function DroppingTextRare.DroppingTextRare_C.UIVisibleSettingChangeDelegate_Event_0
// 0x0003 (0x0003 - 0x0000)
struct DroppingTextRare_C_UIVisibleSettingChangeDelegate_Event_0 final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DroppingTextRare_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000001, "Wrong alignment on DroppingTextRare_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(sizeof(DroppingTextRare_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000003, "Wrong size on DroppingTextRare_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(offsetof(DroppingTextRare_C_UIVisibleSettingChangeDelegate_Event_0, InUIType) == 0x000000, "Member 'DroppingTextRare_C_UIVisibleSettingChangeDelegate_Event_0::InUIType' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_UIVisibleSettingChangeDelegate_Event_0, bInVisibility) == 0x000001, "Member 'DroppingTextRare_C_UIVisibleSettingChangeDelegate_Event_0::bInVisibility' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_UIVisibleSettingChangeDelegate_Event_0, bInInstantly) == 0x000002, "Member 'DroppingTextRare_C_UIVisibleSettingChangeDelegate_Event_0::bInInstantly' has a wrong offset!");

// Function DroppingTextRare.DroppingTextRare_C.SetMessageTextInItem
// 0x0010 (0x0010 - 0x0000)
struct DroppingTextRare_C_SetMessageTextInItem final
{
public:
	EItemType                                     ItemType;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9FAC[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemId;                                            // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0008(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDroppingTextOption                         Option;                                            // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUnidentified;                                     // 0x000D(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsBonusAdd;                                       // 0x000E(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DroppingTextRare_C_SetMessageTextInItem) == 0x000004, "Wrong alignment on DroppingTextRare_C_SetMessageTextInItem");
static_assert(sizeof(DroppingTextRare_C_SetMessageTextInItem) == 0x000010, "Wrong size on DroppingTextRare_C_SetMessageTextInItem");
static_assert(offsetof(DroppingTextRare_C_SetMessageTextInItem, ItemType) == 0x000000, "Member 'DroppingTextRare_C_SetMessageTextInItem::ItemType' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetMessageTextInItem, ItemId) == 0x000004, "Member 'DroppingTextRare_C_SetMessageTextInItem::ItemId' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetMessageTextInItem, Amount) == 0x000008, "Member 'DroppingTextRare_C_SetMessageTextInItem::Amount' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetMessageTextInItem, Option) == 0x00000C, "Member 'DroppingTextRare_C_SetMessageTextInItem::Option' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetMessageTextInItem, bUnidentified) == 0x00000D, "Member 'DroppingTextRare_C_SetMessageTextInItem::bUnidentified' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetMessageTextInItem, bIsBonusAdd) == 0x00000E, "Member 'DroppingTextRare_C_SetMessageTextInItem::bIsBonusAdd' has a wrong offset!");

// Function DroppingTextRare.DroppingTextRare_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct DroppingTextRare_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DroppingTextRare_C_OnAnimationFinished) == 0x000008, "Wrong alignment on DroppingTextRare_C_OnAnimationFinished");
static_assert(sizeof(DroppingTextRare_C_OnAnimationFinished) == 0x000008, "Wrong size on DroppingTextRare_C_OnAnimationFinished");
static_assert(offsetof(DroppingTextRare_C_OnAnimationFinished, Animation) == 0x000000, "Member 'DroppingTextRare_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function DroppingTextRare.DroppingTextRare_C.GetItemIdToText
// 0x0208 (0x0208 - 0x0000)
struct DroppingTextRare_C_GetItemIdToText final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     ItemType;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUnidentified;                                     // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9FAD[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          IsValid;                                           // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9FAE[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ShowDentifiedName;                                 // 0x0024(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9FAF[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetNameText_ReturnValue;                  // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9FB0[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetNameText_ReturnValue_1;                // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9FB1[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9FB2[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBool_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9FB3[0x6];                                     // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x00A8(0x00D0)()
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0198(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01F0(0x0018)()
};
static_assert(alignof(DroppingTextRare_C_GetItemIdToText) == 0x000008, "Wrong alignment on DroppingTextRare_C_GetItemIdToText");
static_assert(sizeof(DroppingTextRare_C_GetItemIdToText) == 0x000208, "Wrong size on DroppingTextRare_C_GetItemIdToText");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, ID) == 0x000000, "Member 'DroppingTextRare_C_GetItemIdToText::ID' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, ItemType) == 0x000004, "Member 'DroppingTextRare_C_GetItemIdToText::ItemType' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, bUnidentified) == 0x000005, "Member 'DroppingTextRare_C_GetItemIdToText::bUnidentified' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, ReturnValue) == 0x000008, "Member 'DroppingTextRare_C_GetItemIdToText::ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, IsValid) == 0x000020, "Member 'DroppingTextRare_C_GetItemIdToText::IsValid' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, ShowDentifiedName) == 0x000024, "Member 'DroppingTextRare_C_GetItemIdToText::ShowDentifiedName' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00002C, "Member 'DroppingTextRare_C_GetItemIdToText::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, CallFunc_GetNameText_ReturnValue) == 0x000030, "Member 'DroppingTextRare_C_GetItemIdToText::CallFunc_GetNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, CallFunc_BooleanAND_ReturnValue) == 0x000040, "Member 'DroppingTextRare_C_GetItemIdToText::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'DroppingTextRare_C_GetItemIdToText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, CallFunc_Conv_IntToString_ReturnValue) == 0x000060, "Member 'DroppingTextRare_C_GetItemIdToText::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, CallFunc_GetNameText_ReturnValue_1) == 0x000070, "Member 'DroppingTextRare_C_GetItemIdToText::CallFunc_GetNameText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, CallFunc_GetDebugFunction_IsValid) == 0x000080, "Member 'DroppingTextRare_C_GetItemIdToText::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, CallFunc_GetDebugFunction_ReturnValue) == 0x000088, "Member 'DroppingTextRare_C_GetItemIdToText::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, CallFunc_GetMasterDataManager_IsValid) == 0x000090, "Member 'DroppingTextRare_C_GetItemIdToText::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, CallFunc_GetMasterDataManager_ReturnValue) == 0x000098, "Member 'DroppingTextRare_C_GetItemIdToText::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, CallFunc_GetBool_ReturnValue) == 0x0000A0, "Member 'DroppingTextRare_C_GetItemIdToText::CallFunc_GetBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, CallFunc_GetItemMasterData_IsExists) == 0x0000A1, "Member 'DroppingTextRare_C_GetItemIdToText::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, CallFunc_GetItemMasterData_ReturnValue) == 0x0000A8, "Member 'DroppingTextRare_C_GetItemIdToText::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, CallFunc_GetItemText_ReturnValue) == 0x000178, "Member 'DroppingTextRare_C_GetItemIdToText::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, CallFunc_Concat_StrStr_ReturnValue) == 0x000188, "Member 'DroppingTextRare_C_GetItemIdToText::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000198, "Member 'DroppingTextRare_C_GetItemIdToText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0001B0, "Member 'DroppingTextRare_C_GetItemIdToText::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0001C0, "Member 'DroppingTextRare_C_GetItemIdToText::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0001D0, "Member 'DroppingTextRare_C_GetItemIdToText::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, CallFunc_Concat_StrStr_ReturnValue_4) == 0x0001E0, "Member 'DroppingTextRare_C_GetItemIdToText::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_GetItemIdToText, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001F0, "Member 'DroppingTextRare_C_GetItemIdToText::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function DroppingTextRare.DroppingTextRare_C.SetTextColor
// 0x00C0 (0x00C0 - 0x0000)
struct DroppingTextRare_C_SetTextColor final
{
public:
	ESBDroppingTextOption                         Param_Index;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogOption                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9FB4[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_3;                            // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_4;                            // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_5;                            // 0x0054(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_6;                            // 0x0064(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDroppingTextOption                         Temp_byte_Variable_1;                              // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogOption                              Temp_byte_Variable_2;                              // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogOption                              Temp_byte_Variable_3;                              // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogOption                              Temp_byte_Variable_4;                              // 0x0077(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogOption                              K2Node_Select_Default;                             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9FB5[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x007C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9FB6[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0090(0x0028)()
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue_1;        // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue_2;        // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DroppingTextRare_C_SetTextColor) == 0x000008, "Wrong alignment on DroppingTextRare_C_SetTextColor");
static_assert(sizeof(DroppingTextRare_C_SetTextColor) == 0x0000C0, "Wrong size on DroppingTextRare_C_SetTextColor");
static_assert(offsetof(DroppingTextRare_C_SetTextColor, Param_Index) == 0x000000, "Member 'DroppingTextRare_C_SetTextColor::Param_Index' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetTextColor, Temp_byte_Variable) == 0x000001, "Member 'DroppingTextRare_C_SetTextColor::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetTextColor, Temp_struct_Variable) == 0x000004, "Member 'DroppingTextRare_C_SetTextColor::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetTextColor, Temp_struct_Variable_1) == 0x000014, "Member 'DroppingTextRare_C_SetTextColor::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetTextColor, Temp_struct_Variable_2) == 0x000024, "Member 'DroppingTextRare_C_SetTextColor::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetTextColor, Temp_struct_Variable_3) == 0x000034, "Member 'DroppingTextRare_C_SetTextColor::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetTextColor, Temp_struct_Variable_4) == 0x000044, "Member 'DroppingTextRare_C_SetTextColor::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetTextColor, Temp_struct_Variable_5) == 0x000054, "Member 'DroppingTextRare_C_SetTextColor::Temp_struct_Variable_5' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetTextColor, Temp_struct_Variable_6) == 0x000064, "Member 'DroppingTextRare_C_SetTextColor::Temp_struct_Variable_6' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetTextColor, Temp_byte_Variable_1) == 0x000074, "Member 'DroppingTextRare_C_SetTextColor::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetTextColor, Temp_byte_Variable_2) == 0x000075, "Member 'DroppingTextRare_C_SetTextColor::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetTextColor, Temp_byte_Variable_3) == 0x000076, "Member 'DroppingTextRare_C_SetTextColor::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetTextColor, Temp_byte_Variable_4) == 0x000077, "Member 'DroppingTextRare_C_SetTextColor::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetTextColor, K2Node_Select_Default) == 0x000078, "Member 'DroppingTextRare_C_SetTextColor::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetTextColor, K2Node_Select_Default_1) == 0x00007C, "Member 'DroppingTextRare_C_SetTextColor::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetTextColor, K2Node_MakeStruct_SlateColor) == 0x000090, "Member 'DroppingTextRare_C_SetTextColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetTextColor, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x0000B8, "Member 'DroppingTextRare_C_SetTextColor::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetTextColor, CallFunc_NotEqual_FloatFloat_ReturnValue_1) == 0x0000B9, "Member 'DroppingTextRare_C_SetTextColor::CallFunc_NotEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetTextColor, CallFunc_NotEqual_FloatFloat_ReturnValue_2) == 0x0000BA, "Member 'DroppingTextRare_C_SetTextColor::CallFunc_NotEqual_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetTextColor, CallFunc_BooleanOR_ReturnValue) == 0x0000BB, "Member 'DroppingTextRare_C_SetTextColor::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(DroppingTextRare_C_SetTextColor, CallFunc_BooleanOR_ReturnValue_1) == 0x0000BC, "Member 'DroppingTextRare_C_SetTextColor::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

}

