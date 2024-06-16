#pragma once

 

// Package: QuestBoard

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "QuestDetail_FinishStatus_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function QuestBoard.QuestBoard_C.ExecuteUbergraph_QuestBoard
// 0x01F8 (0x01F8 - 0x0000)
struct QuestBoard_C_ExecuteUbergraph_QuestBoard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAcceptableQuestNum_Num;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0008(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm)
	TArray<struct FQuestBoardQuestData>           K2Node_CustomEvent_InQuestList;                    // 0x0058(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_QuestIndex;                     // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RegistReadedIdByInt_bIsValid;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestDetail_FinishStatus                     K2Node_ComponentBoundEvent_FinishStatus;           // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79D4[0x2];                                     // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_QuestIndex;             // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79D5[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0090(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79D6[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UQuestBoard_ListItem_C* Item)> K2Node_CreateDelegate_OutputDelegate;              // 0x009C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79D7[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestBoard_ListItem_C*                 K2Node_CustomEvent_Item;                           // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFilterGroup>                   K2Node_ComponentBoundEvent_Filters;                // 0x00B8(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79D8[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 QuestIndex)>             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00D4(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79D9[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x00FC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79DA[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestBoard_ListItem_C*                 CallFunc_Create_ReturnValue;                       // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79DB[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestBoardQuestData                   CallFunc_Array_Get_Item;                           // 0x0128(0x0018)(NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79DC[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQuestBoard_ListItem_C*                 K2Node_DynamicCast_AsQuest_Board_List_Item;        // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79DD[0x2];                                     // 0x015A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0160(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue_1;                // 0x0168(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79DE[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UCommonIconToolTip_C*>           CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0188(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UCommonIconToolTip_C*                   CallFunc_Array_Get_Item_1;                         // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79DF[0x3];                                     // 0x01A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01B8(0x0018)()
	class UQuestBoard_ListItemSeparator_C*        CallFunc_Create_ReturnValue_1;                     // 0x01D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01D8(0x0018)()
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestBoard_C_ExecuteUbergraph_QuestBoard) == 0x000008, "Wrong alignment on QuestBoard_C_ExecuteUbergraph_QuestBoard");
static_assert(sizeof(QuestBoard_C_ExecuteUbergraph_QuestBoard) == 0x0001F8, "Wrong size on QuestBoard_C_ExecuteUbergraph_QuestBoard");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, EntryPoint) == 0x000000, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::EntryPoint' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_GetAcceptableQuestNum_Num) == 0x000004, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_GetAcceptableQuestNum_Num' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, K2Node_MakeStruct_FormatArgumentData) == 0x000008, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, K2Node_MakeArray_Array) == 0x000048, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, K2Node_CustomEvent_InQuestList) == 0x000058, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::K2Node_CustomEvent_InQuestList' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, K2Node_CustomEvent_QuestIndex) == 0x00006C, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::K2Node_CustomEvent_QuestIndex' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_RegistReadedIdByInt_bIsValid) == 0x000070, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_RegistReadedIdByInt_bIsValid' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, K2Node_ComponentBoundEvent_FinishStatus) == 0x000071, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::K2Node_ComponentBoundEvent_FinishStatus' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, K2Node_ComponentBoundEvent_QuestIndex) == 0x000074, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::K2Node_ComponentBoundEvent_QuestIndex' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, K2Node_SwitchEnum_CmpSuccess) == 0x000078, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_PlayAnimation_ReturnValue) == 0x000080, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_PlayAnimation_ReturnValue_1) == 0x000088, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, K2Node_Event_Animation) == 0x000090, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000098, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, K2Node_CreateDelegate_OutputDelegate) == 0x00009C, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_IsValid_ReturnValue) == 0x0000AC, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, K2Node_CustomEvent_Item) == 0x0000B0, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, K2Node_ComponentBoundEvent_Filters) == 0x0000B8, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::K2Node_ComponentBoundEvent_Filters' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_GetChildrenCount_ReturnValue) == 0x0000C8, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000CC, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_IsAnimationPlaying_ReturnValue) == 0x0000D0, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000D4, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, Temp_int_Array_Index_Variable) == 0x0000E4, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, Temp_int_Loop_Counter_Variable) == 0x0000E8, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, Temp_int_Loop_Counter_Variable_1) == 0x0000EC, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_Less_IntInt_ReturnValue) == 0x0000F0, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_Add_IntInt_ReturnValue) == 0x0000F4, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000F8, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, K2Node_MakeStruct_Margin) == 0x0000FC, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_Create_ReturnValue) == 0x000110, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, Temp_int_Array_Index_Variable_1) == 0x000118, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000120, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_Array_Get_Item) == 0x000128, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, Temp_int_Variable) == 0x000140, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_GetChildAt_ReturnValue) == 0x000148, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, K2Node_DynamicCast_AsQuest_Board_List_Item) == 0x000150, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::K2Node_DynamicCast_AsQuest_Board_List_Item' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, K2Node_DynamicCast_bSuccess) == 0x000158, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000159, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_Add_IntInt_ReturnValue_2) == 0x00015C, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_K2_SetTimer_ReturnValue) == 0x000160, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_K2_SetTimer_ReturnValue_1) == 0x000168, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_K2_SetTimer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_PlaySE_ReturnValue) == 0x000170, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_PlayAnimation_ReturnValue_2) == 0x000178, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_PlaySE_ReturnValue_1) == 0x000180, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_PlaySE_ReturnValue_2) == 0x000184, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000188, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_Array_Get_Item_1) == 0x000198, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_Array_Length_ReturnValue_1) == 0x0001A0, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001A4, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0001A8, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_Conv_StringToText_ReturnValue) == 0x0001B8, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_Create_ReturnValue_1) == 0x0001D0, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_Format_ReturnValue) == 0x0001D8, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ExecuteUbergraph_QuestBoard, CallFunc_AddChildToVerticalBox_ReturnValue_1) == 0x0001F0, "Member 'QuestBoard_C_ExecuteUbergraph_QuestBoard::CallFunc_AddChildToVerticalBox_ReturnValue_1' has a wrong offset!");

// Function QuestBoard.QuestBoard_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_4_OnApplyFilter__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct QuestBoard_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_4_OnApplyFilter__DelegateSignature final
{
public:
	TArray<struct FFilterGroup>                   Filters;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(QuestBoard_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_4_OnApplyFilter__DelegateSignature) == 0x000008, "Wrong alignment on QuestBoard_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_4_OnApplyFilter__DelegateSignature");
static_assert(sizeof(QuestBoard_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_4_OnApplyFilter__DelegateSignature) == 0x000010, "Wrong size on QuestBoard_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_4_OnApplyFilter__DelegateSignature");
static_assert(offsetof(QuestBoard_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_4_OnApplyFilter__DelegateSignature, Filters) == 0x000000, "Member 'QuestBoard_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_4_OnApplyFilter__DelegateSignature::Filters' has a wrong offset!");

// Function QuestBoard.QuestBoard_C.OnListItemSelected
// 0x0008 (0x0008 - 0x0000)
struct QuestBoard_C_OnListItemSelected final
{
public:
	class UQuestBoard_ListItem_C*                 Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestBoard_C_OnListItemSelected) == 0x000008, "Wrong alignment on QuestBoard_C_OnListItemSelected");
static_assert(sizeof(QuestBoard_C_OnListItemSelected) == 0x000008, "Wrong size on QuestBoard_C_OnListItemSelected");
static_assert(offsetof(QuestBoard_C_OnListItemSelected, Item) == 0x000000, "Member 'QuestBoard_C_OnListItemSelected::Item' has a wrong offset!");

// Function QuestBoard.QuestBoard_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct QuestBoard_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestBoard_C_OnAnimationFinished) == 0x000008, "Wrong alignment on QuestBoard_C_OnAnimationFinished");
static_assert(sizeof(QuestBoard_C_OnAnimationFinished) == 0x000008, "Wrong size on QuestBoard_C_OnAnimationFinished");
static_assert(offsetof(QuestBoard_C_OnAnimationFinished, Animation) == 0x000000, "Member 'QuestBoard_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function QuestBoard.QuestBoard_C.BndEvt__QuestDetail_Accepted_K2Node_ComponentBoundEvent_103_OnFinish__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct QuestBoard_C_BndEvt__QuestDetail_Accepted_K2Node_ComponentBoundEvent_103_OnFinish__DelegateSignature final
{
public:
	EQuestDetail_FinishStatus                     FinishStatus;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79E0[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         QuestIndex;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestBoard_C_BndEvt__QuestDetail_Accepted_K2Node_ComponentBoundEvent_103_OnFinish__DelegateSignature) == 0x000004, "Wrong alignment on QuestBoard_C_BndEvt__QuestDetail_Accepted_K2Node_ComponentBoundEvent_103_OnFinish__DelegateSignature");
static_assert(sizeof(QuestBoard_C_BndEvt__QuestDetail_Accepted_K2Node_ComponentBoundEvent_103_OnFinish__DelegateSignature) == 0x000008, "Wrong size on QuestBoard_C_BndEvt__QuestDetail_Accepted_K2Node_ComponentBoundEvent_103_OnFinish__DelegateSignature");
static_assert(offsetof(QuestBoard_C_BndEvt__QuestDetail_Accepted_K2Node_ComponentBoundEvent_103_OnFinish__DelegateSignature, FinishStatus) == 0x000000, "Member 'QuestBoard_C_BndEvt__QuestDetail_Accepted_K2Node_ComponentBoundEvent_103_OnFinish__DelegateSignature::FinishStatus' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_BndEvt__QuestDetail_Accepted_K2Node_ComponentBoundEvent_103_OnFinish__DelegateSignature, QuestIndex) == 0x000004, "Member 'QuestBoard_C_BndEvt__QuestDetail_Accepted_K2Node_ComponentBoundEvent_103_OnFinish__DelegateSignature::QuestIndex' has a wrong offset!");

// Function QuestBoard.QuestBoard_C.OnClick_Event_0
// 0x0004 (0x0004 - 0x0000)
struct QuestBoard_C_OnClick_Event_0 final
{
public:
	int32                                         QuestIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestBoard_C_OnClick_Event_0) == 0x000004, "Wrong alignment on QuestBoard_C_OnClick_Event_0");
static_assert(sizeof(QuestBoard_C_OnClick_Event_0) == 0x000004, "Wrong size on QuestBoard_C_OnClick_Event_0");
static_assert(offsetof(QuestBoard_C_OnClick_Event_0, QuestIndex) == 0x000000, "Member 'QuestBoard_C_OnClick_Event_0::QuestIndex' has a wrong offset!");

// Function QuestBoard.QuestBoard_C.CreateListItem
// 0x0010 (0x0010 - 0x0000)
struct QuestBoard_C_CreateListItem final
{
public:
	TArray<struct FQuestBoardQuestData>           InQuestList;                                       // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(QuestBoard_C_CreateListItem) == 0x000008, "Wrong alignment on QuestBoard_C_CreateListItem");
static_assert(sizeof(QuestBoard_C_CreateListItem) == 0x000010, "Wrong size on QuestBoard_C_CreateListItem");
static_assert(offsetof(QuestBoard_C_CreateListItem, InQuestList) == 0x000000, "Member 'QuestBoard_C_CreateListItem::InQuestList' has a wrong offset!");

// Function QuestBoard.QuestBoard_C.ChangeQuestStatus
// 0x0030 (0x0030 - 0x0000)
struct QuestBoard_C_ChangeQuestStatus final
{
public:
	int32                                         QuestIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpQuestIndex;                                     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FindListItem_OutListIndex;                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79E1[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  CallFunc_GetQuestStatus_QuestStatus;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79E2[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestBoard_ListItem_C*                 K2Node_DynamicCast_AsQuest_Board_List_Item;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestBoard_C_ChangeQuestStatus) == 0x000008, "Wrong alignment on QuestBoard_C_ChangeQuestStatus");
static_assert(sizeof(QuestBoard_C_ChangeQuestStatus) == 0x000030, "Wrong size on QuestBoard_C_ChangeQuestStatus");
static_assert(offsetof(QuestBoard_C_ChangeQuestStatus, QuestIndex) == 0x000000, "Member 'QuestBoard_C_ChangeQuestStatus::QuestIndex' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ChangeQuestStatus, TmpQuestIndex) == 0x000004, "Member 'QuestBoard_C_ChangeQuestStatus::TmpQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ChangeQuestStatus, CallFunc_FindListItem_OutListIndex) == 0x000008, "Member 'QuestBoard_C_ChangeQuestStatus::CallFunc_FindListItem_OutListIndex' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ChangeQuestStatus, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'QuestBoard_C_ChangeQuestStatus::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ChangeQuestStatus, CallFunc_GetQuestStatus_QuestStatus) == 0x000018, "Member 'QuestBoard_C_ChangeQuestStatus::CallFunc_GetQuestStatus_QuestStatus' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ChangeQuestStatus, K2Node_DynamicCast_AsQuest_Board_List_Item) == 0x000020, "Member 'QuestBoard_C_ChangeQuestStatus::K2Node_DynamicCast_AsQuest_Board_List_Item' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ChangeQuestStatus, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'QuestBoard_C_ChangeQuestStatus::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ChangeQuestStatus, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000029, "Member 'QuestBoard_C_ChangeQuestStatus::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_ChangeQuestStatus, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00002A, "Member 'QuestBoard_C_ChangeQuestStatus::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function QuestBoard.QuestBoard_C.RemoveListItem
// 0x000C (0x000C - 0x0000)
struct QuestBoard_C_RemoveListItem final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FindListItem_OutListIndex;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RemoveChildAt_ReturnValue;                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestBoard_C_RemoveListItem) == 0x000004, "Wrong alignment on QuestBoard_C_RemoveListItem");
static_assert(sizeof(QuestBoard_C_RemoveListItem) == 0x00000C, "Wrong size on QuestBoard_C_RemoveListItem");
static_assert(offsetof(QuestBoard_C_RemoveListItem, InQuestIndex) == 0x000000, "Member 'QuestBoard_C_RemoveListItem::InQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_RemoveListItem, CallFunc_FindListItem_OutListIndex) == 0x000004, "Member 'QuestBoard_C_RemoveListItem::CallFunc_FindListItem_OutListIndex' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_RemoveListItem, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000008, "Member 'QuestBoard_C_RemoveListItem::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_RemoveListItem, CallFunc_RemoveChildAt_ReturnValue) == 0x000009, "Member 'QuestBoard_C_RemoveListItem::CallFunc_RemoveChildAt_ReturnValue' has a wrong offset!");

// Function QuestBoard.QuestBoard_C.FindListItem
// 0x0038 (0x0038 - 0x0000)
struct QuestBoard_C_FindListItem final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutListIndex;                                      // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79E3[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestBoard_ListItem_C*                 K2Node_DynamicCast_AsQuest_Board_List_Item;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79E4[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetQuestIndex_QuestIndex;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestBoard_C_FindListItem) == 0x000008, "Wrong alignment on QuestBoard_C_FindListItem");
static_assert(sizeof(QuestBoard_C_FindListItem) == 0x000038, "Wrong size on QuestBoard_C_FindListItem");
static_assert(offsetof(QuestBoard_C_FindListItem, InQuestIndex) == 0x000000, "Member 'QuestBoard_C_FindListItem::InQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_FindListItem, OutListIndex) == 0x000004, "Member 'QuestBoard_C_FindListItem::OutListIndex' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_FindListItem, Temp_int_Variable) == 0x000008, "Member 'QuestBoard_C_FindListItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_FindListItem, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'QuestBoard_C_FindListItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_FindListItem, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'QuestBoard_C_FindListItem::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_FindListItem, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'QuestBoard_C_FindListItem::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_FindListItem, K2Node_DynamicCast_AsQuest_Board_List_Item) == 0x000020, "Member 'QuestBoard_C_FindListItem::K2Node_DynamicCast_AsQuest_Board_List_Item' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_FindListItem, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'QuestBoard_C_FindListItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_FindListItem, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'QuestBoard_C_FindListItem::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_FindListItem, CallFunc_GetQuestIndex_QuestIndex) == 0x000030, "Member 'QuestBoard_C_FindListItem::CallFunc_GetQuestIndex_QuestIndex' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_FindListItem, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000034, "Member 'QuestBoard_C_FindListItem::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_FindListItem, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000035, "Member 'QuestBoard_C_FindListItem::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function QuestBoard.QuestBoard_C.RandomPlayAnimation
// 0x0018 (0x0018 - 0x0000)
struct QuestBoard_C_RandomPlayAnimation final
{
public:
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79E5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestBoard_C_RandomPlayAnimation) == 0x000008, "Wrong alignment on QuestBoard_C_RandomPlayAnimation");
static_assert(sizeof(QuestBoard_C_RandomPlayAnimation) == 0x000018, "Wrong size on QuestBoard_C_RandomPlayAnimation");
static_assert(offsetof(QuestBoard_C_RandomPlayAnimation, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000000, "Member 'QuestBoard_C_RandomPlayAnimation::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_RandomPlayAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'QuestBoard_C_RandomPlayAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_RandomPlayAnimation, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'QuestBoard_C_RandomPlayAnimation::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function QuestBoard.QuestBoard_C.RandomPlayAnimation2
// 0x0018 (0x0018 - 0x0000)
struct QuestBoard_C_RandomPlayAnimation2 final
{
public:
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79E6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestBoard_C_RandomPlayAnimation2) == 0x000008, "Wrong alignment on QuestBoard_C_RandomPlayAnimation2");
static_assert(sizeof(QuestBoard_C_RandomPlayAnimation2) == 0x000018, "Wrong size on QuestBoard_C_RandomPlayAnimation2");
static_assert(offsetof(QuestBoard_C_RandomPlayAnimation2, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000000, "Member 'QuestBoard_C_RandomPlayAnimation2::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_RandomPlayAnimation2, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'QuestBoard_C_RandomPlayAnimation2::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_C_RandomPlayAnimation2, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'QuestBoard_C_RandomPlayAnimation2::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

}

