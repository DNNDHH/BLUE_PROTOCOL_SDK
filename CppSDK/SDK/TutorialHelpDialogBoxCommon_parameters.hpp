#pragma once

 

// Package: TutorialHelpDialogBoxCommon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "ST_TutorialExtendData_structs.hpp"
#include "UMG_structs.hpp"
#include "ST_TutorialExtendDataMain_structs.hpp"


namespace SDK::Params
{

// Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.ExecuteUbergraph_TutorialHelpDialogBoxCommon
// 0x00B8 (0x00B8 - 0x0000)
struct TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80D2[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80D3[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80D4[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_InId;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InSubMode;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsContinue;                     // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInIsUsingClassTypeForTutorialHelp; // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  K2Node_CustomEvent_InClasTypeForTutorialHelp;      // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindTurotialHelpData_bFind;               // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80D5[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTutorialHelpData                    CallFunc_FindTurotialHelpData_Ret;                 // 0x0038(0x0058)()
	bool                                          CallFunc_ISCurrentPageEnd_NewParam;                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80D6[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;       // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon) == 0x000008, "Wrong alignment on TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon");
static_assert(sizeof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon) == 0x0000B8, "Wrong size on TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon, EntryPoint) == 0x000000, "Member 'TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon::EntryPoint' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon, CallFunc_Not_PreBool_ReturnValue_1) == 0x000014, "Member 'TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon, CallFunc_PostAkEvent_ReturnValue) == 0x000018, "Member 'TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon, Temp_bool_IsClosed_Variable) == 0x00001C, "Member 'TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon, K2Node_CustomEvent_InId) == 0x000020, "Member 'TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon::K2Node_CustomEvent_InId' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon, K2Node_CustomEvent_InSubMode) == 0x000028, "Member 'TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon::K2Node_CustomEvent_InSubMode' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon, K2Node_CustomEvent_IsContinue) == 0x000029, "Member 'TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon::K2Node_CustomEvent_IsContinue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon, K2Node_CustomEvent_bInIsUsingClassTypeForTutorialHelp) == 0x00002A, "Member 'TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon::K2Node_CustomEvent_bInIsUsingClassTypeForTutorialHelp' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon, K2Node_CustomEvent_InClasTypeForTutorialHelp) == 0x00002B, "Member 'TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon::K2Node_CustomEvent_InClasTypeForTutorialHelp' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon, CallFunc_PlaySE_ReturnValue) == 0x00002C, "Member 'TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon, Temp_bool_Has_Been_Initd_Variable) == 0x000030, "Member 'TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon, CallFunc_FindTurotialHelpData_bFind) == 0x000031, "Member 'TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon::CallFunc_FindTurotialHelpData_bFind' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon, CallFunc_FindTurotialHelpData_Ret) == 0x000038, "Member 'TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon::CallFunc_FindTurotialHelpData_Ret' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon, CallFunc_ISCurrentPageEnd_NewParam) == 0x000090, "Member 'TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon::CallFunc_ISCurrentPageEnd_NewParam' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon, CallFunc_PlayAnimationForward_ReturnValue) == 0x000098, "Member 'TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x0000A0, "Member 'TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon, CallFunc_PlayAnimationReverse_ReturnValue) == 0x0000A8, "Member 'TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x0000B0, "Member 'TutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");

// Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.Init
// 0x000C (0x000C - 0x0000)
struct TutorialHelpDialogBoxCommon_C_Init final
{
public:
	class FName                                   InId;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InSubMode;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_IsContinue;                                  // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInIsUsingClassTypeForTutorialHelp;                // 0x000A(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  InClasTypeForTutorialHelp;                         // 0x000B(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TutorialHelpDialogBoxCommon_C_Init) == 0x000004, "Wrong alignment on TutorialHelpDialogBoxCommon_C_Init");
static_assert(sizeof(TutorialHelpDialogBoxCommon_C_Init) == 0x00000C, "Wrong size on TutorialHelpDialogBoxCommon_C_Init");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_Init, InId) == 0x000000, "Member 'TutorialHelpDialogBoxCommon_C_Init::InId' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_Init, InSubMode) == 0x000008, "Member 'TutorialHelpDialogBoxCommon_C_Init::InSubMode' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_Init, Param_IsContinue) == 0x000009, "Member 'TutorialHelpDialogBoxCommon_C_Init::Param_IsContinue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_Init, bInIsUsingClassTypeForTutorialHelp) == 0x00000A, "Member 'TutorialHelpDialogBoxCommon_C_Init::bInIsUsingClassTypeForTutorialHelp' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_Init, InClasTypeForTutorialHelp) == 0x00000B, "Member 'TutorialHelpDialogBoxCommon_C_Init::InClasTypeForTutorialHelp' has a wrong offset!");

// Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.FindTurotialHelpData
// 0x0218 (0x0218 - 0x0000)
struct TutorialHelpDialogBoxCommon_C_FindTurotialHelpData final
{
public:
	class FName                                   InId;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInIsUsingClassTypeForTutorialHelp;                // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  InClassTypeForTutorialHelp;                        // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFind;                                             // 0x000A(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80D7[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTutorialHelpData                    Ret;                                               // 0x0010(0x0058)(Parm, OutParm)
	class FName                                   LocalID;                                           // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80D8[0x2];                                     // 0x0076(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_wildcard_Variable;                            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTutorialHelpData                    CallFunc_GetDataTableRowFromName_OutRow;           // 0x0080(0x0058)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80D9[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TutorialExtendData                 CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x00E0(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80DA[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable_1;        // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80DB[0x2];                                     // 0x00FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_wildcard_Variable_1;                          // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80DC[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTutorialHelpData                    CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x0118(0x0058)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80DD[0x6];                                     // 0x0172(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TutorialExtendData                 CallFunc_GetDataTableRowFromName_OutRow_3;         // 0x0178(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_3;    // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80DE[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TutorialExtendDataMain             CallFunc_Array_Get_Item;                           // 0x0190(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x01A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80DF[0x3];                                     // 0x01A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TutorialExtendDataMain             CallFunc_Array_Get_Item_1;                         // 0x01AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x01BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x01BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80E0[0x4];                                     // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTutorialHelpData                    K2Node_MakeStruct_SBTutorialHelpData;              // 0x01C0(0x0058)()
};
static_assert(alignof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData) == 0x000008, "Wrong alignment on TutorialHelpDialogBoxCommon_C_FindTurotialHelpData");
static_assert(sizeof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData) == 0x000218, "Wrong size on TutorialHelpDialogBoxCommon_C_FindTurotialHelpData");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, InId) == 0x000000, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::InId' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, bInIsUsingClassTypeForTutorialHelp) == 0x000008, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::bInIsUsingClassTypeForTutorialHelp' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, InClassTypeForTutorialHelp) == 0x000009, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::InClassTypeForTutorialHelp' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, bFind) == 0x00000A, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::bFind' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, Ret) == 0x000010, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::Ret' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, LocalID) == 0x000068, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::LocalID' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, Temp_int_Array_Index_Variable) == 0x000070, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, Temp_bool_True_if_break_was_hit_Variable) == 0x000074, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_Not_PreBool_ReturnValue) == 0x000075, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, Temp_wildcard_Variable) == 0x000078, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::Temp_wildcard_Variable' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_GetDataTableRowFromName_OutRow) == 0x000080, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000D8, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x0000E0, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x0000F0, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_Array_Length_ReturnValue) == 0x0000F4, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, Temp_int_Loop_Counter_Variable) == 0x0000F8, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, Temp_bool_True_if_break_was_hit_Variable_1) == 0x0000FC, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::Temp_bool_True_if_break_was_hit_Variable_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000FD, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_Add_IntInt_ReturnValue) == 0x000100, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, Temp_int_Loop_Counter_Variable_1) == 0x000104, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, Temp_wildcard_Variable_1) == 0x000108, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::Temp_wildcard_Variable_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_Less_IntInt_ReturnValue) == 0x000110, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_GetDataTableRowFromName_OutRow_2) == 0x000118, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_GetDataTableRowFromName_OutRow_2' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_GetDataTableRowFromName_ReturnValue_2) == 0x000170, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_GetDataTableRowFromName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_BooleanAND_ReturnValue) == 0x000171, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_GetDataTableRowFromName_OutRow_3) == 0x000178, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_GetDataTableRowFromName_OutRow_3' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_GetDataTableRowFromName_ReturnValue_3) == 0x000188, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_GetDataTableRowFromName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_Add_IntInt_ReturnValue_1) == 0x00018C, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_Array_Get_Item) == 0x000190, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_Array_Length_ReturnValue_1) == 0x00019C, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001A0, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_BooleanAND_ReturnValue_1) == 0x0001A1, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001A2, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_GetClassType_ReturnValue) == 0x0001A3, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, Temp_int_Array_Index_Variable_1) == 0x0001A4, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0001A8, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_Array_Get_Item_1) == 0x0001AC, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_BooleanOR_ReturnValue) == 0x0001B8, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0001B9, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0001BA, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, CallFunc_BooleanOR_ReturnValue_1) == 0x0001BB, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_FindTurotialHelpData, K2Node_MakeStruct_SBTutorialHelpData) == 0x0001C0, "Member 'TutorialHelpDialogBoxCommon_C_FindTurotialHelpData::K2Node_MakeStruct_SBTutorialHelpData' has a wrong offset!");

// Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.SetHelpData
// 0x00D8 (0x00D8 - 0x0000)
struct TutorialHelpDialogBoxCommon_C_SetHelpData final
{
public:
	int32                                         InPage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_80E1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTutorialHelpData                    InData;                                            // 0x0008(0x0058)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Temp_bool_Variable;                                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80E2[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x006F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_80E3[0x6];                                     // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OpenUrl_ReturnValue;                      // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetLooping_ReturnValue;                   // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Play_ReturnValue;                         // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80E4[0x2];                                     // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetTutorialHelpText_ReturnValue;          // 0x0090(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_80E5[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C0(0x0018)()
};
static_assert(alignof(TutorialHelpDialogBoxCommon_C_SetHelpData) == 0x000008, "Wrong alignment on TutorialHelpDialogBoxCommon_C_SetHelpData");
static_assert(sizeof(TutorialHelpDialogBoxCommon_C_SetHelpData) == 0x0000D8, "Wrong size on TutorialHelpDialogBoxCommon_C_SetHelpData");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, InPage) == 0x000000, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::InPage' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, InData) == 0x000008, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::InData' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, Temp_bool_Variable) == 0x000060, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, CallFunc_Subtract_IntInt_ReturnValue) == 0x000064, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, Temp_byte_Variable) == 0x000068, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, Temp_byte_Variable_1) == 0x000069, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, CallFunc_NotEqual_StrStr_ReturnValue) == 0x00006A, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x00006B, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, K2Node_SwitchEnum_CmpSuccess) == 0x00006C, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, Temp_bool_Variable_1) == 0x00006D, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, Temp_byte_Variable_2) == 0x00006E, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, Temp_byte_Variable_3) == 0x00006F, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, Temp_byte_Variable_4) == 0x000070, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, K2Node_Select_Default) == 0x000071, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, CallFunc_Concat_StrStr_ReturnValue) == 0x000078, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, Temp_byte_Variable_5) == 0x000088, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, CallFunc_OpenUrl_ReturnValue) == 0x000089, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::CallFunc_OpenUrl_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, CallFunc_SetLooping_ReturnValue) == 0x00008A, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::CallFunc_SetLooping_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, K2Node_Select_Default_1) == 0x00008B, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, CallFunc_Play_ReturnValue) == 0x00008C, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::CallFunc_Play_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, Temp_bool_Variable_2) == 0x00008D, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, CallFunc_GetTutorialHelpText_ReturnValue) == 0x000090, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::CallFunc_GetTutorialHelpText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, K2Node_Select_Default_2) == 0x0000A8, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0000B0, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetHelpData, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C0, "Member 'TutorialHelpDialogBoxCommon_C_SetHelpData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.UpdatePageButton
// 0x0060 (0x0060 - 0x0000)
struct TutorialHelpDialogBoxCommon_C_UpdatePageButton final
{
public:
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80E6[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
};
static_assert(alignof(TutorialHelpDialogBoxCommon_C_UpdatePageButton) == 0x000008, "Wrong alignment on TutorialHelpDialogBoxCommon_C_UpdatePageButton");
static_assert(sizeof(TutorialHelpDialogBoxCommon_C_UpdatePageButton) == 0x000060, "Wrong size on TutorialHelpDialogBoxCommon_C_UpdatePageButton");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_UpdatePageButton, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000000, "Member 'TutorialHelpDialogBoxCommon_C_UpdatePageButton::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_UpdatePageButton, CallFunc_Greater_IntInt_ReturnValue) == 0x000001, "Member 'TutorialHelpDialogBoxCommon_C_UpdatePageButton::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_UpdatePageButton, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000002, "Member 'TutorialHelpDialogBoxCommon_C_UpdatePageButton::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_UpdatePageButton, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'TutorialHelpDialogBoxCommon_C_UpdatePageButton::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_UpdatePageButton, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000018, "Member 'TutorialHelpDialogBoxCommon_C_UpdatePageButton::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_UpdatePageButton, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'TutorialHelpDialogBoxCommon_C_UpdatePageButton::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_UpdatePageButton, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000038, "Member 'TutorialHelpDialogBoxCommon_C_UpdatePageButton::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_UpdatePageButton, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'TutorialHelpDialogBoxCommon_C_UpdatePageButton::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.ISCurrentPageEnd
// 0x0002 (0x0002 - 0x0000)
struct TutorialHelpDialogBoxCommon_C_ISCurrentPageEnd final
{
public:
	bool                                          NewParam;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TutorialHelpDialogBoxCommon_C_ISCurrentPageEnd) == 0x000001, "Wrong alignment on TutorialHelpDialogBoxCommon_C_ISCurrentPageEnd");
static_assert(sizeof(TutorialHelpDialogBoxCommon_C_ISCurrentPageEnd) == 0x000002, "Wrong size on TutorialHelpDialogBoxCommon_C_ISCurrentPageEnd");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ISCurrentPageEnd, NewParam) == 0x000000, "Member 'TutorialHelpDialogBoxCommon_C_ISCurrentPageEnd::NewParam' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_ISCurrentPageEnd, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000001, "Member 'TutorialHelpDialogBoxCommon_C_ISCurrentPageEnd::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.SetErrorData
// 0x0058 (0x0058 - 0x0000)
struct TutorialHelpDialogBoxCommon_C_SetErrorData final
{
public:
	class FName                                   HelpId;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
};
static_assert(alignof(TutorialHelpDialogBoxCommon_C_SetErrorData) == 0x000008, "Wrong alignment on TutorialHelpDialogBoxCommon_C_SetErrorData");
static_assert(sizeof(TutorialHelpDialogBoxCommon_C_SetErrorData) == 0x000058, "Wrong size on TutorialHelpDialogBoxCommon_C_SetErrorData");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetErrorData, HelpId) == 0x000000, "Member 'TutorialHelpDialogBoxCommon_C_SetErrorData::HelpId' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetErrorData, CallFunc_Conv_NameToString_ReturnValue) == 0x000008, "Member 'TutorialHelpDialogBoxCommon_C_SetErrorData::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetErrorData, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'TutorialHelpDialogBoxCommon_C_SetErrorData::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetErrorData, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'TutorialHelpDialogBoxCommon_C_SetErrorData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBoxCommon_C_SetErrorData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'TutorialHelpDialogBoxCommon_C_SetErrorData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

}

