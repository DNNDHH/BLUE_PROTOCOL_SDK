#pragma once

 

// Package: CommandMenuCommonSubButtonList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.OnClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct CommandMenuCommonSubButtonList_C_OnClick__DelegateSignature final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenuCommonSubButtonList_C_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on CommandMenuCommonSubButtonList_C_OnClick__DelegateSignature");
static_assert(sizeof(CommandMenuCommonSubButtonList_C_OnClick__DelegateSignature) == 0x000004, "Wrong size on CommandMenuCommonSubButtonList_C_OnClick__DelegateSignature");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_OnClick__DelegateSignature, ButtonId) == 0x000000, "Member 'CommandMenuCommonSubButtonList_C_OnClick__DelegateSignature::ButtonId' has a wrong offset!");

// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.ExecuteUbergraph_CommandMenuCommonSubButtonList
// 0x0200 (0x0200 - 0x0000)
struct CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ButtonId;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ButtonId_1;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0014(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           K2Node_CustomEvent_TextIdNameList;                 // 0x0050(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0064(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FBE[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue;               // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FBF[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue_1;             // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FC0[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FC1[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommandMenuCommonSubButton_C*          K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button; // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FC2[0x2];                                     // 0x00AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FC3[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue_2;           // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FC4[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommandMenuCommonSubButton_C*          K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button_1; // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FC5[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_2;                 // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommandMenuCommonSubButton_C*          K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button_2; // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x00EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FC6[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FC7[0x3];                                     // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue_3;           // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FC8[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelWidget*                           CallFunc_GetParent_ReturnValue;                    // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FC9[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FCA[0x2];                                     // 0x0136(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue_2;             // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue_3;             // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0142(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FCB[0x5];                                     // 0x0143(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelWidget*                           CallFunc_GetParent_ReturnValue_1;                  // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0152(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0153(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FCC[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_3;                 // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommandMenuCommonSubButton_C*          K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button_3; // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FCD[0x6];                                     // 0x016A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_4;                 // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FCE[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommandMenuCommonSubButton_C*          K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button_4; // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCommandMenuCommonTouchCheckEnd_ReturnValue; // 0x018A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCommandMenuCommonSubOn_ReturnValue;    // 0x018B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FCF[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01B0(0x0018)()
	TDelegate<void(int32 ButtonId)>               K2Node_CreateDelegate_OutputDelegate;              // 0x01C8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_3;        // 0x01DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x01DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FD0[0x4];                                     // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBUIController*                        CallFunc_GetUIController_ReturnValue;              // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FD1[0x6];                                     // 0x01EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommandMenuCommonSubButton_C*          CallFunc_Create_ReturnValue;                       // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList) == 0x000008, "Wrong alignment on CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList");
static_assert(sizeof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList) == 0x000200, "Wrong size on CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, EntryPoint) == 0x000000, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_GetChildrenCount_ReturnValue) == 0x000004, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, K2Node_CustomEvent_ButtonId) == 0x000008, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::K2Node_CustomEvent_ButtonId' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, K2Node_CustomEvent_ButtonId_1) == 0x000010, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::K2Node_CustomEvent_ButtonId_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, K2Node_Event_MyGeometry) == 0x000014, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, K2Node_Event_InDeltaTime) == 0x00004C, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, K2Node_CustomEvent_TextIdNameList) == 0x000050, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::K2Node_CustomEvent_TextIdNameList' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, K2Node_MakeStruct_Margin) == 0x000064, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, K2Node_Event_IsDesignTime) == 0x000074, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_GetPlayerController_ReturnValue) == 0x000078, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_IsInputKeyDown_ReturnValue) == 0x000080, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_IsInputKeyDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_GetChildrenCount_ReturnValue_1) == 0x000084, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_IsInputKeyDown_ReturnValue_1) == 0x000088, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_IsInputKeyDown_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, Temp_int_Variable) == 0x00008C, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_BooleanOR_ReturnValue) == 0x000090, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_GetChildAt_ReturnValue) == 0x000098, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button) == 0x0000A0, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000A9, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_Add_IntInt_ReturnValue) == 0x0000AC, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x0000B0, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_GetChildrenCount_ReturnValue_2) == 0x0000B4, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_GetChildrenCount_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0000B8, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000BC, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_GetChildAt_ReturnValue_1) == 0x0000C0, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button_1) == 0x0000C8, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, K2Node_DynamicCast_bSuccess_1) == 0x0000D0, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, Temp_int_Variable_1) == 0x0000D4, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_GetChildAt_ReturnValue_2) == 0x0000D8, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_GetChildAt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button_2) == 0x0000E0, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button_2' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, K2Node_DynamicCast_bSuccess_2) == 0x0000E8, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_IsVisible_ReturnValue) == 0x0000E9, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_BooleanAND_ReturnValue) == 0x0000EA, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x0000EB, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000EC, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_BooleanAND_ReturnValue_1) == 0x0000F0, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000F4, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000F8, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000FC, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_GetChildrenCount_ReturnValue_3) == 0x000100, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_GetChildrenCount_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000104, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, Temp_int_Loop_Counter_Variable) == 0x000108, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_GetParent_ReturnValue) == 0x000110, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_GetParent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_Less_IntInt_ReturnValue) == 0x000118, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_GetDisplayName_ReturnValue) == 0x000120, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_Add_IntInt_ReturnValue_4) == 0x000130, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000134, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, K2Node_SwitchInteger_CmpSuccess) == 0x000135, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_GetPlayerController_ReturnValue_1) == 0x000138, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_IsInputKeyDown_ReturnValue_2) == 0x000140, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_IsInputKeyDown_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_IsInputKeyDown_ReturnValue_3) == 0x000141, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_IsInputKeyDown_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_BooleanOR_ReturnValue_1) == 0x000142, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_GetParent_ReturnValue_1) == 0x000148, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_GetParent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000150, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_GetVisibility_ReturnValue) == 0x000151, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000152, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000153, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_BooleanOR_ReturnValue_2) == 0x000154, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_GetChildAt_ReturnValue_3) == 0x000158, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_GetChildAt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button_3) == 0x000160, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button_3' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, K2Node_DynamicCast_bSuccess_3) == 0x000168, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_IsValid_ReturnValue) == 0x000169, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_GetChildAt_ReturnValue_4) == 0x000170, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_GetChildAt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x000178, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button_4) == 0x000180, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button_4' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, K2Node_DynamicCast_bSuccess_4) == 0x000188, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_IsValid_ReturnValue_1) == 0x000189, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_GetCommandMenuCommonTouchCheckEnd_ReturnValue) == 0x00018A, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_GetCommandMenuCommonTouchCheckEnd_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_GetCommandMenuCommonSubOn_ReturnValue) == 0x00018B, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_GetCommandMenuCommonSubOn_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, Temp_int_Array_Index_Variable) == 0x00018C, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_Array_Get_Item) == 0x000190, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_Array_Contains_ReturnValue) == 0x000198, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0001A0, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_Conv_StringToText_ReturnValue) == 0x0001B0, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, K2Node_CreateDelegate_OutputDelegate) == 0x0001C8, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0001D8, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001D9, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_GreaterEqual_IntInt_ReturnValue_3) == 0x0001DA, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_GreaterEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0001DB, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_GetUIController_ReturnValue) == 0x0001E0, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_GetUIController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_IsValid_ReturnValue_2) == 0x0001E8, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0001E9, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_Create_ReturnValue) == 0x0001F0, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList, CallFunc_AddChild_ReturnValue) == 0x0001F8, "Member 'CommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Alpha_Renew2
// 0x0010 (0x0010 - 0x0000)
struct CommandMenuCommonSubButtonList_C_Alpha_Renew2 final
{
public:
	TArray<class FName>                           Param_TextIdNameList;                              // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CommandMenuCommonSubButtonList_C_Alpha_Renew2) == 0x000008, "Wrong alignment on CommandMenuCommonSubButtonList_C_Alpha_Renew2");
static_assert(sizeof(CommandMenuCommonSubButtonList_C_Alpha_Renew2) == 0x000010, "Wrong size on CommandMenuCommonSubButtonList_C_Alpha_Renew2");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Alpha_Renew2, Param_TextIdNameList) == 0x000000, "Member 'CommandMenuCommonSubButtonList_C_Alpha_Renew2::Param_TextIdNameList' has a wrong offset!");

// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.OnClick_Event_0
// 0x0004 (0x0004 - 0x0000)
struct CommandMenuCommonSubButtonList_C_OnClick_Event_0 final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenuCommonSubButtonList_C_OnClick_Event_0) == 0x000004, "Wrong alignment on CommandMenuCommonSubButtonList_C_OnClick_Event_0");
static_assert(sizeof(CommandMenuCommonSubButtonList_C_OnClick_Event_0) == 0x000004, "Wrong size on CommandMenuCommonSubButtonList_C_OnClick_Event_0");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_OnClick_Event_0, ButtonId) == 0x000000, "Member 'CommandMenuCommonSubButtonList_C_OnClick_Event_0::ButtonId' has a wrong offset!");

// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.CommandMenuCommonSubButton_OnClick
// 0x0004 (0x0004 - 0x0000)
struct CommandMenuCommonSubButtonList_C_CommandMenuCommonSubButton_OnClick final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenuCommonSubButtonList_C_CommandMenuCommonSubButton_OnClick) == 0x000004, "Wrong alignment on CommandMenuCommonSubButtonList_C_CommandMenuCommonSubButton_OnClick");
static_assert(sizeof(CommandMenuCommonSubButtonList_C_CommandMenuCommonSubButton_OnClick) == 0x000004, "Wrong size on CommandMenuCommonSubButtonList_C_CommandMenuCommonSubButton_OnClick");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_CommandMenuCommonSubButton_OnClick, ButtonId) == 0x000000, "Member 'CommandMenuCommonSubButtonList_C_CommandMenuCommonSubButton_OnClick::ButtonId' has a wrong offset!");

// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Tick
// 0x003C (0x003C - 0x0000)
struct CommandMenuCommonSubButtonList_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenuCommonSubButtonList_C_Tick) == 0x000004, "Wrong alignment on CommandMenuCommonSubButtonList_C_Tick");
static_assert(sizeof(CommandMenuCommonSubButtonList_C_Tick) == 0x00003C, "Wrong size on CommandMenuCommonSubButtonList_C_Tick");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Tick, MyGeometry) == 0x000000, "Member 'CommandMenuCommonSubButtonList_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Tick, InDeltaTime) == 0x000038, "Member 'CommandMenuCommonSubButtonList_C_Tick::InDeltaTime' has a wrong offset!");

// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommandMenuCommonSubButtonList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenuCommonSubButtonList_C_PreConstruct) == 0x000001, "Wrong alignment on CommandMenuCommonSubButtonList_C_PreConstruct");
static_assert(sizeof(CommandMenuCommonSubButtonList_C_PreConstruct) == 0x000001, "Wrong size on CommandMenuCommonSubButtonList_C_PreConstruct");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommandMenuCommonSubButtonList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.ChangeFocusButton
// 0x0038 (0x0038 - 0x0000)
struct CommandMenuCommonSubButtonList_C_ChangeFocusButton final
{
public:
	int32                                         InFocusButtonId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSyncCursorPosition;                               // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FD2[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FD3[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommandMenuCommonSubButton_C*          K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FD4[0x1];                                     // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenuCommonSubButtonList_C_ChangeFocusButton) == 0x000008, "Wrong alignment on CommandMenuCommonSubButtonList_C_ChangeFocusButton");
static_assert(sizeof(CommandMenuCommonSubButtonList_C_ChangeFocusButton) == 0x000038, "Wrong size on CommandMenuCommonSubButtonList_C_ChangeFocusButton");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ChangeFocusButton, InFocusButtonId) == 0x000000, "Member 'CommandMenuCommonSubButtonList_C_ChangeFocusButton::InFocusButtonId' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ChangeFocusButton, bSyncCursorPosition) == 0x000004, "Member 'CommandMenuCommonSubButtonList_C_ChangeFocusButton::bSyncCursorPosition' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ChangeFocusButton, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000005, "Member 'CommandMenuCommonSubButtonList_C_ChangeFocusButton::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ChangeFocusButton, CallFunc_IsValid_ReturnValue) == 0x000006, "Member 'CommandMenuCommonSubButtonList_C_ChangeFocusButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ChangeFocusButton, CallFunc_BooleanAND_ReturnValue) == 0x000007, "Member 'CommandMenuCommonSubButtonList_C_ChangeFocusButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ChangeFocusButton, Temp_int_Variable) == 0x000008, "Member 'CommandMenuCommonSubButtonList_C_ChangeFocusButton::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ChangeFocusButton, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'CommandMenuCommonSubButtonList_C_ChangeFocusButton::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ChangeFocusButton, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'CommandMenuCommonSubButtonList_C_ChangeFocusButton::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ChangeFocusButton, K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button) == 0x000020, "Member 'CommandMenuCommonSubButtonList_C_ChangeFocusButton::K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ChangeFocusButton, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'CommandMenuCommonSubButtonList_C_ChangeFocusButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ChangeFocusButton, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000029, "Member 'CommandMenuCommonSubButtonList_C_ChangeFocusButton::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ChangeFocusButton, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00002A, "Member 'CommandMenuCommonSubButtonList_C_ChangeFocusButton::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ChangeFocusButton, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'CommandMenuCommonSubButtonList_C_ChangeFocusButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ChangeFocusButton, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'CommandMenuCommonSubButtonList_C_ChangeFocusButton::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.SetButtonEnable
// 0x0028 (0x0028 - 0x0000)
struct CommandMenuCommonSubButtonList_C_SetButtonEnable final
{
public:
	int32                                         InButtonId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsButtonEnable;                                    // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FD5[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FD6[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommandMenuCommonSubButton_C*          K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenuCommonSubButtonList_C_SetButtonEnable) == 0x000008, "Wrong alignment on CommandMenuCommonSubButtonList_C_SetButtonEnable");
static_assert(sizeof(CommandMenuCommonSubButtonList_C_SetButtonEnable) == 0x000028, "Wrong size on CommandMenuCommonSubButtonList_C_SetButtonEnable");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetButtonEnable, InButtonId) == 0x000000, "Member 'CommandMenuCommonSubButtonList_C_SetButtonEnable::InButtonId' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetButtonEnable, IsButtonEnable) == 0x000004, "Member 'CommandMenuCommonSubButtonList_C_SetButtonEnable::IsButtonEnable' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetButtonEnable, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'CommandMenuCommonSubButtonList_C_SetButtonEnable::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetButtonEnable, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'CommandMenuCommonSubButtonList_C_SetButtonEnable::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetButtonEnable, K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button) == 0x000018, "Member 'CommandMenuCommonSubButtonList_C_SetButtonEnable::K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetButtonEnable, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'CommandMenuCommonSubButtonList_C_SetButtonEnable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetButtonEnable, CallFunc_Less_IntInt_ReturnValue) == 0x000021, "Member 'CommandMenuCommonSubButtonList_C_SetButtonEnable::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.SetUIBlock
// 0x0005 (0x0005 - 0x0000)
struct CommandMenuCommonSubButtonList_C_SetUIBlock final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenuCommonSubButtonList_C_SetUIBlock) == 0x000001, "Wrong alignment on CommandMenuCommonSubButtonList_C_SetUIBlock");
static_assert(sizeof(CommandMenuCommonSubButtonList_C_SetUIBlock) == 0x000005, "Wrong size on CommandMenuCommonSubButtonList_C_SetUIBlock");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetUIBlock, bShow) == 0x000000, "Member 'CommandMenuCommonSubButtonList_C_SetUIBlock::bShow' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetUIBlock, Temp_bool_Variable) == 0x000001, "Member 'CommandMenuCommonSubButtonList_C_SetUIBlock::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetUIBlock, Temp_byte_Variable) == 0x000002, "Member 'CommandMenuCommonSubButtonList_C_SetUIBlock::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetUIBlock, Temp_byte_Variable_1) == 0x000003, "Member 'CommandMenuCommonSubButtonList_C_SetUIBlock::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetUIBlock, K2Node_Select_Default) == 0x000004, "Member 'CommandMenuCommonSubButtonList_C_SetUIBlock::K2Node_Select_Default' has a wrong offset!");

// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.PurgeButton
// 0x0038 (0x0038 - 0x0000)
struct CommandMenuCommonSubButtonList_C_PurgeButton final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveChildAt_ReturnValue;                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FD7[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FD8[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommandMenuCommonSubButton_C*          K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FD9[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FDA[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenuCommonSubButtonList_C_PurgeButton) == 0x000008, "Wrong alignment on CommandMenuCommonSubButtonList_C_PurgeButton");
static_assert(sizeof(CommandMenuCommonSubButtonList_C_PurgeButton) == 0x000038, "Wrong size on CommandMenuCommonSubButtonList_C_PurgeButton");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_PurgeButton, ButtonId) == 0x000000, "Member 'CommandMenuCommonSubButtonList_C_PurgeButton::ButtonId' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_PurgeButton, Temp_int_Variable) == 0x000004, "Member 'CommandMenuCommonSubButtonList_C_PurgeButton::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_PurgeButton, CallFunc_RemoveChildAt_ReturnValue) == 0x000008, "Member 'CommandMenuCommonSubButtonList_C_PurgeButton::CallFunc_RemoveChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_PurgeButton, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'CommandMenuCommonSubButtonList_C_PurgeButton::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_PurgeButton, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'CommandMenuCommonSubButtonList_C_PurgeButton::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_PurgeButton, K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button) == 0x000020, "Member 'CommandMenuCommonSubButtonList_C_PurgeButton::K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_PurgeButton, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'CommandMenuCommonSubButtonList_C_PurgeButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_PurgeButton, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'CommandMenuCommonSubButtonList_C_PurgeButton::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_PurgeButton, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000030, "Member 'CommandMenuCommonSubButtonList_C_PurgeButton::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_PurgeButton, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000031, "Member 'CommandMenuCommonSubButtonList_C_PurgeButton::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_PurgeButton, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'CommandMenuCommonSubButtonList_C_PurgeButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.InAnimation
// 0x0028 (0x0028 - 0x0000)
struct CommandMenuCommonSubButtonList_C_InAnimation final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FDB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FDC[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommandMenuCommonSubButton_C*          K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FDD[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenuCommonSubButtonList_C_InAnimation) == 0x000008, "Wrong alignment on CommandMenuCommonSubButtonList_C_InAnimation");
static_assert(sizeof(CommandMenuCommonSubButtonList_C_InAnimation) == 0x000028, "Wrong size on CommandMenuCommonSubButtonList_C_InAnimation");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_InAnimation, Temp_int_Variable) == 0x000000, "Member 'CommandMenuCommonSubButtonList_C_InAnimation::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_InAnimation, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'CommandMenuCommonSubButtonList_C_InAnimation::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_InAnimation, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'CommandMenuCommonSubButtonList_C_InAnimation::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_InAnimation, K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button) == 0x000018, "Member 'CommandMenuCommonSubButtonList_C_InAnimation::K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_InAnimation, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'CommandMenuCommonSubButtonList_C_InAnimation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_InAnimation, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000021, "Member 'CommandMenuCommonSubButtonList_C_InAnimation::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_InAnimation, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'CommandMenuCommonSubButtonList_C_InAnimation::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.ExcramationIconVisible
// 0x0050 (0x0050 - 0x0000)
struct CommandMenuCommonSubButtonList_C_ExcramationIconVisible final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsVisible;                                        // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FDE[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FDF[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FE0[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommandMenuCommonSubButton_C*          K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FE1[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FE2[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommandMenuCommonSubButton_C*          K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button_1; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FE3[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenuCommonSubButtonList_C_ExcramationIconVisible) == 0x000008, "Wrong alignment on CommandMenuCommonSubButtonList_C_ExcramationIconVisible");
static_assert(sizeof(CommandMenuCommonSubButtonList_C_ExcramationIconVisible) == 0x000050, "Wrong size on CommandMenuCommonSubButtonList_C_ExcramationIconVisible");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExcramationIconVisible, ButtonId) == 0x000000, "Member 'CommandMenuCommonSubButtonList_C_ExcramationIconVisible::ButtonId' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExcramationIconVisible, bIsVisible) == 0x000004, "Member 'CommandMenuCommonSubButtonList_C_ExcramationIconVisible::bIsVisible' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExcramationIconVisible, Temp_int_Variable) == 0x000008, "Member 'CommandMenuCommonSubButtonList_C_ExcramationIconVisible::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExcramationIconVisible, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'CommandMenuCommonSubButtonList_C_ExcramationIconVisible::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExcramationIconVisible, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'CommandMenuCommonSubButtonList_C_ExcramationIconVisible::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExcramationIconVisible, K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button) == 0x000020, "Member 'CommandMenuCommonSubButtonList_C_ExcramationIconVisible::K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExcramationIconVisible, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'CommandMenuCommonSubButtonList_C_ExcramationIconVisible::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExcramationIconVisible, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'CommandMenuCommonSubButtonList_C_ExcramationIconVisible::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExcramationIconVisible, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000030, "Member 'CommandMenuCommonSubButtonList_C_ExcramationIconVisible::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExcramationIconVisible, K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button_1) == 0x000038, "Member 'CommandMenuCommonSubButtonList_C_ExcramationIconVisible::K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExcramationIconVisible, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'CommandMenuCommonSubButtonList_C_ExcramationIconVisible::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExcramationIconVisible, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'CommandMenuCommonSubButtonList_C_ExcramationIconVisible::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_ExcramationIconVisible, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000048, "Member 'CommandMenuCommonSubButtonList_C_ExcramationIconVisible::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.SetButtonText
// 0x0048 (0x0048 - 0x0000)
struct CommandMenuCommonSubButtonList_C_SetButtonText final
{
public:
	int32                                         ListId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Param_Name;                                        // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FE4[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0010(0x0018)()
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FE5[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommandMenuCommonSubButton_C*          K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenuCommonSubButtonList_C_SetButtonText) == 0x000008, "Wrong alignment on CommandMenuCommonSubButtonList_C_SetButtonText");
static_assert(sizeof(CommandMenuCommonSubButtonList_C_SetButtonText) == 0x000048, "Wrong size on CommandMenuCommonSubButtonList_C_SetButtonText");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetButtonText, ListId) == 0x000000, "Member 'CommandMenuCommonSubButtonList_C_SetButtonText::ListId' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetButtonText, Param_Name) == 0x000004, "Member 'CommandMenuCommonSubButtonList_C_SetButtonText::Param_Name' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetButtonText, CallFunc_Conv_NameToText_ReturnValue) == 0x000010, "Member 'CommandMenuCommonSubButtonList_C_SetButtonText::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetButtonText, CallFunc_GetChildAt_ReturnValue) == 0x000028, "Member 'CommandMenuCommonSubButtonList_C_SetButtonText::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetButtonText, CallFunc_GetChildrenCount_ReturnValue) == 0x000030, "Member 'CommandMenuCommonSubButtonList_C_SetButtonText::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetButtonText, K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button) == 0x000038, "Member 'CommandMenuCommonSubButtonList_C_SetButtonText::K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetButtonText, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'CommandMenuCommonSubButtonList_C_SetButtonText::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetButtonText, CallFunc_Less_IntInt_ReturnValue) == 0x000041, "Member 'CommandMenuCommonSubButtonList_C_SetButtonText::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.SetBookmarkEnable
// 0x0028 (0x0028 - 0x0000)
struct CommandMenuCommonSubButtonList_C_SetBookmarkEnable final
{
public:
	int32                                         InButtonId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnable;                                           // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FE6[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FE7[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommandMenuCommonSubButton_C*          K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenuCommonSubButtonList_C_SetBookmarkEnable) == 0x000008, "Wrong alignment on CommandMenuCommonSubButtonList_C_SetBookmarkEnable");
static_assert(sizeof(CommandMenuCommonSubButtonList_C_SetBookmarkEnable) == 0x000028, "Wrong size on CommandMenuCommonSubButtonList_C_SetBookmarkEnable");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetBookmarkEnable, InButtonId) == 0x000000, "Member 'CommandMenuCommonSubButtonList_C_SetBookmarkEnable::InButtonId' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetBookmarkEnable, bEnable) == 0x000004, "Member 'CommandMenuCommonSubButtonList_C_SetBookmarkEnable::bEnable' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetBookmarkEnable, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'CommandMenuCommonSubButtonList_C_SetBookmarkEnable::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetBookmarkEnable, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'CommandMenuCommonSubButtonList_C_SetBookmarkEnable::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetBookmarkEnable, K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button) == 0x000018, "Member 'CommandMenuCommonSubButtonList_C_SetBookmarkEnable::K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetBookmarkEnable, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'CommandMenuCommonSubButtonList_C_SetBookmarkEnable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_SetBookmarkEnable, CallFunc_Less_IntInt_ReturnValue) == 0x000021, "Member 'CommandMenuCommonSubButtonList_C_SetBookmarkEnable::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Set Bookmark Array Enable
// 0x0038 (0x0038 - 0x0000)
struct CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable final
{
public:
	TArray<class FString>                         BookmarkNameList;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FE8[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBBookMarkerSlot                             CallFunc_FindBookMarkSlot_New_Slot;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindBookMarkSlot_New_ReturnValue;         // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FE9[0x1];                                     // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable) == 0x000008, "Wrong alignment on CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable");
static_assert(sizeof(CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable) == 0x000038, "Wrong size on CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable, BookmarkNameList) == 0x000000, "Member 'CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable::BookmarkNameList' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable, Temp_int_Array_Index_Variable) == 0x000014, "Member 'CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable, CallFunc_Array_Get_Item) == 0x000020, "Member 'CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable, CallFunc_FindBookMarkSlot_New_Slot) == 0x000030, "Member 'CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable::CallFunc_FindBookMarkSlot_New_Slot' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable, CallFunc_FindBookMarkSlot_New_ReturnValue) == 0x000031, "Member 'CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable::CallFunc_FindBookMarkSlot_New_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable, CallFunc_Less_IntInt_ReturnValue) == 0x000032, "Member 'CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'CommandMenuCommonSubButtonList_C_Set_Bookmark_Array_Enable::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Set Button Abort Anim and Collapse
// 0x0048 (0x0048 - 0x0000)
struct CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse final
{
public:
	int32                                         InButtonId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FEA[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FEB[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommandMenuCommonSubButton_C*          K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FEC[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommandMenuCommonSubButton_C*          K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button_1; // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FED[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse) == 0x000008, "Wrong alignment on CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse");
static_assert(sizeof(CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse) == 0x000048, "Wrong size on CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse, InButtonId) == 0x000000, "Member 'CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse::InButtonId' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse, Temp_int_Variable) == 0x000004, "Member 'CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse, CallFunc_GetChildrenCount_ReturnValue) == 0x000008, "Member 'CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse, K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button) == 0x000020, "Member 'CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse::K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000029, "Member 'CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse, K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button_1) == 0x000030, "Member 'CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse::K2Node_DynamicCast_AsCommand_Menu_Common_Sub_Button_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000040, "Member 'CommandMenuCommonSubButtonList_C_Set_Button_Abort_Anim_and_Collapse::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

